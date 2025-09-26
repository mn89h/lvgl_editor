/**
 * @file screen1_gen.h
 */

#ifndef SCREEN1_H
#define SCREEN1_H

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

/**********************
 *      TYPEDEFS
 **********************/

typedef enum {
    SCREEN1_TIMELINE_SCREEN_OPEN = 0,
    _SCREEN1_TIMELINE_CNT = 1
}screen1_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/



lv_obj_t * screen1_create(void);

/**
 * Get a timeline of a screen1
 * @param obj          pointer to a screen1 component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * screen1_get_timeline(lv_obj_t * obj, screen1_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SCREEN1_H*/