/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef TITILLIUMWEB20
#define TITILLIUMWEB20 1
#endif

#if TITILLIUMWEB20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x4, 0x20, 0x82, 0x10, 0x42, 0x8, 0x21, 0x4,
    0x20, 0x82, 0x0,

    /* U+0030 "0" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x70, 0x4c, 0x23, 0xe0,

    /* U+0031 "1" */
    0x19, 0x72, 0x10, 0x84, 0x21, 0x8, 0x42, 0x10,
    0x80,

    /* U+0032 "2" */
    0x7e, 0x3, 0x1, 0x1, 0x1, 0x2, 0x2, 0x4,
    0x8, 0x10, 0x20, 0xc0, 0xff,

    /* U+0033 "3" */
    0xfe, 0x3, 0x1, 0x1, 0x2, 0x7c, 0x2, 0x1,
    0x1, 0x1, 0x1, 0x2, 0xfc,

    /* U+0034 "4" */
    0x8, 0x4, 0x1, 0x0, 0x80, 0x20, 0x10, 0x44,
    0x11, 0x4, 0x81, 0x3f, 0xf0, 0x10, 0x4, 0x1,
    0x0,

    /* U+0035 "5" */
    0xfe, 0x80, 0x80, 0x80, 0x80, 0xbe, 0xc3, 0x1,
    0x1, 0x1, 0x1, 0x2, 0x7c,

    /* U+0036 "6" */
    0x1f, 0x30, 0x10, 0x10, 0x8, 0x4, 0xf3, 0x85,
    0x1, 0x80, 0xc0, 0x50, 0x2c, 0x23, 0xe0,

    /* U+0037 "7" */
    0xff, 0x1, 0x1, 0x2, 0x2, 0x4, 0x4, 0x8,
    0x8, 0x10, 0x10, 0x20, 0x20,

    /* U+0038 "8" */
    0x3f, 0x10, 0x28, 0x6, 0x1, 0x80, 0x50, 0x23,
    0xf1, 0x86, 0x80, 0x60, 0x18, 0x5, 0x2, 0x3f,
    0x0,

    /* U+0039 "9" */
    0x3e, 0x21, 0xa0, 0x50, 0x18, 0xc, 0x5, 0x6,
    0x79, 0x0, 0x80, 0x40, 0x40, 0x67, 0xc0,

    /* U+003A ":" */
    0x81,

    /* U+0044 "D" */
    0xfe, 0x20, 0x68, 0xa, 0x3, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0xa, 0x2, 0x81,
    0x3f, 0x80,

    /* U+0045 "E" */
    0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0xfe, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+004B "K" */
    0x80, 0xc0, 0xa0, 0x90, 0x48, 0x44, 0x42, 0x21,
    0xe0, 0x88, 0x42, 0x20, 0x90, 0x48, 0x14, 0x4,

    /* U+004D "M" */
    0xc0, 0x1e, 0x0, 0xe8, 0xb, 0x40, 0x5a, 0x4,
    0xc8, 0x26, 0x41, 0x32, 0x11, 0x88, 0x8c, 0x44,
    0x62, 0x43, 0xa, 0x18, 0x50, 0xc1, 0x4,

    /* U+0054 "T" */
    0xff, 0xe0, 0x80, 0x10, 0x2, 0x0, 0x40, 0x8,
    0x1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x2,
    0x0, 0x40, 0x8, 0x0,

    /* U+0056 "V" */
    0x80, 0x60, 0x28, 0xa, 0x2, 0x40, 0x90, 0x44,
    0x11, 0x4, 0x22, 0x8, 0x82, 0x20, 0x48, 0x14,
    0x7, 0x0,

    /* U+0061 "a" */
    0x7c, 0x3, 0x0, 0x80, 0x43, 0xe6, 0x12, 0x9,
    0x4, 0x86, 0x3c, 0x80,

    /* U+0063 "c" */
    0x3e, 0x82, 0x4, 0x8, 0x10, 0x20, 0x40, 0x40,
    0x7c,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x1, 0x3f, 0x41, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x43, 0x7d,

    /* U+0065 "e" */
    0x3c, 0x42, 0x81, 0x81, 0xff, 0x80, 0x80, 0x80,
    0x40, 0x3e,

    /* U+0068 "h" */
    0x80, 0x80, 0x80, 0x80, 0xbe, 0xc3, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81,

    /* U+0069 "i" */
    0x8f, 0xfc,

    /* U+006C "l" */
    0xff, 0xfc,

    /* U+006D "m" */
    0xb8, 0xfb, 0x1c, 0x38, 0x20, 0x60, 0x81, 0x82,
    0x6, 0x8, 0x18, 0x20, 0x60, 0x81, 0x82, 0x6,
    0x8, 0x10,

    /* U+006E "n" */
    0xbe, 0xc3, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81,

    /* U+006F "o" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x42, 0x7e,

    /* U+0070 "p" */
    0xbc, 0xc2, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x82, 0xfc, 0x80, 0x80, 0x80, 0x80, 0x80,

    /* U+0072 "r" */
    0x9f, 0x21, 0x8, 0x42, 0x10, 0x84, 0x0,

    /* U+0073 "s" */
    0x7f, 0x82, 0x4, 0x6, 0x3, 0x80, 0x81, 0x7,
    0xf8,

    /* U+0074 "t" */
    0x20, 0x40, 0x87, 0xf2, 0x4, 0x8, 0x10, 0x20,
    0x40, 0x81, 0x1, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 70, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 61, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 120, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 179, .box_w = 5, .box_h = 13, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 179, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 179, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 179, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 179, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 179, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 179, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 61, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 208, .box_w = 10, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 177, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 177, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 265, .box_w = 13, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 168, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 182, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 158, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 165, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 161, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 168, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 62, .box_w = 1, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 66, .box_w = 1, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 267, .box_w = 14, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 169, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 165, .box_w = 8, .box_h = 15, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 379, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 148, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 109, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0}
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
    0, 0, 0, 0, -22, -20, 0, 0,
    0, 0, 0, -7, 0, -86, 0, 0,
    0, 0, -5, -10, -11, -6, -7, 0,
    0, 0, 0, 0, -19, -5, 0, 0,
    0, 0, 0, 0, -8, 0, 0, 0,
    -11, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -4, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, -4, -4, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, -2,
    -2, 0, 0, 0, -22, -17, -19, 0,
    0, 0, -32, -34, -34, -35, -32, -12,
    -20, -13, -5, 0, 0, 0, -9, -11,
    -11, -10, -9, 0, 0, 0, 0, 0,
    -28, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -38, -4, 0, -3,
    -3, 0, 0, 0, 0, 0, 0, 0,
    -33, -11, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, -36, -10, 0, 0,
    0, 0, 0, -2, 0, 0, 0, -2,
    -35, -11, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -2, -34, -11, 0, 0,
    0, 0, 0, -2, -19, -11, 0, 0,
    -28, 0, 0, -5, -7, 0, 0, 0,
    0, 0, 0, 0, -32, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -30, 0, 0, 0, 0, 0, 0, 0
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
    .kern_scale = 16,
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
const lv_font_t TitilliumWeb20 = {
#else
lv_font_t TitilliumWeb20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if TITILLIUMWEB20*/

