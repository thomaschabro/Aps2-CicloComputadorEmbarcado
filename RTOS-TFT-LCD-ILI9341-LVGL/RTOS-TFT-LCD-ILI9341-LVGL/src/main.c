/************************************************************************/
/* includes                                                             */
/************************************************************************/

#include <asf.h>
#include <string.h>
#include "ili9341.h"
#include "lvgl.h"
#include "touch/touch.h"
#include "images/template.h"
#include "arm_math.h"

LV_FONT_DECLARE(TitilliumWeb);
LV_FONT_DECLARE(TitilliumWeb30);
LV_FONT_DECLARE(locationDot);
LV_FONT_DECLARE(TitilliumWeb20);

#define MAGNET	PIOA
#define MAGNET_ID	ID_PIOA
#define MAGNET_IDX	19
#define MAGNET_IDX_MASK	(1u << MAGNET_IDX)

#define BUTTON	PIOA
#define BUTTON_ID	ID_PIOA
#define BUTTON_IDX	11
#define BUTTON_IDX_MASK	(1u << BUTTON_IDX)

typedef struct  {
	uint32_t year;
	uint32_t month;
	uint32_t day;
	uint32_t week;
	uint32_t hour;
	uint32_t minute;
	uint32_t seccond;
} calendar;

/************************************************************************/
/* LCD / LVGL                                                           */
/************************************************************************/

#define LV_HOR_RES_MAX          (240)
#define LV_VER_RES_MAX          (320)

/*A static or global variable to store the buffers*/
static lv_disp_draw_buf_t disp_buf;

/*Static or global buffer(s). The second buffer is optional*/
static lv_color_t buf_1[LV_HOR_RES_MAX * LV_VER_RES_MAX];
static lv_disp_drv_t disp_drv;          /*A variable to hold the drivers. Must be static or global.*/
static lv_indev_drv_t indev_drv;
/************************************************************************/
/* Prototypes                                                           */
/************************************************************************/

void but_callback(void);
void tela1(void);
void del_tela1(void);
void tela2(void);
float kmh_to_hz(float vel, float raio);
void RTC_Handler(void);
void principal(void);
static void RTC_init(Rtc *rtc, uint32_t id_rtc, calendar t, uint32_t irq_type);

/************************************************************************/
/* RTOS                                                                 */
/************************************************************************/

SemaphoreHandle_t xSemaphore;

#define TASK_LCD_STACK_SIZE                (1024*6/sizeof(portSTACK_TYPE))
#define TASK_LCD_STACK_PRIORITY            (tskIDLE_PRIORITY)

#define TASK_SIMULATOR_STACK_SIZE (4096 / sizeof(portSTACK_TYPE))
#define TASK_SIMULATOR_STACK_PRIORITY (tskIDLE_PRIORITY)

#define RAIO 0.508/2
#define VEL_MAX_KMH  5.0f
#define VEL_MIN_KMH  0.5f
#define RAMP

#define LOC_DOT "\xEF\x8F\x85"

extern void vApplicationStackOverflowHook(xTaskHandle *pxTask,  signed char *pcTaskName);
extern void vApplicationIdleHook(void);
extern void vApplicationTickHook(void);
extern void vApplicationMallocFailedHook(void);
extern void xPortSysTickHandler(void);

extern void vApplicationStackOverflowHook(xTaskHandle *pxTask, signed char *pcTaskName) {
	printf("stack overflow %x %s\r\n", pxTask, (portCHAR *)pcTaskName);
	for (;;) {	}
}

extern void vApplicationIdleHook(void) { }

extern void vApplicationTickHook(void) { }

extern void vApplicationMallocFailedHook(void) {
	configASSERT( ( volatile void * ) NULL );
}

/************************************************************************/
/* VARIAVEIS LVGL                                                       */
/************************************************************************/
static lv_obj_t * scr1;  // screen 1
static lv_obj_t * scr2;  // screen 2
static lv_obj_t * scr3;  // screen 3

