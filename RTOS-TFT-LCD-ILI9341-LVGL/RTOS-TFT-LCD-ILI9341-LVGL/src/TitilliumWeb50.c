/*******************************************************************************
 * Size: 50 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef TITILLIUMWEB50
#define TITILLIUMWEB50 1
#endif

#if TITILLIUMWEB50

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002E "." */
    0xff,

    /* U+002F "/" */
    0x0, 0x4, 0x0, 0xc, 0x0, 0x18, 0x0, 0x60,
    0x0, 0xc0, 0x3, 0x0, 0x6, 0x0, 0xc, 0x0,
    0x30, 0x0, 0x60, 0x1, 0x80, 0x3, 0x0, 0x6,
    0x0, 0x18, 0x0, 0x30, 0x0, 0xc0, 0x1, 0x80,
    0x3, 0x0, 0xc, 0x0, 0x18, 0x0, 0x60, 0x0,
    0xc0, 0x1, 0x80, 0x6, 0x0, 0xc, 0x0, 0x10,
    0x0, 0x60, 0x0, 0xc0, 0x3, 0x0, 0x6, 0x0,
    0x8, 0x0, 0x30, 0x0, 0x60, 0x1, 0x80, 0x3,
    0x0, 0x6, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0xff, 0x0, 0xe, 0x3, 0x80, 0x30, 0x1,
    0x80, 0xc0, 0x1, 0x83, 0x0, 0x1, 0x86, 0x0,
    0x3, 0x18, 0x0, 0x3, 0x30, 0x0, 0x6, 0x60,
    0x0, 0xc, 0xc0, 0x0, 0x1b, 0x0, 0x0, 0x1e,
    0x0, 0x0, 0x3c, 0x0, 0x0, 0x78, 0x0, 0x0,
    0xf0, 0x0, 0x1, 0xe0, 0x0, 0x3, 0xc0, 0x0,
    0x7, 0x80, 0x0, 0xf, 0x0, 0x0, 0x1e, 0x0,
    0x0, 0x3c, 0x0, 0x0, 0x78, 0x0, 0x0, 0xf0,
    0x0, 0x1, 0xe0, 0x0, 0x3, 0x40, 0x0, 0xc,
    0xc0, 0x0, 0x19, 0x80, 0x0, 0x33, 0x0, 0x0,
    0x63, 0x0, 0x1, 0x86, 0x0, 0x3, 0x6, 0x0,
    0xc, 0x6, 0x0, 0x30, 0x7, 0x1, 0xc0, 0x1,
    0xfc, 0x0,

    /* U+0031 "1" */
    0x0, 0x30, 0x7, 0x1, 0xf0, 0x3b, 0xe, 0x31,
    0xc3, 0x70, 0x3e, 0x3, 0x80, 0x30, 0x3, 0x0,
    0x30, 0x3, 0x0, 0x30, 0x3, 0x0, 0x30, 0x3,
    0x0, 0x30, 0x3, 0x0, 0x30, 0x3, 0x0, 0x30,
    0x3, 0x0, 0x30, 0x3, 0x0, 0x30, 0x3, 0x0,
    0x30, 0x3, 0x0, 0x30, 0x3, 0x0, 0x30, 0x3,
    0x0, 0x30, 0x3,

    /* U+0032 "2" */
    0x3f, 0xfc, 0x7, 0x80, 0x1c, 0x0, 0x0, 0x30,
    0x0, 0x0, 0xc0, 0x0, 0x6, 0x0, 0x0, 0x18,
    0x0, 0x0, 0xc0, 0x0, 0x6, 0x0, 0x0, 0x30,
    0x0, 0x1, 0x80, 0x0, 0xc, 0x0, 0x0, 0xe0,
    0x0, 0x6, 0x0, 0x0, 0x30, 0x0, 0x3, 0x80,
    0x0, 0x38, 0x0, 0x1, 0x80, 0x0, 0x1c, 0x0,
    0x1, 0xc0, 0x0, 0x1c, 0x0, 0x1, 0xc0, 0x0,
    0x1c, 0x0, 0x1, 0xc0, 0x0, 0x1c, 0x0, 0x0,
    0xc0, 0x0, 0xc, 0x0, 0x0, 0xc0, 0x0, 0xe,
    0x0, 0x0, 0xe0, 0x0, 0xe, 0x0, 0x0, 0xe0,
    0x0, 0xe, 0x0, 0x0, 0xe0, 0x0, 0x7, 0xff,
    0xff, 0xc0,

    /* U+0033 "3" */
    0x1f, 0xff, 0x1, 0xe0, 0x7, 0x0, 0x0, 0x6,
    0x0, 0x0, 0xc, 0x0, 0x0, 0x10, 0x0, 0x0,
    0x60, 0x0, 0x1, 0x80, 0x0, 0x6, 0x0, 0x0,
    0x18, 0x0, 0x0, 0x60, 0x0, 0x3, 0x80, 0x0,
    0xc, 0x0, 0x0, 0x70, 0x0, 0x3, 0x80, 0x0,
    0x38, 0x1, 0xff, 0xc0, 0x0, 0x1, 0xc0, 0x0,
    0x1, 0xc0, 0x0, 0x3, 0x80, 0x0, 0x6, 0x0,
    0x0, 0x1c, 0x0, 0x0, 0x30, 0x0, 0x0, 0xc0,
    0x0, 0x3, 0x0, 0x0, 0xc, 0x0, 0x0, 0x30,
    0x0, 0x0, 0xc0, 0x0, 0x3, 0x0, 0x0, 0x18,
    0x0, 0x0, 0x60, 0x0, 0x3, 0x0, 0x0, 0x1c,
    0x78, 0x1, 0xc0, 0xff, 0xfc, 0x0,

    /* U+0034 "4" */
    0x0, 0x18, 0x0, 0x0, 0x18, 0x0, 0x0, 0xc,
    0x0, 0x0, 0x6, 0x0, 0x0, 0x6, 0x0, 0x0,
    0x3, 0x0, 0x0, 0x3, 0x0, 0x0, 0x1, 0x80,
    0x0, 0x1, 0xc0, 0x0, 0x0, 0xc0, 0x0, 0x0,
    0x60, 0x0, 0x0, 0x60, 0x0, 0x0, 0x30, 0x0,
    0x0, 0x30, 0x0, 0x0, 0x18, 0x0, 0xc0, 0xc,
    0x0, 0x60, 0xc, 0x0, 0x30, 0x6, 0x0, 0x18,
    0x6, 0x0, 0xc, 0x3, 0x0, 0x6, 0x3, 0x80,
    0x3, 0x1, 0x80, 0x1, 0x80, 0xc0, 0x0, 0xc0,
    0xc0, 0x0, 0x60, 0x60, 0x0, 0x30, 0x7f, 0xff,
    0xff, 0xc0, 0x0, 0xc, 0x0, 0x0, 0x6, 0x0,
    0x0, 0x3, 0x0, 0x0, 0x1, 0x80, 0x0, 0x0,
    0xc0, 0x0, 0x0, 0x60, 0x0, 0x0, 0x30, 0x0,
    0x0, 0x18, 0x0,

    /* U+0035 "5" */
    0x7f, 0xff, 0xf1, 0x80, 0x0, 0x6, 0x0, 0x0,
    0x18, 0x0, 0x0, 0x60, 0x0, 0x1, 0x80, 0x0,
    0x6, 0x0, 0x0, 0x18, 0x0, 0x0, 0x60, 0x0,
    0x1, 0x80, 0x0, 0x6, 0x0, 0x0, 0x18, 0x0,
    0x0, 0x60, 0x0, 0x1, 0x83, 0xfc, 0x6, 0xf0,
    0x1c, 0x1e, 0x0, 0x1c, 0x70, 0x0, 0x30, 0x0,
    0x0, 0x60, 0x0, 0x1, 0x80, 0x0, 0x3, 0x0,
    0x0, 0xc, 0x0, 0x0, 0x30, 0x0, 0x0, 0xc0,
    0x0, 0x3, 0x0, 0x0, 0xc, 0x0, 0x0, 0x30,
    0x0, 0x0, 0xc0, 0x0, 0x6, 0x0, 0x0, 0x18,
    0x0, 0x0, 0xc0, 0x0, 0x7, 0x0, 0x0, 0x38,
    0xf8, 0x3, 0x80, 0xff, 0xf8, 0x0,

    /* U+0036 "6" */
    0x0, 0xff, 0xf0, 0xe, 0x0, 0x0, 0x60, 0x0,
    0x2, 0x0, 0x0, 0x18, 0x0, 0x0, 0xc0, 0x0,
    0x2, 0x0, 0x0, 0x18, 0x0, 0x0, 0x60, 0x0,
    0x1, 0x0, 0x0, 0xc, 0x0, 0x0, 0x30, 0x0,
    0x0, 0xc0, 0x0, 0x3, 0x7, 0xfc, 0xd, 0xf0,
    0x1c, 0x3c, 0x0, 0x18, 0xc0, 0x0, 0x33, 0x0,
    0x0, 0x6c, 0x0, 0x1, 0xb0, 0x0, 0x3, 0xc0,
    0x0, 0xf, 0x0, 0x0, 0x3c, 0x0, 0x0, 0xd0,
    0x0, 0x3, 0x60, 0x0, 0xd, 0x80, 0x0, 0x36,
    0x0, 0x0, 0xcc, 0x0, 0x6, 0x30, 0x0, 0x18,
    0x60, 0x0, 0xc1, 0x80, 0x3, 0x3, 0x0, 0x38,
    0x7, 0x3, 0x80, 0x7, 0xf8, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xf0, 0x0, 0x3, 0x0, 0x0, 0x30,
    0x0, 0x7, 0x0, 0x0, 0x60, 0x0, 0x6, 0x0,
    0x0, 0xc0, 0x0, 0xc, 0x0, 0x1, 0x80, 0x0,
    0x18, 0x0, 0x3, 0x80, 0x0, 0x30, 0x0, 0x3,
    0x0, 0x0, 0x60, 0x0, 0x6, 0x0, 0x0, 0xc0,
    0x0, 0xc, 0x0, 0x1, 0xc0, 0x0, 0x18, 0x0,
    0x1, 0x80, 0x0, 0x30, 0x0, 0x3, 0x0, 0x0,
    0x60, 0x0, 0x6, 0x0, 0x0, 0xe0, 0x0, 0xc,
    0x0, 0x0, 0xc0, 0x0, 0x18, 0x0, 0x1, 0x80,
    0x0, 0x30, 0x0, 0x3, 0x0, 0x0, 0x60, 0x0,
    0x6, 0x0, 0x0,

    /* U+0038 "8" */
    0x1, 0xff, 0x80, 0x7, 0x0, 0x38, 0xe, 0x0,
    0x7, 0xc, 0x0, 0x0, 0xc6, 0x0, 0x0, 0x66,
    0x0, 0x0, 0x1b, 0x0, 0x0, 0xd, 0x80, 0x0,
    0x6, 0xc0, 0x0, 0x3, 0x60, 0x0, 0x1, 0xb0,
    0x0, 0x1, 0xcc, 0x0, 0x0, 0xc7, 0x0, 0x0,
    0xe1, 0xc0, 0x0, 0xe0, 0x38, 0x3, 0xc0, 0x7,
    0xff, 0x0, 0xe, 0x0, 0xf0, 0xc, 0x0, 0xe,
    0xc, 0x0, 0x1, 0x8c, 0x0, 0x0, 0x66, 0x0,
    0x0, 0x36, 0x0, 0x0, 0xf, 0x0, 0x0, 0x7,
    0x80, 0x0, 0x3, 0xc0, 0x0, 0x1, 0xe0, 0x0,
    0x0, 0xf0, 0x0, 0x0, 0x78, 0x0, 0x0, 0x36,
    0x0, 0x0, 0x33, 0x0, 0x0, 0x18, 0xc0, 0x0,
    0x18, 0x30, 0x0, 0x18, 0x7, 0x0, 0x70, 0x0,
    0x7f, 0xe0, 0x0,

    /* U+0039 "9" */
    0x1, 0xfc, 0x0, 0x1c, 0xc, 0x1, 0xc0, 0xc,
    0xe, 0x0, 0x18, 0x30, 0x0, 0x61, 0x80, 0x0,
    0xc6, 0x0, 0x3, 0x30, 0x0, 0x6, 0xc0, 0x0,
    0x1b, 0x0, 0x0, 0x6c, 0x0, 0x0, 0xb0, 0x0,
    0x3, 0xc0, 0x0, 0xf, 0x0, 0x0, 0x36, 0x0,
    0x0, 0xd8, 0x0, 0x3, 0x30, 0x0, 0xc, 0xe0,
    0x0, 0xf0, 0xe0, 0x3f, 0xc0, 0xff, 0x83, 0x0,
    0x0, 0xc, 0x0, 0x0, 0x30, 0x0, 0x0, 0xc0,
    0x0, 0x3, 0x0, 0x0, 0x18, 0x0, 0x0, 0x60,
    0x0, 0x1, 0x80, 0x0, 0x6, 0x0, 0x0, 0x30,
    0x0, 0x1, 0x80, 0x0, 0x6, 0x0, 0x0, 0x70,
    0x0, 0x7, 0x1, 0xff, 0xf0, 0x0,

    /* U+003A ":" */
    0xff, 0x0, 0x0, 0x0, 0xf, 0xf0,

    /* U+0044 "D" */
    0xff, 0xff, 0x80, 0x60, 0x0, 0x70, 0x30, 0x0,
    0xc, 0x18, 0x0, 0x3, 0xc, 0x0, 0x0, 0xc6,
    0x0, 0x0, 0x63, 0x0, 0x0, 0x19, 0x80, 0x0,
    0xc, 0xc0, 0x0, 0x3, 0x60, 0x0, 0x1, 0xb0,
    0x0, 0x0, 0xd8, 0x0, 0x0, 0x2c, 0x0, 0x0,
    0x1e, 0x0, 0x0, 0xf, 0x0, 0x0, 0x7, 0x80,
    0x0, 0x3, 0xc0, 0x0, 0x1, 0xe0, 0x0, 0x0,
    0xf0, 0x0, 0x0, 0x78, 0x0, 0x0, 0x3c, 0x0,
    0x0, 0x1e, 0x0, 0x0, 0xf, 0x0, 0x0, 0x7,
    0x80, 0x0, 0x3, 0xc0, 0x0, 0x3, 0x60, 0x0,
    0x1, 0xb0, 0x0, 0x0, 0xd8, 0x0, 0x0, 0x6c,
    0x0, 0x0, 0x66, 0x0, 0x0, 0x33, 0x0, 0x0,
    0x31, 0x80, 0x0, 0x18, 0xc0, 0x0, 0x18, 0x60,
    0x0, 0x18, 0x30, 0x0, 0x38, 0x1f, 0xff, 0xe0,
    0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x30, 0x0, 0x1,
    0x80, 0x0, 0xc, 0x0, 0x0, 0x60, 0x0, 0x3,
    0x0, 0x0, 0x18, 0x0, 0x0, 0xc0, 0x0, 0x6,
    0x0, 0x0, 0x30, 0x0, 0x1, 0x80, 0x0, 0xc,
    0x0, 0x0, 0x60, 0x0, 0x3, 0x0, 0x0, 0x18,
    0x0, 0x0, 0xc0, 0x0, 0x7, 0xff, 0xfe, 0x30,
    0x0, 0x1, 0x80, 0x0, 0xc, 0x0, 0x0, 0x60,
    0x0, 0x3, 0x0, 0x0, 0x18, 0x0, 0x0, 0xc0,
    0x0, 0x6, 0x0, 0x0, 0x30, 0x0, 0x1, 0x80,
    0x0, 0xc, 0x0, 0x0, 0x60, 0x0, 0x3, 0x0,
    0x0, 0x18, 0x0, 0x0, 0xc0, 0x0, 0x6, 0x0,
    0x0, 0x30, 0x0, 0x1, 0xff, 0xff, 0xf0,

    /* U+004B "K" */
    0xc0, 0x0, 0x1b, 0x0, 0x0, 0x6c, 0x0, 0x3,
    0x30, 0x0, 0x18, 0xc0, 0x0, 0x63, 0x0, 0x3,
    0xc, 0x0, 0x1c, 0x30, 0x0, 0x60, 0xc0, 0x3,
    0x3, 0x0, 0xc, 0xc, 0x0, 0x60, 0x30, 0x3,
    0x0, 0xc0, 0xc, 0x3, 0x0, 0x60, 0xc, 0x1,
    0x80, 0x30, 0xc, 0x0, 0xc0, 0x60, 0x3, 0x1,
    0x80, 0xf, 0xfc, 0x0, 0x30, 0x18, 0x0, 0xc0,
    0x30, 0x3, 0x0, 0xc0, 0xc, 0x1, 0x80, 0x30,
    0x3, 0x0, 0xc0, 0xc, 0x3, 0x0, 0x18, 0xc,
    0x0, 0x30, 0x30, 0x0, 0xc0, 0xc0, 0x1, 0x83,
    0x0, 0x3, 0xc, 0x0, 0xe, 0x30, 0x0, 0x18,
    0xc0, 0x0, 0x33, 0x0, 0x0, 0xec, 0x0, 0x1,
    0xb0, 0x0, 0x3,

    /* U+004D "M" */
    0xf0, 0x0, 0x0, 0xf, 0xd8, 0x0, 0x0, 0x1b,
    0xd8, 0x0, 0x0, 0x1b, 0xc8, 0x0, 0x0, 0x13,
    0xcc, 0x0, 0x0, 0x33, 0xcc, 0x0, 0x0, 0x33,
    0xc4, 0x0, 0x0, 0x23, 0xc6, 0x0, 0x0, 0x63,
    0xc6, 0x0, 0x0, 0x63, 0xc2, 0x0, 0x0, 0x43,
    0xc3, 0x0, 0x0, 0xc3, 0xc3, 0x0, 0x0, 0xc3,
    0xc1, 0x80, 0x1, 0x83, 0xc1, 0x80, 0x1, 0x83,
    0xc1, 0x80, 0x1, 0x83, 0xc0, 0xc0, 0x3, 0x3,
    0xc0, 0xc0, 0x3, 0x3, 0xc0, 0x40, 0x2, 0x3,
    0xc0, 0x60, 0x6, 0x3, 0xc0, 0x60, 0x6, 0x3,
    0xc0, 0x20, 0x4, 0x3, 0xc0, 0x30, 0xc, 0x3,
    0xc0, 0x30, 0xc, 0x3, 0xc0, 0x18, 0x18, 0x3,
    0xc0, 0x18, 0x18, 0x3, 0xc0, 0x18, 0x18, 0x3,
    0xc0, 0xc, 0x30, 0x3, 0xc0, 0xc, 0x30, 0x3,
    0xc0, 0xc, 0x30, 0x3, 0xc0, 0x6, 0x60, 0x3,
    0xc0, 0x6, 0x60, 0x3, 0xc0, 0x2, 0x40, 0x3,
    0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3,
    0xc0, 0x1, 0x80, 0x3, 0xc0, 0x0, 0x0, 0x3,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xc0, 0x3, 0x0, 0x0, 0x0,
    0xc0, 0x0, 0x0, 0x30, 0x0, 0x0, 0xc, 0x0,
    0x0, 0x3, 0x0, 0x0, 0x0, 0xc0, 0x0, 0x0,
    0x30, 0x0, 0x0, 0xc, 0x0, 0x0, 0x3, 0x0,
    0x0, 0x0, 0xc0, 0x0, 0x0, 0x30, 0x0, 0x0,
    0xc, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0xc0,
    0x0, 0x0, 0x30, 0x0, 0x0, 0xc, 0x0, 0x0,
    0x3, 0x0, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x30,
    0x0, 0x0, 0xc, 0x0, 0x0, 0x3, 0x0, 0x0,
    0x0, 0xc0, 0x0, 0x0, 0x30, 0x0, 0x0, 0xc,
    0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0xc0, 0x0,
    0x0, 0x30, 0x0, 0x0, 0xc, 0x0, 0x0, 0x3,
    0x0, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x30, 0x0,
    0x0, 0xc, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0,
    0xc0, 0x0, 0x0, 0x30, 0x0,

    /* U+0056 "V" */
    0x40, 0x0, 0x0, 0xd8, 0x0, 0x0, 0x36, 0x0,
    0x0, 0x19, 0x80, 0x0, 0x6, 0x30, 0x0, 0x1,
    0x8c, 0x0, 0x0, 0x43, 0x0, 0x0, 0x30, 0x40,
    0x0, 0xc, 0x18, 0x0, 0x3, 0x6, 0x0, 0x0,
    0x81, 0x80, 0x0, 0x60, 0x20, 0x0, 0x18, 0xc,
    0x0, 0x6, 0x3, 0x0, 0x1, 0x0, 0xc0, 0x0,
    0xc0, 0x10, 0x0, 0x30, 0x6, 0x0, 0x8, 0x1,
    0x80, 0x6, 0x0, 0x20, 0x1, 0x80, 0x8, 0x0,
    0x60, 0x3, 0x0, 0x10, 0x0, 0xc0, 0xc, 0x0,
    0x10, 0x3, 0x0, 0x6, 0x0, 0xc0, 0x1, 0x80,
    0x20, 0x0, 0x60, 0x18, 0x0, 0x8, 0x6, 0x0,
    0x3, 0x1, 0x0, 0x0, 0xc0, 0x40, 0x0, 0x10,
    0x30, 0x0, 0x4, 0xc, 0x0, 0x1, 0x82, 0x0,
    0x0, 0x61, 0x80, 0x0, 0x8, 0x60, 0x0, 0x2,
    0x18, 0x0, 0x0, 0xfc, 0x0,

    /* U+0061 "a" */
    0x3f, 0xfc, 0x1, 0xe0, 0x1c, 0x0, 0x0, 0x18,
    0x0, 0x0, 0x60, 0x0, 0x0, 0xc0, 0x0, 0x3,
    0x0, 0x0, 0xc, 0x0, 0x0, 0x30, 0x0, 0x0,
    0xc0, 0x0, 0x3, 0x0, 0x0, 0x3c, 0x1, 0xff,
    0xf0, 0x1f, 0xe0, 0xc0, 0xe0, 0x3, 0x6, 0x0,
    0xc, 0x38, 0x0, 0x30, 0xc0, 0x0, 0xc3, 0x0,
    0x3, 0xc, 0x0, 0xc, 0x30, 0x0, 0x30, 0xc0,
    0x0, 0xc3, 0x0, 0x3, 0x6, 0x0, 0xc, 0x18,
    0x0, 0xf0, 0x30, 0x1f, 0xf0, 0x3f, 0xc0, 0xf0,

    /* U+0063 "c" */
    0x3, 0xff, 0x87, 0x0, 0x46, 0x0, 0x6, 0x0,
    0x6, 0x0, 0x3, 0x0, 0x1, 0x80, 0x1, 0x80,
    0x0, 0xc0, 0x0, 0x60, 0x0, 0x30, 0x0, 0x18,
    0x0, 0xc, 0x0, 0x6, 0x0, 0x3, 0x0, 0x1,
    0x80, 0x0, 0xc0, 0x0, 0x60, 0x0, 0x30, 0x0,
    0xc, 0x0, 0x6, 0x0, 0x3, 0x0, 0x0, 0xc0,
    0x0, 0x70, 0x0, 0xe, 0x0, 0x1, 0xff, 0xc0,

    /* U+0064 "d" */
    0x0, 0x0, 0x60, 0x0, 0xc, 0x0, 0x1, 0x80,
    0x0, 0x30, 0x0, 0x6, 0x0, 0x0, 0xc0, 0x0,
    0x18, 0x0, 0x3, 0x0, 0x0, 0x60, 0x0, 0xc,
    0x0, 0x1, 0x81, 0xff, 0xf0, 0xe0, 0xe, 0x30,
    0x0, 0xcc, 0x0, 0x19, 0x80, 0x3, 0x60, 0x0,
    0x6c, 0x0, 0xd, 0x80, 0x1, 0xe0, 0x0, 0x3c,
    0x0, 0x7, 0x80, 0x0, 0xf0, 0x0, 0x1e, 0x0,
    0x3, 0xc0, 0x0, 0x78, 0x0, 0xf, 0x0, 0x1,
    0xe0, 0x0, 0x3c, 0x0, 0x7, 0x80, 0x0, 0xd8,
    0x0, 0x1b, 0x0, 0x3, 0x60, 0x0, 0x66, 0x0,
    0xc, 0xe0, 0x7, 0x8e, 0x7, 0xb0, 0x7f, 0x6,

    /* U+0065 "e" */
    0x1, 0xfc, 0x0, 0xe0, 0x70, 0x18, 0x1, 0x83,
    0x0, 0xc, 0x30, 0x0, 0x66, 0x0, 0x6, 0x60,
    0x0, 0x64, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0,
    0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0xc0, 0x0, 0xc, 0x0, 0x0,
    0xc0, 0x0, 0xc, 0x0, 0x0, 0xc0, 0x0, 0x6,
    0x0, 0x0, 0x60, 0x0, 0x6, 0x0, 0x0, 0x30,
    0x0, 0x1, 0x80, 0x0, 0xe, 0x0, 0x0, 0x3f,
    0xfe,

    /* U+0068 "h" */
    0xc0, 0x0, 0x18, 0x0, 0x3, 0x0, 0x0, 0x60,
    0x0, 0xc, 0x0, 0x1, 0x80, 0x0, 0x30, 0x0,
    0x6, 0x0, 0x0, 0xc0, 0x0, 0x18, 0x0, 0x3,
    0x0, 0x0, 0x61, 0xff, 0xf, 0xe0, 0x31, 0xc0,
    0x3, 0x30, 0x0, 0x36, 0x0, 0x6, 0xc0, 0x0,
    0xd8, 0x0, 0xf, 0x0, 0x1, 0xe0, 0x0, 0x3c,
    0x0, 0x7, 0x80, 0x0, 0xf0, 0x0, 0x1e, 0x0,
    0x3, 0xc0, 0x0, 0x78, 0x0, 0xf, 0x0, 0x1,
    0xe0, 0x0, 0x3c, 0x0, 0x7, 0x80, 0x0, 0xf0,
    0x0, 0x1e, 0x0, 0x3, 0xc0, 0x0, 0x78, 0x0,
    0xf, 0x0, 0x1, 0xe0, 0x0, 0x3c, 0x0, 0x6,

    /* U+0069 "i" */
    0xfc, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0,

    /* U+006D "m" */
    0xc3, 0xfc, 0x7, 0xf8, 0x37, 0x81, 0xcf, 0x1,
    0x8f, 0x0, 0x3e, 0x0, 0x33, 0x0, 0x6, 0x0,
    0x6, 0xc0, 0x1, 0x80, 0x1, 0xb0, 0x0, 0x20,
    0x0, 0x6c, 0x0, 0xc, 0x0, 0xf, 0x0, 0x3,
    0x0, 0x3, 0xc0, 0x0, 0xc0, 0x0, 0xf0, 0x0,
    0x30, 0x0, 0x3c, 0x0, 0xc, 0x0, 0xf, 0x0,
    0x3, 0x0, 0x3, 0xc0, 0x0, 0xc0, 0x0, 0xf0,
    0x0, 0x30, 0x0, 0x3c, 0x0, 0xc, 0x0, 0xf,
    0x0, 0x3, 0x0, 0x3, 0xc0, 0x0, 0xc0, 0x0,
    0xf0, 0x0, 0x30, 0x0, 0x3c, 0x0, 0xc, 0x0,
    0xf, 0x0, 0x3, 0x0, 0x3, 0xc0, 0x0, 0xc0,
    0x0, 0xf0, 0x0, 0x30, 0x0, 0x3c, 0x0, 0xc,
    0x0, 0xf, 0x0, 0x3, 0x0, 0x3, 0xc0, 0x0,
    0xc0, 0x0, 0xf0, 0x0, 0x30, 0x0, 0x30,

    /* U+006E "n" */
    0xc3, 0xfe, 0x1b, 0xc0, 0x63, 0xc0, 0x6, 0x60,
    0x0, 0x6c, 0x0, 0xd, 0x80, 0x1, 0xb0, 0x0,
    0x1e, 0x0, 0x3, 0xc0, 0x0, 0x78, 0x0, 0xf,
    0x0, 0x1, 0xe0, 0x0, 0x3c, 0x0, 0x7, 0x80,
    0x0, 0xf0, 0x0, 0x1e, 0x0, 0x3, 0xc0, 0x0,
    0x78, 0x0, 0xf, 0x0, 0x1, 0xe0, 0x0, 0x3c,
    0x0, 0x7, 0x80, 0x0, 0xf0, 0x0, 0x1e, 0x0,
    0x3, 0xc0, 0x0, 0x78, 0x0, 0xc,

    /* U+006F "o" */
    0x3, 0xfc, 0x0, 0xe0, 0x70, 0x18, 0x1, 0x83,
    0x0, 0xc, 0x60, 0x0, 0x66, 0x0, 0x6, 0x60,
    0x0, 0x6c, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0,
    0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0,
    0x3c, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3,
    0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0, 0x34,
    0x0, 0x2, 0x60, 0x0, 0x66, 0x0, 0x6, 0x30,
    0x0, 0xc3, 0x0, 0xc, 0x1c, 0x3, 0x80, 0x3f,
    0xc0,

    /* U+0070 "p" */
    0xc1, 0xfc, 0x1b, 0xc0, 0xe3, 0xc0, 0xe, 0x70,
    0x0, 0xcc, 0x0, 0xd, 0x80, 0x1, 0xb0, 0x0,
    0x36, 0x0, 0x3, 0xc0, 0x0, 0x78, 0x0, 0xf,
    0x0, 0x1, 0xe0, 0x0, 0x3c, 0x0, 0x7, 0x80,
    0x0, 0xf0, 0x0, 0x1e, 0x0, 0x3, 0xc0, 0x0,
    0x78, 0x0, 0xf, 0x0, 0x3, 0x60, 0x0, 0x6c,
    0x0, 0xd, 0x80, 0x3, 0x30, 0x0, 0x66, 0x0,
    0x18, 0xe0, 0xe, 0x1f, 0xfe, 0x3, 0x0, 0x0,
    0x60, 0x0, 0xc, 0x0, 0x1, 0x80, 0x0, 0x30,
    0x0, 0x6, 0x0, 0x0, 0xc0, 0x0, 0x18, 0x0,
    0x3, 0x0, 0x0, 0x60, 0x0, 0xc, 0x0, 0x1,
    0x80, 0x0, 0x0,

    /* U+0072 "r" */
    0x0, 0x1c, 0xf, 0xc3, 0xec, 0xf0, 0xdc, 0xf,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0,
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0x0,

    /* U+0073 "s" */
    0x7, 0xff, 0x86, 0x0, 0x66, 0x0, 0x1, 0x80,
    0x0, 0xc0, 0x0, 0x30, 0x0, 0xc, 0x0, 0x3,
    0x0, 0x0, 0xe0, 0x0, 0x38, 0x0, 0x7, 0xc0,
    0x0, 0xff, 0x0, 0xf, 0xfc, 0x0, 0x3f, 0xc0,
    0x0, 0x78, 0x0, 0x7, 0x0, 0x1, 0xc0, 0x0,
    0x30, 0x0, 0xc, 0x0, 0x3, 0x0, 0x0, 0xc0,
    0x0, 0x30, 0x0, 0x18, 0x0, 0xc, 0xe0, 0xe,
    0x3f, 0xfe, 0x0,

    /* U+0074 "t" */
    0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xff, 0xfe, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0x6, 0x0,
    0x6, 0x0, 0x3, 0x0, 0x1, 0xff
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 176, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 152, .box_w = 2, .box_h = 4, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 301, .box_w = 15, .box_h = 36, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 448, .box_w = 23, .box_h = 34, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 448, .box_w = 12, .box_h = 34, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 448, .box_w = 21, .box_h = 34, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 448, .box_w = 22, .box_h = 34, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 448, .box_w = 25, .box_h = 34, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 448, .box_w = 22, .box_h = 34, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 448, .box_w = 22, .box_h = 34, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 448, .box_w = 20, .box_h = 33, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 448, .box_w = 25, .box_h = 34, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 448, .box_w = 22, .box_h = 34, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 153, .box_w = 2, .box_h = 22, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 519, .box_w = 25, .box_h = 36, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 442, .box_w = 21, .box_h = 36, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1196, .adv_w = 442, .box_w = 22, .box_h = 36, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1295, .adv_w = 662, .box_w = 32, .box_h = 36, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 421, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1556, .adv_w = 454, .box_w = 26, .box_h = 36, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1673, .adv_w = 396, .box_w = 22, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1745, .adv_w = 343, .box_w = 17, .box_h = 26, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1801, .adv_w = 412, .box_w = 19, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1889, .adv_w = 402, .box_w = 20, .box_h = 26, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1954, .adv_w = 421, .box_w = 19, .box_h = 37, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2042, .adv_w = 154, .box_w = 2, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2051, .adv_w = 164, .box_w = 2, .box_h = 37, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2061, .adv_w = 667, .box_w = 34, .box_h = 26, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2172, .adv_w = 422, .box_w = 19, .box_h = 26, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2234, .adv_w = 421, .box_w = 20, .box_h = 26, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2299, .adv_w = 413, .box_w = 19, .box_h = 38, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 2390, .adv_w = 262, .box_w = 12, .box_h = 27, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2431, .adv_w = 369, .box_w = 18, .box_h = 26, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2490, .adv_w = 274, .box_w = 16, .box_h = 35, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14,
    0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x24, 0x25,
    0x2b, 0x2d, 0x34, 0x36, 0x41, 0x43, 0x44, 0x45,
    0x48, 0x49, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x52,
    0x53, 0x54
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 85, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 34, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 4,
    5, 6, 7, 8, 9, 10, 11, 0,
    12, 13, 0, 0, 13, 13, 14, 15,
    16, 17, 18
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 4,
    4, 4, 4, 5, 6, 7, 8, 9,
    8, 0, 0, 0, 10, 10, 8, 10,
    10, 11, 12
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -30, -27, 0, 0,
    0, 0, 0, -10, 0, -119, 0, 0,
    0, 0, -8, -14, -15, -8, -10, 0,
    0, 0, 0, 0, -26, -7, 0, 0,
    0, 0, 0, 0, -11, 0, 0, 0,
    -15, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    -5, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, -6, -6, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, -2,
    -2, 0, 0, 0, -30, -23, -26, 0,
    0, 0, -44, -47, -47, -48, -45, -16,
    -27, -19, -7, 0, 0, 0, -13, -15,
    -15, -13, -12, 0, 0, 0, 0, 0,
    -38, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -53, -5, 0, -4,
    -4, 0, 0, 0, 0, 0, 0, 0,
    -46, -15, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, -49, -14, 0, 0,
    0, 0, 0, -2, 0, 0, 0, -2,
    -48, -15, 0, 0, 0, 0, 0, -3,
    0, 0, 0, -2, -47, -15, 0, 0,
    0, 0, 0, -2, -26, -15, 0, 0,
    -38, 0, 0, -8, -9, 0, 0, 0,
    0, 0, 0, 0, -45, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -41, 0, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 18,
    .right_class_cnt     = 12,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 29,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t TitilliumWeb50 = {
#else
lv_font_t TitilliumWeb50 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 49,          /*The maximum line height required by the font*/
    .base_line = 12,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -5,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if TITILLIUMWEB50*/

