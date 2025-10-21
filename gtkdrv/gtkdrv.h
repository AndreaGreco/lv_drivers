/**
 * @file gtkdrv
 *
 */

#ifndef GTKDRV_H
#define GTKDRV_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifndef LV_DRV_NO_CONF
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lv_drv_conf.h"
#else
#include "../../lv_drv_conf.h"
#endif
#endif

#if USE_GTK

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

/**********************
 * GLOBAL PROTOTYPES
 **********************/

typedef void gtkdrv_close_handler_t(void);

void gtkdrv_init(void);
uint32_t gtkdrv_tick_get(void);
void gtkdrv_flush_cb(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p);
void gtkdrv_mouse_read_cb(lv_indev_drv_t * drv, lv_indev_data_t * data);
void gtkdrv_keyboard_read_cb(lv_indev_drv_t * drv, lv_indev_data_t * data);
void gtkdrv_close(void);
void gtkdrv_set_close_handler(gtkdrv_close_handler_t * handler);

/**********************
 *      MACROS
 **********************/

#endif /*USE_GTK*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* GTKDRV_H */