lv_obj_t * velocidade;
lv_obj_t * velocidadefloat;
lv_obj_t * velocidade2;
lv_obj_t * velocidadefloat2;
lv_obj_t * aceleracao;
lv_obj_t * aceleracao2;
lv_obj_t * kmh;
lv_obj_t * timeClock;
lv_obj_t * bkgd;

calendar rtc_initial = {2023, 05, 24, 21, 18, 18 ,1};
	
/************************************************************************/
/* funcoes                                                              */
/************************************************************************/
void magnet_callback(){
	xSemaphoreGiveFromISR(xSemaphore,0);
}

float kmh_to_hz(float vel, float raio) {
	float f = vel / (2*PI*raio*3.6);
	return(f);
}

void RTC_Handler(void) {
	uint32_t ul_status = rtc_get_status(RTC);
	
	/* seccond tick */
	if ((ul_status & RTC_SR_SEC) == RTC_SR_SEC) {
		// o c?digo para irq de segundo vem aqui
		uint32_t current_hour, current_min, current_sec;
		rtc_get_time(RTC, &current_hour, &current_min, &current_sec);
		lv_label_set_text_fmt(timeClock,"%02d:%02d:%02d",current_hour,current_min,current_sec);
	}
	
	/* Time or date alarm */
	if ((ul_status & RTC_SR_ALARM) == RTC_SR_ALARM) {
		// o c?digo para irq de alame vem aqui
	}

	rtc_clear_status(RTC, RTC_SCCR_SECCLR);
	rtc_clear_status(RTC, RTC_SCCR_ALRCLR);
	rtc_clear_status(RTC, RTC_SCCR_ACKCLR);
	rtc_clear_status(RTC, RTC_SCCR_TIMCLR);
	rtc_clear_status(RTC, RTC_SCCR_CALCLR);
	rtc_clear_status(RTC, RTC_SCCR_TDERRCLR);
}

static void RTC_init(Rtc *rtc, uint32_t id_rtc, calendar t, uint32_t irq_type) {
	/* Configura o PMC */
	pmc_enable_periph_clk(ID_RTC);

	/* Default RTC configuration, 24-hour mode */
	rtc_set_hour_mode(rtc, 0);

	/* Configura data e hora manualmente */
	rtc_set_date(rtc, t.year, t.month, t.day, t.week);
	rtc_set_time(rtc, t.hour, t.minute, t.seccond);

	/* Configure RTC interrupts */
	NVIC_DisableIRQ(id_rtc);
	NVIC_ClearPendingIRQ(id_rtc);
	NVIC_SetPriority(id_rtc, 4);
	NVIC_EnableIRQ(id_rtc);

	/* Ativa interrupcao via alarme */
	rtc_enable_interrupt(rtc,  irq_type);
}

void io_init(){
	pmc_enable_periph_clk(MAGNET_ID);
	pio_configure(MAGNET,PIO_INPUT,MAGNET_IDX_MASK,PIO_DEFAULT);
	
	pio_handler_set(MAGNET,
	MAGNET_ID,
	MAGNET_IDX_MASK,
	PIO_IT_FALL_EDGE,
	magnet_callback);
	
	pio_enable_interrupt(MAGNET,MAGNET_IDX_MASK);
	pio_get_interrupt_status(MAGNET);
	
	NVIC_EnableIRQ(MAGNET_ID);
	NVIC_SetPriority(MAGNET_ID,4);
}

