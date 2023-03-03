/**
 * @file qmsd_widget_label.h
 * @author sk (shuke@wireless-tag.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef QMSD_WIDGET_LABEL_H
#define QMSD_WIDGET_LABEL_H

#include "base_widget_type.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef QMSD_GUI_LVGL_V7
typedef lv_label_long_mode_t qmsd_widget_label_longmode_t;
#elif defined QMSD_GUI_LVGL_V8
typedef lv_label_long_mode_t qmsd_widget_label_longmode_t;
#endif

/**
 * @brief create label
 * 
 * @param parent 
 * @return qmsd_widget_t* 
 */
qmsd_widget_t* qmsd_widget_label_create(qmsd_widget_t* parent);

/**
 * @brief set text
 * 
 * @param label 
 * @param fmt 
 * @param ... 
 * @return qmsd_err_t 
 */
qmsd_err_t qmsd_widget_label_set_text(qmsd_widget_t * label , const char * fmt, ...);

/**
 * @brief set the treat mode when labels are longer then the max size
 * 
 * @param label 
 * @param long_mode 
 * @return qmsd_err_t 
 */
qmsd_err_t qmsd_widget_label_set_mode(qmsd_widget_t* label , qmsd_widget_label_longmode_t long_mode);

/**
 * @brief get the text of label
 * 
 * @param label 
 * @return char* 
 */
char * qmsd_widget_label_get_text(const qmsd_widget_t * label);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*QMSD_WIDGET_LABEL_H*/
