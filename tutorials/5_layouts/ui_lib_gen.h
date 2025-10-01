/**
 * @file ui_lib_gen.h
 */

#ifndef UI_LIB_GEN_H
#define UI_LIB_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

#define DARK_BLUE lv_color_hex(0x003762)

#define YELLOW lv_color_hex(0xda9d19)

#define UNIT_SMALL 6

#define UNIT_MEDIUM 12

#define UNIT_LARGE 24

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void ui_lib_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/button/button_gen.h"
#include "components/column/column_gen.h"
#include "components/row/row_gen.h"
#include "screens/screen_layouts_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_LIB_GEN_H*/