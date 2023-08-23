#include <stdio.h>
#include "string.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "qmsd_board.h"
#include "qmsd_utils.h"
#include "lvgl.h"

#define TAG "QMSD-MAIN"

void gui_user_init()
{
    lv_obj_t* page = lv_obj_create(NULL);
    lv_obj_t* label = lv_label_create(page);
    lv_label_set_text_static(label, "costom board");
    lv_obj_center(label);
    lv_scr_load(page);
}

void app_main(void)
{
    gpio_install_isr_service(ESP_INTR_FLAG_SHARED);
    qmsd_board_config_t config = QMSD_BOARD_DEFAULT_CONFIG;
    qmsd_board_init(&config);
    printf("Fine qmsd!\r\n");
}