static void RTT_init(float freqPrescale, uint32_t IrqNPulses, uint32_t rttIRQSource) {

	uint16_t pllPreScale = (int) (((float) 32768) / freqPrescale);
	
	rtt_sel_source(RTT, false);
	rtt_init(RTT, pllPreScale);
	
	if (rttIRQSource & RTT_MR_ALMIEN) {
		uint32_t ul_previous_time;
		ul_previous_time = rtt_read_timer_value(RTT);
		while (ul_previous_time == rtt_read_timer_value(RTT));
		rtt_write_alarm_time(RTT, IrqNPulses+ul_previous_time);
	}

	/* config NVIC */
	NVIC_DisableIRQ(RTT_IRQn);
	NVIC_ClearPendingIRQ(RTT_IRQn);
	NVIC_SetPriority(RTT_IRQn, 4);
	NVIC_EnableIRQ(RTT_IRQn);

	/* Enable RTT interrupt */
	if (rttIRQSource & (RTT_MR_RTTINCIEN | RTT_MR_ALMIEN))
	rtt_enable_interrupt(RTT, rttIRQSource);
	else
	rtt_disable_interrupt(RTT, RTT_MR_RTTINCIEN | RTT_MR_ALMIEN);
}

void RTT_Handler(void) {
	uint32_t ul_status;
	ul_status = rtt_get_status(RTT);

	/* IRQ due to Alarm */
	if ((ul_status & RTT_SR_ALMS) == RTT_SR_ALMS) {
	}
}

/************************************************************************/
/* lvgl                                                                 */
/************************************************************************/


