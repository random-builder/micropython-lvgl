/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_SPACEMONO_16
#define LV_FONT_SPACEMONO_16 1
#endif

#if LV_FONT_SPACEMONO_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xc, 0x80, 0xc, 0x80, 0xc, 0x80, 0xc, 0x80,
    0xc, 0x80, 0xc, 0x80, 0xc, 0x80, 0xc, 0x80,
    0x2, 0x10, 0x1f, 0xd0, 0x1d, 0xb0,

    /* U+0022 "\"" */
    0x6f, 0x47, 0xe3, 0x8f, 0x69, 0xf5, 0xd, 0x1,
    0xc0, 0xb, 0x1, 0xa0,

    /* U+0023 "#" */
    0x2, 0xf0, 0x3e, 0x0, 0x2, 0xf0, 0x3e, 0x0,
    0xef, 0xff, 0xff, 0xfa, 0x13, 0xf2, 0x5e, 0x21,
    0x2, 0xf0, 0x3e, 0x0, 0xdf, 0xff, 0xff, 0xfa,
    0x24, 0xf2, 0x5e, 0x21, 0x1, 0xc0, 0x2b, 0x0,

    /* U+0024 "$" */
    0x0, 0x1, 0x0, 0x0, 0x0, 0xd, 0x50, 0x0,
    0x7, 0xff, 0xfa, 0x0, 0x2f, 0x5d, 0x8c, 0x80,
    0x3f, 0x2d, 0x54, 0x70, 0xa, 0xff, 0xc6, 0x0,
    0x11, 0x2d, 0xad, 0xb0, 0x7c, 0xd, 0x53, 0xf0,
    0x2f, 0x7d, 0x7a, 0xd0, 0x4, 0xcf, 0xfc, 0x30,
    0x0, 0xd, 0x50, 0x0,

    /* U+0025 "%" */
    0x4, 0xdd, 0x80, 0x0, 0x0, 0xe2, 0xb, 0x50,
    0x0, 0x2d, 0x0, 0x77, 0x0, 0x0, 0xe2, 0xc,
    0x40, 0x13, 0x3, 0xcd, 0x73, 0x9c, 0x60, 0x0,
    0x5c, 0xb4, 0x0, 0x8, 0xd8, 0x29, 0xdb, 0x10,
    0x40, 0x7, 0x90, 0x5b, 0x0, 0x0, 0xb4, 0x0,
    0xe0, 0x0, 0x8, 0x80, 0x4c, 0x0, 0x0, 0xa,
    0xdc, 0x20,

    /* U+0026 "&" */
    0x1, 0x9e, 0xff, 0x30, 0x0, 0xc, 0xd5, 0x33,
    0x0, 0x0, 0x1f, 0x30, 0x0, 0x0, 0x0, 0x1f,
    0x20, 0x0, 0x9b, 0x0, 0xb, 0xb2, 0x0, 0x9b,
    0x0, 0x0, 0xaf, 0xff, 0xff, 0xf4, 0x8, 0xd5,
    0x33, 0xbc, 0x30, 0x1f, 0x30, 0x0, 0x9b, 0x0,
    0x1f, 0x30, 0x0, 0x9b, 0x0, 0xc, 0xd5, 0x33,
    0xbb, 0x0, 0x1, 0xae, 0xff, 0xfb, 0x0,

    /* U+0027 "'" */
    0x1d, 0xb0, 0x1f, 0xd0, 0x8, 0x50, 0x7, 0x40,

    /* U+0028 "(" */
    0x0, 0x4, 0xbe, 0xb0, 0x9, 0xf8, 0x42, 0x7,
    0xf3, 0x0, 0x0, 0xf6, 0x0, 0x0, 0x4f, 0x0,
    0x0, 0x7, 0xc0, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x8, 0xc0, 0x0, 0x0, 0x8c, 0x0, 0x0, 0x8,
    0xc0, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x5, 0xe0,
    0x0, 0x0, 0x1f, 0x40, 0x0, 0x0, 0x9e, 0x10,
    0x0, 0x0, 0xce, 0x51, 0x0, 0x0, 0x7e, 0xfb,
    0x0, 0x0, 0x1, 0x20,

    /* U+0029 ")" */
    0xee, 0xa2, 0x0, 0x2, 0x4a, 0xf6, 0x0, 0x0,
    0x5, 0xf3, 0x0, 0x0, 0x9, 0xc0, 0x0, 0x0,
    0x3f, 0x10, 0x0, 0x0, 0xf3, 0x0, 0x0, 0xf,
    0x40, 0x0, 0x0, 0xf4, 0x0, 0x0, 0xf, 0x40,
    0x0, 0x0, 0xf4, 0x0, 0x0, 0xf, 0x40, 0x0,
    0x2, 0xf2, 0x0, 0x0, 0x8d, 0x0, 0x0, 0x3f,
    0x50, 0x1, 0x7f, 0x90, 0xf, 0xfd, 0x50, 0x0,
    0x21, 0x0, 0x0, 0x0,

    /* U+002A "*" */
    0x0, 0x0, 0x85, 0x0, 0x0, 0x1a, 0x1b, 0x72,
    0x90, 0x0, 0xcb, 0xa8, 0xea, 0x0, 0x1, 0xcd,
    0xda, 0x0, 0x1f, 0xfe, 0xff, 0xef, 0xd0, 0x24,
    0xcd, 0xda, 0x32, 0x1, 0xe8, 0xa7, 0xbc, 0x0,
    0x2, 0xb, 0x70, 0x20,

    /* U+002B "+" */
    0x0, 0x6, 0x40, 0x0, 0x0, 0xb, 0x70, 0x0,
    0x0, 0xb, 0x70, 0x0, 0x7f, 0xff, 0xff, 0xf3,
    0x12, 0x2b, 0x82, 0x20, 0x0, 0xb, 0x70, 0x0,
    0x0, 0xb, 0x70, 0x0,

    /* U+002C "," */
    0x1, 0x0, 0x1f, 0xd0, 0x1d, 0xf0, 0x0, 0xd0,
    0xd, 0x90,

    /* U+002D "-" */
    0x7f, 0xff, 0xf4, 0x12, 0x22, 0x20,

    /* U+002E "." */
    0x1, 0x0, 0x1f, 0xd0, 0x1d, 0xb0,

    /* U+002F "/" */
    0x0, 0x0, 0x45, 0x0, 0x0, 0xb8, 0x0, 0x1,
    0xf3, 0x0, 0x6, 0xd0, 0x0, 0xb, 0x80, 0x0,
    0x1f, 0x30, 0x0, 0x6d, 0x0, 0x0, 0xb8, 0x0,
    0x1, 0xf3, 0x0, 0x6, 0xd0, 0x0, 0xb, 0x80,
    0x0, 0x1f, 0x30, 0x0, 0x6d, 0x0, 0x0, 0xb8,
    0x0, 0x0, 0x72, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x4c, 0xff, 0xb2, 0x0, 0x4f, 0xa4, 0x5c,
    0xe1, 0xc, 0xc0, 0x0, 0xe, 0x80, 0xf6, 0x0,
    0x0, 0xac, 0xf, 0x40, 0xda, 0x8, 0xd0, 0xf4,
    0xd, 0xb0, 0x8d, 0xf, 0x40, 0x0, 0x8, 0xd0,
    0xf6, 0x0, 0x0, 0xac, 0xc, 0xb0, 0x0, 0xe,
    0x80, 0x4f, 0x94, 0x4c, 0xe1, 0x0, 0x4c, 0xff,
    0xb2, 0x0,

    /* U+0031 "1" */
    0x0, 0x2f, 0xea, 0x0, 0x0, 0xa, 0xbb, 0xa0,
    0x0, 0x1, 0xf3, 0xba, 0x0, 0x0, 0x8c, 0xb,
    0xa0, 0x0, 0xa, 0x40, 0xba, 0x0, 0x0, 0x0,
    0xb, 0xa0, 0x0, 0x0, 0x0, 0xba, 0x0, 0x0,
    0x0, 0xb, 0xa0, 0x0, 0x0, 0x0, 0xba, 0x0,
    0x0, 0x33, 0x3c, 0xb3, 0x32, 0xd, 0xff, 0xff,
    0xff, 0xd0,

    /* U+0032 "2" */
    0x3, 0xbf, 0xfb, 0x30, 0x3f, 0xa4, 0x5b, 0xf3,
    0xbb, 0x0, 0x0, 0xca, 0xe6, 0x0, 0x0, 0x9c,
    0x83, 0x0, 0x0, 0xd9, 0x0, 0x1, 0x6d, 0xe2,
    0x4, 0xcf, 0xe9, 0x10, 0x5f, 0x92, 0x0, 0x0,
    0xca, 0x0, 0x0, 0x0, 0xd9, 0x33, 0x33, 0x32,
    0xef, 0xff, 0xff, 0xfb,

    /* U+0033 "3" */
    0xef, 0xff, 0xff, 0xf9, 0x33, 0x33, 0x35, 0xd9,
    0x0, 0x1, 0x8e, 0x80, 0x0, 0x2e, 0x91, 0x0,
    0x0, 0x3f, 0xec, 0x40, 0x0, 0x1, 0x27, 0xf4,
    0xa3, 0x0, 0x0, 0xac, 0xf6, 0x0, 0x0, 0x8d,
    0xcb, 0x0, 0x0, 0xcb, 0x3f, 0xa4, 0x4b, 0xf2,
    0x3, 0xbf, 0xfb, 0x30,

    /* U+0034 "4" */
    0x0, 0x0, 0x9d, 0xf5, 0x0, 0x0, 0x1, 0xf5,
    0xf5, 0x0, 0x0, 0xa, 0xb0, 0xf5, 0x0, 0x0,
    0x2f, 0x30, 0xf5, 0x0, 0x0, 0xba, 0x0, 0xf5,
    0x0, 0x3, 0xf2, 0x0, 0xf5, 0x0, 0xc, 0x90,
    0x0, 0xf5, 0x0, 0x2f, 0x20, 0x0, 0xf5, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xf0, 0x3, 0x33, 0x33,
    0xf7, 0x30, 0x0, 0x0, 0x0, 0xf5, 0x0,

    /* U+0035 "5" */
    0xcf, 0xff, 0xff, 0xf4, 0xc, 0xa3, 0x33, 0x33,
    0x0, 0xc9, 0x0, 0x0, 0x0, 0xc, 0x92, 0xbf,
    0xd5, 0x0, 0xc9, 0xd9, 0x49, 0xf5, 0x9, 0xcc,
    0x0, 0xa, 0xd0, 0x0, 0x0, 0x0, 0x5f, 0xe,
    0x70, 0x0, 0x6, 0xf0, 0xbb, 0x0, 0x0, 0xcb,
    0x3, 0xfa, 0x44, 0xbf, 0x30, 0x3, 0xbf, 0xfc,
    0x20, 0x0,

    /* U+0036 "6" */
    0x3, 0xcf, 0xea, 0x10, 0x3f, 0x93, 0x4b, 0xe0,
    0xcb, 0x0, 0x0, 0xe7, 0xf6, 0x0, 0x0, 0x54,
    0xf5, 0x7e, 0xeb, 0x40, 0xfd, 0x93, 0x4b, 0xf3,
    0xf9, 0x0, 0x0, 0xda, 0xf6, 0x0, 0x0, 0x9c,
    0xd9, 0x0, 0x0, 0xca, 0x4f, 0x83, 0x3a, 0xf2,
    0x4, 0xce, 0xea, 0x20,

    /* U+0037 "7" */
    0xdf, 0xff, 0xff, 0xfa, 0x23, 0x33, 0x33, 0xba,
    0x0, 0x0, 0x4, 0xf3, 0x0, 0x0, 0xe, 0x90,
    0x0, 0x0, 0x9d, 0x0, 0x0, 0x4, 0xf3, 0x0,
    0x0, 0x1e, 0x80, 0x0, 0x0, 0xad, 0x0, 0x0,
    0x5, 0xf3, 0x0, 0x0, 0xd, 0x90, 0x0, 0x0,
    0x1f, 0x40, 0x0, 0x0,

    /* U+0038 "8" */
    0x6, 0xdf, 0xec, 0x40, 0x6f, 0x73, 0x49, 0xf3,
    0xab, 0x0, 0x0, 0xe7, 0x5f, 0x50, 0x17, 0xf2,
    0x5, 0xff, 0xfe, 0x20, 0x3e, 0x84, 0x4a, 0xd1,
    0xc9, 0x0, 0x0, 0xc9, 0xf6, 0x0, 0x0, 0x9c,
    0xd9, 0x0, 0x0, 0xca, 0x6f, 0x83, 0x4a, 0xf3,
    0x5, 0xcf, 0xeb, 0x30,

    /* U+0039 "9" */
    0x3, 0xcf, 0xfa, 0x20, 0x4f, 0x83, 0x4b, 0xe1,
    0xca, 0x0, 0x0, 0xd9, 0xf6, 0x0, 0x0, 0x9c,
    0xd8, 0x0, 0x0, 0xbc, 0x8f, 0x50, 0x18, 0xec,
    0x9, 0xff, 0xf8, 0x9c, 0x43, 0x2, 0x0, 0x9c,
    0xab, 0x0, 0x0, 0xd9, 0x3f, 0x93, 0x4b, 0xe1,
    0x4, 0xcf, 0xea, 0x20,

    /* U+003A ":" */
    0x1d, 0xb0, 0x1f, 0xd0, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x0, 0x1f, 0xd0, 0x1d, 0xb0,

    /* U+003B ";" */
    0x1d, 0xb0, 0x1f, 0xd0, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x0, 0x1f, 0xd0, 0x1d, 0xf0,
    0x0, 0xd0, 0xd, 0x90,

    /* U+003C "<" */
    0x0, 0x0, 0x5, 0xb3, 0x0, 0x5a, 0xfe, 0x91,
    0x5f, 0xe9, 0x40, 0x0, 0x78, 0x0, 0x0, 0x0,
    0x5f, 0xe9, 0x40, 0x0, 0x0, 0x5b, 0xfe, 0x91,
    0x0, 0x0, 0x5, 0xb3,

    /* U+003D "=" */
    0x7f, 0xff, 0xff, 0xf3, 0x12, 0x22, 0x22, 0x20,
    0x7f, 0xff, 0xff, 0xf3, 0x12, 0x22, 0x22, 0x20,

    /* U+003E ">" */
    0x69, 0x40, 0x0, 0x0, 0x3b, 0xfe, 0x94, 0x0,
    0x0, 0x5, 0xaf, 0xe2, 0x0, 0x0, 0x1, 0xa3,
    0x0, 0x5, 0xaf, 0xe2, 0x3a, 0xfe, 0xa4, 0x0,
    0x6a, 0x40, 0x0, 0x0,

    /* U+003F "?" */
    0x3, 0xbf, 0xea, 0x20, 0x3f, 0xa4, 0x5b, 0xe1,
    0xac, 0x0, 0x0, 0xe8, 0xd8, 0x0, 0x0, 0xb9,
    0x0, 0x0, 0x4, 0xf5, 0x0, 0xb, 0xff, 0x80,
    0x0, 0x2f, 0x50, 0x0, 0x0, 0x2d, 0x10, 0x0,
    0x0, 0x2, 0x0, 0x0, 0x0, 0x7f, 0x70, 0x0,
    0x0, 0x5f, 0x50, 0x0,

    /* U+0040 "@" */
    0xb, 0xff, 0xff, 0xe9, 0x10, 0x1, 0x22, 0x22,
    0x4d, 0xa0, 0x3, 0xcf, 0x99, 0x75, 0xf0, 0xe,
    0xa3, 0x8f, 0x83, 0xf0, 0x4f, 0x0, 0xd, 0x83,
    0xf0, 0x5e, 0x0, 0xb, 0x83, 0xf0, 0x4f, 0x0,
    0xd, 0x83, 0xf0, 0xe, 0x92, 0x7f, 0xa5, 0xf0,
    0x3, 0xcf, 0x95, 0xff, 0xb0,

    /* U+0041 "A" */
    0x0, 0x8, 0xef, 0x40, 0x0, 0x0, 0xd, 0x8b,
    0x90, 0x0, 0x0, 0x2f, 0x36, 0xe0, 0x0, 0x0,
    0x7e, 0x2, 0xf3, 0x0, 0x0, 0xc9, 0x0, 0xd8,
    0x0, 0x1, 0xf4, 0x0, 0x8d, 0x0, 0x6, 0xf0,
    0x0, 0x3f, 0x20, 0xb, 0xff, 0xff, 0xff, 0x70,
    0xf, 0x83, 0x33, 0x3a, 0xc0, 0x4f, 0x10, 0x0,
    0x5, 0xf1, 0x9d, 0x0, 0x0, 0x0, 0xf6,

    /* U+0042 "B" */
    0x1f, 0xff, 0xff, 0xd6, 0x0, 0x5f, 0x63, 0x38,
    0xf5, 0x2, 0xf3, 0x0, 0xa, 0xa0, 0x2f, 0x30,
    0x0, 0x9a, 0x2, 0xf3, 0x0, 0x4f, 0x40, 0x2f,
    0xff, 0xff, 0x40, 0x2, 0xf6, 0x33, 0x7e, 0x20,
    0x2f, 0x30, 0x0, 0xaa, 0x2, 0xf3, 0x0, 0xa,
    0xa0, 0x5f, 0x63, 0x37, 0xf5, 0x1f, 0xff, 0xff,
    0xd6, 0x0,

    /* U+0043 "C" */
    0x3, 0xcf, 0xfb, 0x20, 0x3f, 0xb4, 0x5b, 0xf2,
    0xad, 0x0, 0x0, 0xda, 0xe7, 0x0, 0x0, 0x8d,
    0xf6, 0x0, 0x0, 0x0, 0xf6, 0x0, 0x0, 0x0,
    0xf6, 0x0, 0x0, 0x0, 0xe7, 0x0, 0x0, 0x8d,
    0xbc, 0x0, 0x0, 0xca, 0x3f, 0xa4, 0x5b, 0xf2,
    0x4, 0xcf, 0xfb, 0x20,

    /* U+0044 "D" */
    0xdf, 0xff, 0xfc, 0x40, 0x2e, 0x93, 0x5a, 0xf3,
    0xe, 0x70, 0x0, 0xda, 0xe, 0x70, 0x0, 0x8c,
    0xe, 0x70, 0x0, 0x8d, 0xe, 0x70, 0x0, 0x8d,
    0xe, 0x70, 0x0, 0x8d, 0xe, 0x70, 0x0, 0x8c,
    0xe, 0x70, 0x0, 0xda, 0x3e, 0x93, 0x5b, 0xf3,
    0xdf, 0xff, 0xfc, 0x40,

    /* U+0045 "E" */
    0x8f, 0xff, 0xff, 0xf4, 0x8e, 0x33, 0x33, 0x30,
    0x8d, 0x0, 0x0, 0x0, 0x8d, 0x0, 0x0, 0x0,
    0x8d, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xf3,
    0x8e, 0x33, 0x33, 0x30, 0x8d, 0x0, 0x0, 0x0,
    0x8d, 0x0, 0x0, 0x0, 0x8e, 0x33, 0x33, 0x31,
    0x8f, 0xff, 0xff, 0xf6,

    /* U+0046 "F" */
    0x7f, 0xff, 0xff, 0xf6, 0x7e, 0x33, 0x33, 0x31,
    0x7d, 0x0, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x0,
    0x7d, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xf4,
    0x7e, 0x33, 0x33, 0x30, 0x7d, 0x0, 0x0, 0x0,
    0x7d, 0x0, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x0,
    0x7d, 0x0, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x4c, 0xff, 0xa1, 0x0, 0x4f, 0xa4, 0x5c,
    0xe1, 0xc, 0xb0, 0x0, 0xe, 0x80, 0xf6, 0x0,
    0x0, 0x9c, 0xf, 0x40, 0x0, 0x1, 0x21, 0xf4,
    0x0, 0x0, 0x0, 0xf, 0x42, 0xff, 0xff, 0xd0,
    0xf6, 0x3, 0x33, 0xad, 0xc, 0xb0, 0x0, 0xc,
    0xd0, 0x4f, 0xa4, 0x4b, 0xdd, 0x0, 0x5c, 0xfe,
    0x77, 0xd0,

    /* U+0048 "H" */
    0xd8, 0x0, 0x0, 0xba, 0xd8, 0x0, 0x0, 0xba,
    0xd8, 0x0, 0x0, 0xba, 0xd8, 0x0, 0x0, 0xba,
    0xd8, 0x0, 0x0, 0xba, 0xdf, 0xff, 0xff, 0xfa,
    0xd9, 0x33, 0x33, 0xca, 0xd8, 0x0, 0x0, 0xba,
    0xd8, 0x0, 0x0, 0xba, 0xd8, 0x0, 0x0, 0xba,
    0xd8, 0x0, 0x0, 0xba,

    /* U+0049 "I" */
    0xaf, 0xff, 0xff, 0xf7, 0x23, 0x3d, 0xa3, 0x31,
    0x0, 0xc, 0x90, 0x0, 0x0, 0xc, 0x90, 0x0,
    0x0, 0xc, 0x90, 0x0, 0x0, 0xc, 0x90, 0x0,
    0x0, 0xc, 0x90, 0x0, 0x0, 0xc, 0x90, 0x0,
    0x0, 0xc, 0x90, 0x0, 0x23, 0x3d, 0xa3, 0x31,
    0xaf, 0xff, 0xff, 0xf7,

    /* U+004A "J" */
    0x0, 0x0, 0x6f, 0xff, 0x0, 0x0, 0x1, 0x6f,
    0x40, 0x0, 0x0, 0x4, 0xf1, 0x0, 0x0, 0x0,
    0x4f, 0x10, 0x0, 0x0, 0x4, 0xf1, 0x0, 0x0,
    0x0, 0x4f, 0x10, 0x32, 0x0, 0x4, 0xf1, 0xc,
    0x80, 0x0, 0x4f, 0x10, 0xab, 0x0, 0x7, 0xf0,
    0x4, 0xf8, 0x45, 0xe9, 0x0, 0x5, 0xcf, 0xe9,
    0x0, 0x0,

    /* U+004B "K" */
    0x9c, 0x0, 0x1, 0xeb, 0x9, 0xc0, 0x0, 0xcd,
    0x10, 0x9c, 0x0, 0xbe, 0x20, 0x9, 0xc0, 0x9f,
    0x30, 0x0, 0x9c, 0x7f, 0x50, 0x0, 0x9, 0xff,
    0x90, 0x0, 0x0, 0x9d, 0x9f, 0x30, 0x0, 0x9,
    0xc0, 0xae, 0x20, 0x0, 0x9c, 0x0, 0xbe, 0x10,
    0x9, 0xc0, 0x0, 0xcd, 0x10, 0x9c, 0x0, 0x0,
    0xcc, 0x0,

    /* U+004C "L" */
    0x9b, 0x0, 0x0, 0x0, 0x9b, 0x0, 0x0, 0x0,
    0x9b, 0x0, 0x0, 0x0, 0x9b, 0x0, 0x0, 0x0,
    0x9b, 0x0, 0x0, 0x0, 0x9b, 0x0, 0x0, 0x0,
    0x9b, 0x0, 0x0, 0x0, 0x9b, 0x0, 0x0, 0x0,
    0x9b, 0x0, 0x0, 0x0, 0x9c, 0x33, 0x33, 0x32,
    0x9f, 0xff, 0xff, 0xf9,

    /* U+004D "M" */
    0x4f, 0xe5, 0x0, 0x9e, 0xf1, 0x4f, 0xb8, 0x0,
    0xba, 0xf1, 0x4f, 0x8a, 0x0, 0xd8, 0xf1, 0x4f,
    0x6c, 0x0, 0xf5, 0xf1, 0x4f, 0x4f, 0x2, 0xf3,
    0xf1, 0x4f, 0x1f, 0x14, 0xe3, 0xf1, 0x4f, 0xf,
    0x37, 0xc3, 0xf1, 0x4f, 0xd, 0x59, 0x93, 0xf1,
    0x4f, 0xa, 0x8b, 0x73, 0xf1, 0x4f, 0x8, 0xae,
    0x53, 0xf1, 0x4f, 0x6, 0xef, 0x23, 0xf1,

    /* U+004E "N" */
    0xde, 0xf0, 0x0, 0xba, 0xd8, 0xf5, 0x0, 0xba,
    0xd8, 0xba, 0x0, 0xba, 0xd8, 0x6e, 0x0, 0xba,
    0xd8, 0x1f, 0x40, 0xba, 0xd8, 0xc, 0x80, 0xba,
    0xd8, 0x7, 0xd0, 0xba, 0xd8, 0x2, 0xf2, 0xba,
    0xd8, 0x0, 0xd7, 0xba, 0xd8, 0x0, 0x8c, 0xba,
    0xd8, 0x0, 0x3f, 0xea,

    /* U+004F "O" */
    0x0, 0x4c, 0xff, 0xb2, 0x0, 0x4f, 0xa4, 0x5c,
    0xe1, 0xc, 0xc0, 0x0, 0xe, 0x80, 0xf6, 0x0,
    0x0, 0xac, 0xf, 0x40, 0x0, 0x8, 0xd0, 0xf4,
    0x0, 0x0, 0x8d, 0xf, 0x40, 0x0, 0x8, 0xd0,
    0xf6, 0x0, 0x0, 0xac, 0xc, 0xb0, 0x0, 0xe,
    0x80, 0x4f, 0xa4, 0x5c, 0xe1, 0x0, 0x4c, 0xff,
    0xb2, 0x0,

    /* U+0050 "P" */
    0xaf, 0xff, 0xfd, 0x60, 0xac, 0x33, 0x48, 0xf5,
    0xab, 0x0, 0x0, 0xab, 0xab, 0x0, 0x0, 0x9b,
    0xab, 0x0, 0x4, 0xf7, 0xaf, 0xff, 0xff, 0x90,
    0xac, 0x33, 0x20, 0x0, 0xab, 0x0, 0x0, 0x0,
    0xab, 0x0, 0x0, 0x0, 0xab, 0x0, 0x0, 0x0,
    0xab, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x4c, 0xff, 0xb2, 0x0, 0x4f, 0xa4, 0x5c,
    0xe1, 0xc, 0xc0, 0x0, 0xe, 0x80, 0xf6, 0x0,
    0x0, 0xac, 0xf, 0x40, 0x0, 0x8, 0xd0, 0xf4,
    0x0, 0x0, 0x8d, 0xf, 0x40, 0x0, 0x8, 0xd0,
    0xf6, 0x0, 0x0, 0xab, 0xb, 0xb0, 0x0, 0xe,
    0x80, 0x4f, 0x94, 0x4b, 0xe1, 0x0, 0x4b, 0xff,
    0xa2, 0x0, 0x0, 0xb, 0x80, 0x0, 0x0, 0x0,
    0x8f, 0xf4, 0x0, 0x0, 0x0, 0x22, 0x0,

    /* U+0052 "R" */
    0xaf, 0xff, 0xfd, 0x60, 0xac, 0x33, 0x48, 0xf5,
    0xab, 0x0, 0x0, 0xab, 0xab, 0x0, 0x0, 0x9b,
    0xab, 0x0, 0x4, 0xf5, 0xaf, 0xff, 0xff, 0xa0,
    0xac, 0x33, 0x35, 0xf5, 0xab, 0x0, 0x0, 0xf6,
    0xab, 0x0, 0x0, 0xf6, 0xab, 0x0, 0x0, 0xf6,
    0xab, 0x0, 0x0, 0xf6,

    /* U+0053 "S" */
    0x0, 0x5c, 0xff, 0xb3, 0x0, 0x5f, 0x94, 0x4a,
    0xf4, 0xc, 0xa0, 0x0, 0xb, 0xc0, 0xbb, 0x0,
    0x0, 0x6b, 0x4, 0xfb, 0x52, 0x0, 0x0, 0x2,
    0x9d, 0xfe, 0x80, 0x15, 0x0, 0x0, 0x5e, 0x93,
    0xf2, 0x0, 0x0, 0x7e, 0x1f, 0x70, 0x0, 0x8,
    0xd0, 0x6f, 0x94, 0x47, 0xf8, 0x0, 0x4c, 0xff,
    0xc6, 0x0,

    /* U+0054 "T" */
    0xf, 0xff, 0xff, 0xff, 0xd0, 0x33, 0x3d, 0xa3,
    0x32, 0x0, 0x0, 0xc9, 0x0, 0x0, 0x0, 0xc,
    0x90, 0x0, 0x0, 0x0, 0xc9, 0x0, 0x0, 0x0,
    0xc, 0x90, 0x0, 0x0, 0x0, 0xc9, 0x0, 0x0,
    0x0, 0xc, 0x90, 0x0, 0x0, 0x0, 0xc9, 0x0,
    0x0, 0x0, 0xc, 0x90, 0x0, 0x0, 0x0, 0xc9,
    0x0, 0x0,

    /* U+0055 "U" */
    0xf6, 0x0, 0x0, 0x9b, 0xf6, 0x0, 0x0, 0x9b,
    0xf6, 0x0, 0x0, 0x9b, 0xf6, 0x0, 0x0, 0x9b,
    0xf6, 0x0, 0x0, 0x9b, 0xf6, 0x0, 0x0, 0x9b,
    0xf6, 0x0, 0x0, 0x9b, 0xe7, 0x0, 0x0, 0xab,
    0xcb, 0x0, 0x0, 0xe8, 0x4f, 0x94, 0x5b, 0xf2,
    0x4, 0xcf, 0xeb, 0x20,

    /* U+0056 "V" */
    0x6f, 0x0, 0x0, 0x3, 0xf3, 0x2f, 0x40, 0x0,
    0x8, 0xe0, 0xd, 0x90, 0x0, 0xc, 0xa0, 0x8,
    0xd0, 0x0, 0x1f, 0x50, 0x4, 0xf2, 0x0, 0x5f,
    0x10, 0x0, 0xf6, 0x0, 0xac, 0x0, 0x0, 0xbb,
    0x0, 0xe7, 0x0, 0x0, 0x6f, 0x3, 0xf3, 0x0,
    0x0, 0x2f, 0x47, 0xe0, 0x0, 0x0, 0xd, 0x8c,
    0x90, 0x0, 0x0, 0x8, 0xef, 0x50, 0x0,

    /* U+0057 "W" */
    0xc7, 0x6, 0xef, 0x20, 0xa8, 0xa8, 0x7, 0xbe,
    0x40, 0xc7, 0x9a, 0x9, 0x9d, 0x50, 0xd5, 0x7c,
    0xa, 0x8b, 0x70, 0xf4, 0x5d, 0xc, 0x69, 0x80,
    0xf2, 0x4f, 0xd, 0x48, 0xa2, 0xf0, 0x2f, 0xf,
    0x36, 0xc4, 0xf0, 0xf, 0x3f, 0x15, 0xd5, 0xd0,
    0xf, 0x6f, 0x3, 0xf7, 0xb0, 0xd, 0xae, 0x1,
    0xfa, 0xa0, 0xb, 0xed, 0x0, 0xfe, 0x80,

    /* U+0058 "X" */
    0xe, 0x70, 0x0, 0xb, 0xc0, 0x7, 0xe0, 0x0,
    0x3f, 0x40, 0x0, 0xe7, 0x0, 0xbc, 0x0, 0x0,
    0x7e, 0x13, 0xf3, 0x0, 0x0, 0xe, 0x8b, 0xb0,
    0x0, 0x0, 0x8, 0xff, 0x40, 0x0, 0x0, 0xd,
    0xac, 0xa0, 0x0, 0x0, 0x6f, 0x14, 0xf2, 0x0,
    0x0, 0xe8, 0x0, 0xcb, 0x0, 0x7, 0xf1, 0x0,
    0x3f, 0x30, 0xe, 0x70, 0x0, 0xb, 0xc0,

    /* U+0059 "Y" */
    0x5f, 0x20, 0x0, 0x6, 0xf2, 0xd, 0xa0, 0x0,
    0xd, 0x90, 0x5, 0xf2, 0x0, 0x5f, 0x20, 0x0,
    0xd9, 0x0, 0xca, 0x0, 0x0, 0x5f, 0x14, 0xf2,
    0x0, 0x0, 0xd, 0x8c, 0xa0, 0x0, 0x0, 0x6,
    0xff, 0x20, 0x0, 0x0, 0x0, 0xc9, 0x0, 0x0,
    0x0, 0x0, 0xc9, 0x0, 0x0, 0x0, 0x0, 0xc9,
    0x0, 0x0, 0x0, 0x0, 0xc9, 0x0, 0x0,

    /* U+005A "Z" */
    0xc, 0xff, 0xff, 0xff, 0xb0, 0x23, 0x33, 0x33,
    0xbb, 0x0, 0x0, 0x0, 0x6f, 0x40, 0x0, 0x0,
    0x4f, 0x50, 0x0, 0x0, 0x3f, 0x70, 0x0, 0x0,
    0x2e, 0x90, 0x0, 0x0, 0x1d, 0xb0, 0x0, 0x0,
    0xc, 0xc0, 0x0, 0x0, 0xa, 0xd1, 0x0, 0x0,
    0x2, 0xf5, 0x33, 0x33, 0x33, 0x2f, 0xff, 0xff,
    0xff, 0xe0,

    /* U+005B "[" */
    0x7f, 0xf0, 0xc9, 0x20, 0xc7, 0x0, 0xc7, 0x0,
    0xc7, 0x0, 0xc7, 0x0, 0xc7, 0x0, 0xc7, 0x0,
    0xc7, 0x0, 0xc7, 0x0, 0xc7, 0x0, 0xc7, 0x0,
    0xc7, 0x0, 0xc7, 0x0, 0xc8, 0x0, 0x9f, 0xf0,
    0x2, 0x20,

    /* U+005C "\\" */
    0x72, 0x0, 0x0, 0xb8, 0x0, 0x0, 0x6d, 0x0,
    0x0, 0x1f, 0x20, 0x0, 0xb, 0x80, 0x0, 0x6,
    0xd0, 0x0, 0x1, 0xf2, 0x0, 0x0, 0xb8, 0x0,
    0x0, 0x6d, 0x0, 0x0, 0x1f, 0x20, 0x0, 0xb,
    0x80, 0x0, 0x6, 0xd0, 0x0, 0x1, 0xf3, 0x0,
    0x0, 0xb8, 0x0, 0x0, 0x45,

    /* U+005D "]" */
    0x3f, 0xe4, 0x2, 0xc8, 0x0, 0xb9, 0x0, 0xb9,
    0x0, 0xb9, 0x0, 0xb9, 0x0, 0xb9, 0x0, 0xb9,
    0x0, 0xb9, 0x0, 0xb9, 0x0, 0xb9, 0x0, 0xb9,
    0x0, 0xb9, 0x0, 0xb9, 0x0, 0xb8, 0x3f, 0xf5,
    0x2, 0x10,

    /* U+005E "^" */
    0x0, 0x6a, 0xb3, 0x0, 0x1, 0xe6, 0x9c, 0x0,
    0x9, 0xd0, 0x1f, 0x50, 0x2f, 0x40, 0x8, 0xe0,
    0x79, 0x0, 0x0, 0xb5,

    /* U+005F "_" */
    0xdf, 0xff, 0xff, 0xf9, 0x22, 0x22, 0x22, 0x21,

    /* U+0060 "`" */
    0x1d, 0x40, 0x6, 0xd0,

    /* U+0061 "a" */
    0x0, 0x6d, 0xfc, 0x3d, 0x60, 0x7, 0xf7, 0x36,
    0xde, 0x60, 0xf, 0x60, 0x0, 0x3f, 0x60, 0x3f,
    0x10, 0x0, 0xe, 0x60, 0x3f, 0x10, 0x0, 0xe,
    0x60, 0xf, 0x50, 0x0, 0x3f, 0x60, 0x8, 0xe6,
    0x25, 0xdf, 0x80, 0x0, 0x6d, 0xfd, 0x48, 0xf3,

    /* U+0062 "b" */
    0xe5, 0x0, 0x0, 0x0, 0xe5, 0x0, 0x0, 0x0,
    0xe5, 0x0, 0x0, 0x0, 0xe7, 0xae, 0xfc, 0x30,
    0xef, 0xa4, 0x4a, 0xf3, 0xec, 0x0, 0x0, 0xbb,
    0xe6, 0x0, 0x0, 0x6e, 0xe6, 0x0, 0x0, 0x6e,
    0xec, 0x0, 0x0, 0xbb, 0xeb, 0xa3, 0x39, 0xf3,
    0xe5, 0x6e, 0xfc, 0x30,

    /* U+0063 "c" */
    0x0, 0x2b, 0xfe, 0xb3, 0x0, 0x3f, 0xa4, 0x39,
    0xf2, 0xc, 0xa0, 0x0, 0xb, 0x90, 0xf4, 0x0,
    0x0, 0x10, 0xf, 0x40, 0x0, 0x1, 0x0, 0xd9,
    0x0, 0x0, 0xba, 0x3, 0xf9, 0x33, 0x9f, 0x30,
    0x3, 0xbe, 0xeb, 0x30,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0x7, 0xc0, 0x0, 0x0, 0x0,
    0x7c, 0x0, 0x0, 0x0, 0x7, 0xc0, 0x4, 0xcf,
    0xd9, 0x8c, 0x4, 0xf9, 0x34, 0xbf, 0xc0, 0xd9,
    0x0, 0x0, 0xdc, 0xf, 0x40, 0x0, 0x8, 0xc0,
    0xf4, 0x0, 0x0, 0x8c, 0xd, 0x90, 0x0, 0xd,
    0xc0, 0x4f, 0x83, 0x4b, 0xcc, 0x0, 0x4c, 0xfd,
    0x67, 0xc0,

    /* U+0065 "e" */
    0x2, 0xbf, 0xfb, 0x20, 0x2f, 0x83, 0x3a, 0xe1,
    0xb8, 0x0, 0x0, 0xb8, 0xef, 0xff, 0xff, 0xfb,
    0xe7, 0x22, 0x22, 0x21, 0xba, 0x0, 0x0, 0x94,
    0x2f, 0x93, 0x39, 0xf2, 0x2, 0xbf, 0xeb, 0x30,

    /* U+0066 "f" */
    0x0, 0x1d, 0xff, 0xf2, 0x0, 0x3f, 0x22, 0x20,
    0x0, 0x3f, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xf5,
    0x12, 0x5f, 0x22, 0x20, 0x0, 0x3f, 0x0, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x0, 0x3f, 0x0, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x0, 0x3f, 0x0, 0x0,
    0x0, 0x3f, 0x0, 0x0,

    /* U+0067 "g" */
    0x0, 0x4c, 0xfe, 0x99, 0xa0, 0x5f, 0x83, 0x4c,
    0xfa, 0xe, 0x80, 0x0, 0x1e, 0xa2, 0xf2, 0x0,
    0x0, 0xaa, 0x2f, 0x20, 0x0, 0xa, 0xa0, 0xe7,
    0x0, 0x1, 0xea, 0x5, 0xf7, 0x34, 0xcc, 0xa0,
    0x5, 0xcf, 0xd5, 0x9a, 0x0, 0x0, 0x0, 0x9,
    0xa0, 0x1, 0x22, 0x22, 0xba, 0x0, 0xbf, 0xff,
    0xff, 0x50,

    /* U+0068 "h" */
    0x9a, 0x0, 0x0, 0x0, 0x9a, 0x0, 0x0, 0x0,
    0x9a, 0x0, 0x0, 0x0, 0x9a, 0x4d, 0xfc, 0x30,
    0x9c, 0xb4, 0x3b, 0xe0, 0x9e, 0x0, 0x1, 0xf4,
    0x9b, 0x0, 0x0, 0xd6, 0x9a, 0x0, 0x0, 0xd6,
    0x9a, 0x0, 0x0, 0xd6, 0x9a, 0x0, 0x0, 0xd6,
    0x9a, 0x0, 0x0, 0xd6,

    /* U+0069 "i" */
    0x0, 0xd, 0xc0, 0x0, 0x0, 0xf, 0xe0, 0x0,
    0x0, 0x1, 0x10, 0x0, 0x2f, 0xff, 0x90, 0x0,
    0x2, 0x2a, 0x90, 0x0, 0x0, 0xa, 0x90, 0x0,
    0x0, 0xa, 0x90, 0x0, 0x0, 0xa, 0x90, 0x0,
    0x0, 0xa, 0x90, 0x0, 0x2, 0x2a, 0xa2, 0x20,
    0x6f, 0xff, 0xff, 0xf3,

    /* U+006A "j" */
    0x0, 0x0, 0xcd, 0x0, 0x0, 0xe, 0xf1, 0x0,
    0x0, 0x11, 0x0, 0xcf, 0xff, 0xa0, 0x1, 0x22,
    0xaa, 0x0, 0x0, 0x9, 0xa0, 0x0, 0x0, 0x9a,
    0x0, 0x0, 0x9, 0xa0, 0x0, 0x0, 0x9a, 0x0,
    0x0, 0x9, 0xa0, 0x0, 0x0, 0x9a, 0x0, 0x0,
    0x9, 0xa0, 0x2, 0x22, 0xaa, 0x2, 0xff, 0xff,
    0x50,

    /* U+006B "k" */
    0xd7, 0x0, 0x0, 0xd, 0x70, 0x0, 0x0, 0xd7,
    0x0, 0x0, 0xd, 0x70, 0xb, 0xc0, 0xd7, 0xb,
    0xd1, 0xd, 0x7b, 0xd1, 0x0, 0xdf, 0xf1, 0x0,
    0xd, 0x8d, 0xa0, 0x0, 0xd7, 0x2e, 0x70, 0xd,
    0x70, 0x3f, 0x50, 0xd7, 0x0, 0x5f, 0x30,

    /* U+006C "l" */
    0x8f, 0xff, 0x80, 0x0, 0x12, 0x2c, 0x80, 0x0,
    0x0, 0xb, 0x80, 0x0, 0x0, 0xb, 0x80, 0x0,
    0x0, 0xb, 0x80, 0x0, 0x0, 0xb, 0x80, 0x0,
    0x0, 0xb, 0x80, 0x0, 0x0, 0xb, 0x80, 0x0,
    0x0, 0xb, 0x80, 0x0, 0x12, 0x2c, 0x92, 0x20,
    0x9f, 0xff, 0xff, 0xf6,

    /* U+006D "m" */
    0x3f, 0x6f, 0xc3, 0xde, 0x60, 0x3f, 0x74, 0xfd,
    0x39, 0xf0, 0x3f, 0x0, 0xb8, 0x3, 0xf0, 0x3f,
    0x0, 0xb8, 0x3, 0xf0, 0x3f, 0x0, 0xb8, 0x3,
    0xf0, 0x3f, 0x0, 0xb8, 0x3, 0xf0, 0x3f, 0x0,
    0xb8, 0x3, 0xf0, 0x3f, 0x0, 0xb8, 0x3, 0xf0,

    /* U+006E "n" */
    0x9a, 0x5d, 0xfc, 0x30, 0x9d, 0xb4, 0x3b, 0xe0,
    0x9e, 0x0, 0x1, 0xf4, 0x9b, 0x0, 0x0, 0xd6,
    0x9a, 0x0, 0x0, 0xd6, 0x9a, 0x0, 0x0, 0xd6,
    0x9a, 0x0, 0x0, 0xd6, 0x9a, 0x0, 0x0, 0xd6,

    /* U+006F "o" */
    0x0, 0x3b, 0xfe, 0xa1, 0x0, 0x3f, 0x93, 0x4b,
    0xe1, 0xd, 0x90, 0x0, 0xc, 0x90, 0xf4, 0x0,
    0x0, 0x7d, 0xf, 0x40, 0x0, 0x7, 0xd0, 0xd9,
    0x0, 0x0, 0xc9, 0x4, 0xf8, 0x34, 0xbe, 0x10,
    0x3, 0xbe, 0xea, 0x20,

    /* U+0070 "p" */
    0xe7, 0xae, 0xfc, 0x30, 0xef, 0xa4, 0x4a, 0xf3,
    0xec, 0x0, 0x0, 0xbb, 0xe6, 0x0, 0x0, 0x6e,
    0xe6, 0x0, 0x0, 0x6e, 0xec, 0x0, 0x0, 0xbb,
    0xeb, 0xa3, 0x39, 0xf3, 0xe5, 0x6e, 0xfc, 0x30,
    0xe5, 0x0, 0x0, 0x0, 0xe5, 0x0, 0x0, 0x0,
    0xe5, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x0, 0x4c, 0xfe, 0x89, 0xb0, 0x5f, 0x83, 0x4c,
    0xfb, 0xe, 0x80, 0x0, 0xe, 0xb1, 0xf3, 0x0,
    0x0, 0x9b, 0x1f, 0x30, 0x0, 0x9, 0xb0, 0xe8,
    0x0, 0x0, 0xeb, 0x5, 0xf8, 0x34, 0xbc, 0xb0,
    0x5, 0xcf, 0xd4, 0x8b, 0x0, 0x0, 0x0, 0x8,
    0xb0, 0x0, 0x0, 0x0, 0x8b, 0x0, 0x0, 0x0,
    0x8, 0xb0,

    /* U+0072 "r" */
    0x1f, 0xfd, 0x5e, 0xe9, 0x0, 0x28, 0xfa, 0x35,
    0xf8, 0x0, 0x6f, 0x0, 0x8, 0xc0, 0x6, 0xd0,
    0x0, 0x11, 0x0, 0x6d, 0x0, 0x0, 0x0, 0x6,
    0xd0, 0x0, 0x0, 0x2, 0x7d, 0x21, 0x0, 0x4,
    0xff, 0xff, 0xd0, 0x0,

    /* U+0073 "s" */
    0x3, 0xcf, 0xe8, 0x0, 0xf, 0x82, 0x3c, 0x90,
    0x1f, 0x20, 0x3, 0x70, 0xb, 0xfb, 0x85, 0x0,
    0x0, 0x35, 0x7c, 0xc0, 0x6b, 0x0, 0x2, 0xf1,
    0x2f, 0x93, 0x3a, 0xe0, 0x3, 0xcf, 0xfb, 0x30,

    /* U+0074 "t" */
    0x0, 0x6d, 0x0, 0x0, 0x6, 0xd0, 0x0, 0x0,
    0x6d, 0x0, 0xe, 0xff, 0xff, 0xff, 0x12, 0x7e,
    0x22, 0x10, 0x6, 0xd0, 0x0, 0x0, 0x6d, 0x0,
    0x0, 0x6, 0xd0, 0x0, 0x0, 0x6d, 0x0, 0x0,
    0x6, 0xe2, 0x21, 0x0, 0x2e, 0xff, 0x80,

    /* U+0075 "u" */
    0xb8, 0x0, 0x0, 0xf4, 0xb8, 0x0, 0x0, 0xf4,
    0xb8, 0x0, 0x0, 0xf4, 0xb8, 0x0, 0x0, 0xf4,
    0xb8, 0x0, 0x0, 0xf4, 0x9b, 0x0, 0x4, 0xf4,
    0x4f, 0x73, 0x5b, 0xf4, 0x6, 0xdf, 0xb1, 0xf4,

    /* U+0076 "v" */
    0xe, 0x80, 0x0, 0xc, 0xb0, 0x9d, 0x0, 0x1,
    0xf5, 0x4, 0xf2, 0x0, 0x6f, 0x0, 0xe, 0x70,
    0xb, 0xa0, 0x0, 0x9d, 0x1, 0xf5, 0x0, 0x3,
    0xf2, 0x6f, 0x0, 0x0, 0xe, 0x7b, 0xa0, 0x0,
    0x0, 0x8d, 0xf4, 0x0,

    /* U+0077 "w" */
    0xaa, 0x5, 0xef, 0x10, 0xd6, 0x7c, 0x7, 0xae,
    0x30, 0xf4, 0x5e, 0x9, 0x8c, 0x52, 0xf1, 0x2f,
    0xb, 0x6a, 0x74, 0xf0, 0xf, 0x3d, 0x48, 0x96,
    0xc0, 0xd, 0x5f, 0x26, 0xb8, 0xa0, 0xb, 0x8f,
    0x3, 0xdb, 0x70, 0x8, 0xee, 0x1, 0xfe, 0x50,

    /* U+0078 "x" */
    0x5f, 0x20, 0x4, 0xf2, 0xa, 0xb0, 0xe, 0x70,
    0x1, 0xe6, 0x9c, 0x0, 0x0, 0x7f, 0xf3, 0x0,
    0x0, 0xc9, 0xc9, 0x0, 0x6, 0xe1, 0x3f, 0x30,
    0x1e, 0x60, 0xa, 0xc0, 0x9d, 0x0, 0x1, 0xf5,

    /* U+0079 "y" */
    0x9a, 0x0, 0x0, 0xd6, 0x9a, 0x0, 0x0, 0xd6,
    0x9a, 0x0, 0x0, 0xd6, 0x9a, 0x0, 0x0, 0xd6,
    0x9a, 0x0, 0x0, 0xe6, 0x7c, 0x0, 0x3, 0xf6,
    0x2f, 0x83, 0x5b, 0xe6, 0x5, 0xdf, 0xc2, 0xd6,
    0x0, 0x0, 0x0, 0xd6, 0x0, 0x22, 0x22, 0xe6,
    0x5, 0xff, 0xff, 0xe2,

    /* U+007A "z" */
    0x7f, 0xff, 0xff, 0xf2, 0x2, 0x22, 0x25, 0xf2,
    0x0, 0x0, 0x5f, 0x70, 0x0, 0x7, 0xf5, 0x0,
    0x0, 0xae, 0x30, 0x0, 0x1c, 0xc1, 0x0, 0x0,
    0x8c, 0x22, 0x22, 0x20, 0x8f, 0xff, 0xff, 0xf6,

    /* U+007B "{" */
    0x3, 0xef, 0x30, 0x8c, 0x20, 0x8, 0xb0, 0x0,
    0x8b, 0x0, 0x8, 0xb0, 0x0, 0x8b, 0x0, 0x8,
    0xb0, 0x8, 0xe6, 0x0, 0xcd, 0x30, 0x0, 0x9a,
    0x0, 0x8, 0xb0, 0x0, 0x8b, 0x0, 0x8, 0xb0,
    0x0, 0x8b, 0x0, 0x8, 0xb0, 0x0, 0x5f, 0xf3,
    0x0, 0x12, 0x0,

    /* U+007C "|" */
    0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7,
    0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7,

    /* U+007D "}" */
    0x6f, 0xd1, 0x1, 0x2f, 0x50, 0x0, 0xe5, 0x0,
    0xe, 0x50, 0x0, 0xe5, 0x0, 0xe, 0x50, 0x0,
    0xe5, 0x0, 0xa, 0xd6, 0x0, 0x6e, 0x90, 0xe,
    0x60, 0x0, 0xe5, 0x0, 0xe, 0x50, 0x0, 0xe5,
    0x0, 0xe, 0x50, 0x0, 0xe5, 0x6, 0xff, 0x20,
    0x12, 0x10, 0x0,

    /* U+007E "~" */
    0x1, 0xcc, 0x0, 0x57, 0x2e, 0x7b, 0x67, 0xe2,
    0xb5, 0x4, 0xfc, 0x10, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 157, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 157, .box_w = 4, .box_h = 11, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 157, .box_w = 6, .box_h = 4, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 34, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 66, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 157, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 223, .adv_w = 157, .box_w = 7, .box_h = 17, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 283, .adv_w = 157, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 343, .adv_w = 157, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 379, .adv_w = 157, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 407, .adv_w = 157, .box_w = 4, .box_h = 5, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 417, .adv_w = 157, .box_w = 6, .box_h = 2, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 423, .adv_w = 157, .box_w = 4, .box_h = 3, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 157, .box_w = 6, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 474, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 157, .box_w = 4, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 959, .adv_w = 157, .box_w = 4, .box_h = 10, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 979, .adv_w = 157, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1007, .adv_w = 157, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1023, .adv_w = 157, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1051, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1140, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1195, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1289, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1333, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1377, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1421, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1471, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1515, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1559, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1609, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1659, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1703, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1758, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1802, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1852, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1896, .adv_w = 157, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1959, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2003, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2053, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2103, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2147, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2202, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2257, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2312, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2367, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2417, .adv_w = 157, .box_w = 4, .box_h = 17, .ofs_x = 4, .ofs_y = -3},
    {.bitmap_index = 2451, .adv_w = 157, .box_w = 6, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2496, .adv_w = 157, .box_w = 4, .box_h = 17, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 2530, .adv_w = 157, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2550, .adv_w = 157, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2558, .adv_w = 157, .box_w = 4, .box_h = 2, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 2562, .adv_w = 157, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2602, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2646, .adv_w = 157, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2682, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2732, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2764, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2808, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2858, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2902, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2946, .adv_w = 157, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2995, .adv_w = 157, .box_w = 7, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3034, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3078, .adv_w = 157, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3118, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3150, .adv_w = 157, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3186, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3230, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3280, .adv_w = 157, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3316, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3348, .adv_w = 157, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3387, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3419, .adv_w = 157, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3455, .adv_w = 157, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3495, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3527, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3571, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3603, .adv_w = 157, .box_w = 5, .box_h = 17, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 3646, .adv_w = 157, .box_w = 2, .box_h = 16, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 3662, .adv_w = 157, .box_w = 5, .box_h = 17, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 3705, .adv_w = 157, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR >= 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR >= 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t lv_font_spacemono_16 = {
#else
lv_font_t lv_font_spacemono_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .fallback = NULL,
    .user_data = NULL
};



#endif /*#if LV_FONT_SPACEMONO_16*/