void principal(void){
	timeClock = lv_label_create(lv_scr_act());
	lv_obj_align(timeClock,LV_ALIGN_BOTTOM_MID,0,-50);
	lv_obj_set_style_text_font(timeClock, &TitilliumWeb30 , LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(timeClock, lv_color_black(), LV_STATE_DEFAULT);
}

void tela1(void) {
	static lv_style_t stylebtn;
	lv_style_init(&stylebtn);
	lv_style_set_bg_color(&stylebtn, lv_color_white());
	lv_style_set_text_color(&stylebtn, lv_color_black());
	lv_style_set_border_width(&stylebtn, 0);
	lv_style_set_shadow_width(&stylebtn,0);
	
	bkgd = lv_img_create(scr1);
	lv_img_set_src(bkgd, &logocerta);
	lv_obj_align(bkgd, LV_ALIGN_CENTER, 0, 0);
	lv_obj_move_background(bkgd);

	int valor = 0;
	velocidade = lv_label_create(scr1);
	lv_obj_align(velocidade,LV_ALIGN_CENTER,0,0);
	lv_obj_set_style_text_font(velocidade, &TitilliumWeb , LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(velocidade, lv_color_black(), LV_STATE_DEFAULT);
	lv_label_set_text_fmt(velocidade,"%d.",valor);
	
	int valorFloat = 0;
	velocidadefloat = lv_label_create(scr1);
	lv_obj_align(velocidadefloat,LV_ALIGN_CENTER,53,0);
	lv_obj_set_style_text_font(velocidadefloat, &TitilliumWeb , LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(velocidadefloat, lv_color_black(), LV_STATE_DEFAULT);
	lv_label_set_text_fmt(velocidadefloat,"%d",valorFloat);
	
	kmh = lv_label_create(scr1);
	lv_obj_align(kmh,LV_ALIGN_CENTER, 20, 40);
	lv_obj_set_style_text_font(kmh, &TitilliumWeb30 , LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(kmh, lv_color_black(), LV_STATE_DEFAULT);
	lv_label_set_text(kmh,"Km/h");
	
	aceleracao = lv_label_create(scr1);
	lv_obj_align_to(aceleracao,velocidade,LV_ALIGN_LEFT_MID,-35,0);
	lv_obj_set_style_text_font(aceleracao, LV_FONT_DEFAULT , LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(aceleracao, lv_color_black(), LV_STATE_DEFAULT);
	lv_label_set_text(aceleracao,LV_SYMBOL_MINUS);
}

/************************************************************************/
/* TASKS                                                                */
/************************************************************************/

static void task_lcd(void *pvParameters) {
	int px, py;
	io_init();
	scr1 = lv_obj_create(NULL);
	scr2 = lv_obj_create(NULL);
	scr3 = lv_obj_create(NULL);
	lv_scr_load(scr1);
	tela1();
	principal();
	RTC_init(RTC, ID_RTC, rtc_initial, RTC_IER_SECEN);
	
	for (;;)  {
		lv_tick_inc(50);
		lv_task_handler();
		vTaskDelay(50);
	}
}

static void task_time(void *pvParameters){
	RTT_init(100,0,NULL);
	uint32_t ciclos = 0;
	float dt = 0;
	float w = 0;
	float f = 0;
	float d = 0;
	float r =  0.508/2;
	float v = 0;
	float t_total = 0;
	float vi = 0;
	
	for (;;){
		if(xSemaphoreTake(xSemaphore,0)){
			ciclos = rtt_read_timer_value(RTT);
			RTT_init(100,0,NULL);
			dt = ciclos*0.01;
			f = 1/dt;
			w = 2*PI*f;
			v = w*r*3.6;
			
			if(v-vi>0.0000001){
				lv_label_set_text(aceleracao,LV_SYMBOL_UP);
				lv_label_set_text(aceleracao2,LV_SYMBOL_UP);
				printf("CIMA\n");
			}else if (vi-v>0.0000001){
				lv_label_set_text(aceleracao, LV_SYMBOL_DOWN);
				lv_label_set_text(aceleracao2, LV_SYMBOL_DOWN);
				printf("BAIXO\n");
			}else{
				lv_label_set_text(aceleracao, LV_SYMBOL_MINUS);
				lv_label_set_text(aceleracao2, LV_SYMBOL_MINUS);
				printf("CONTINUA\n");
			}
			
			lv_label_set_text_fmt(velocidade,"  %d.",(uint32_t)v);
			lv_label_set_text_fmt(velocidadefloat,"%d",((uint32_t)(v * 10)) % 10);
			lv_label_set_text_fmt(velocidade2,"  %d.",(uint32_t)v);
			lv_label_set_text_fmt(velocidadefloat2,"%d",((uint32_t)(v * 10)) % 10);
			printf("Velocidade: %d\n",(uint32_t)v);
			printf("VelocidadeFloat: %d\n",((uint32_t)(v * 10)) % 10);
			vi = v;
		}
	}
}

static void task_simulador(void *pvParameters) {
	pmc_enable_periph_clk(ID_PIOC);
	pio_set_output(PIOC, PIO_PC31, 1, 0, 0);

	float vel = VEL_MAX_KMH;
	float f;
	int ramp_up = 1;

	while(1){
		pio_clear(PIOC, PIO_PC31);
		delay_ms(1);
		pio_set(PIOC, PIO_PC31);

		if (ramp_up) {
			printf("[SIMU] ACELERANDO: %d \n", (int) (10*vel));
			vel += 0.5;
			} else {
			printf("[SIMU] DESACELERANDO: %d \n",  (int) (10*vel));
			vel -= 0.5;
		}

		if (vel >= VEL_MAX_KMH)
		ramp_up = 0;
		else if (vel <= VEL_MIN_KMH)
		ramp_up = 1;
		
		vel = 5;
		printf("[SIMU] CONSTANTE: %d \n", (int) (10*vel));

		f = kmh_to_hz(vel, RAIO);
		int t = 965*(1.0/f); //UTILIZADO 965 como multiplicador ao invés de 1000
		//para compensar o atraso gerado pelo Escalonador do freeRTOS
		delay_ms(t);
	}
}

/************************************************************************/
/* configs                                                              */
/************************************************************************/

static void configure_lcd(void) {
	/**LCD pin configure on SPI*/
	pio_configure_pin(LCD_SPI_MISO_PIO, LCD_SPI_MISO_FLAGS);  //
	pio_configure_pin(LCD_SPI_MOSI_PIO, LCD_SPI_MOSI_FLAGS);
	pio_configure_pin(LCD_SPI_SPCK_PIO, LCD_SPI_SPCK_FLAGS);
	pio_configure_pin(LCD_SPI_NPCS_PIO, LCD_SPI_NPCS_FLAGS);
	pio_configure_pin(LCD_SPI_RESET_PIO, LCD_SPI_RESET_FLAGS);
	pio_configure_pin(LCD_SPI_CDS_PIO, LCD_SPI_CDS_FLAGS);
	
	ili9341_init();
	ili9341_backlight_on();
}

static void configure_console(void) {
	const usart_serial_options_t uart_serial_options = {
		.baudrate = USART_SERIAL_EXAMPLE_BAUDRATE,
		.charlength = USART_SERIAL_CHAR_LENGTH,
		.paritytype = USART_SERIAL_PARITY,
		.stopbits = USART_SERIAL_STOP_BIT,
	};

	/* Configure console UART. */
	stdio_serial_init(CONSOLE_UART, &uart_serial_options);

	/* Specify that stdout should not be buffered. */
	setbuf(stdout, NULL);
}

/************************************************************************/
/* port lvgl                                                            */
/************************************************************************/

void my_flush_cb(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p) {
	ili9341_set_top_left_limit(area->x1, area->y1);   ili9341_set_bottom_right_limit(area->x2, area->y2);
	ili9341_copy_pixels_to_screen(color_p,  (area->x2 + 1 - area->x1) * (area->y2 + 1 - area->y1));
	
	/* IMPORTANT!!!
	* Inform the graphics library that you are ready with the flushing*/
	lv_disp_flush_ready(disp_drv);
}

void my_input_read(lv_indev_drv_t * drv, lv_indev_data_t*data) {
	int px, py, pressed;
	
	if (readPoint(&px, &py))
		data->state = LV_INDEV_STATE_PRESSED;
	else
		data->state = LV_INDEV_STATE_RELEASED; 
	
	data->point.x = py;
	data->point.y = 320-px;
}

void configure_lvgl(void) {
	lv_init();
	lv_disp_draw_buf_init(&disp_buf, buf_1, NULL, LV_HOR_RES_MAX * LV_VER_RES_MAX);
	
	lv_disp_drv_init(&disp_drv);            /*Basic initialization*/
	disp_drv.draw_buf = &disp_buf;          /*Set an initialized buffer*/
	disp_drv.flush_cb = my_flush_cb;        /*Set a flush callback to draw to the display*/
	disp_drv.hor_res = LV_HOR_RES_MAX;      /*Set the horizontal resolution in pixels*/
	disp_drv.ver_res = LV_VER_RES_MAX;      /*Set the vertical resolution in pixels*/

	lv_disp_t * disp;
	disp = lv_disp_drv_register(&disp_drv); /*Register the driver and save the created display objects*/
	
	/* Init input on LVGL */
	lv_indev_drv_init(&indev_drv);
	indev_drv.type = LV_INDEV_TYPE_POINTER;
	indev_drv.read_cb = my_input_read;
	lv_indev_t * my_indev = lv_indev_drv_register(&indev_drv);
}

/************************************************************************/
/* main                                                                 */
/************************************************************************/
int main(void) {
	/* board and sys init */
	board_init();
	sysclk_init();
	configure_console();

	/* LCd, touch and lvgl init*/
	configure_lcd();
	ili9341_set_orientation(ILI9341_FLIP_Y | ILI9341_SWITCH_XY);
	configure_touch();
	configure_lvgl();
	
	xSemaphore = xSemaphoreCreateBinary();
	
	/* Create task to control oled */
	if (xTaskCreate(task_lcd, "LCD", TASK_LCD_STACK_SIZE, NULL, TASK_LCD_STACK_PRIORITY, NULL) != pdPASS) {
		printf("Failed to create lcd task\r\n");
	}

	if (xTaskCreate(task_time, "TIME", TASK_LCD_STACK_SIZE, NULL, TASK_LCD_STACK_PRIORITY, NULL) != pdPASS) {
		printf("Failed to create time task\r\n");
	}
	
	/* Start the scheduler. */
	vTaskStartScheduler();

	while(1){ }
}
