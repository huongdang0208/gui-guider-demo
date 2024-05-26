#include "lvgl/lvgl.h"
#include "lv_drivers/display/monitor.h"
#include "lv_drivers/indev/mouse.h"
#include "gui_guider.h"

int main(void)
{
    lv_init();

    /* Monitor setup */
    monitor_init();

    static lv_disp_draw_buf_t draw_buf;
    static lv_color_t buf1[LV_HOR_RES_MAX * 10];
    lv_disp_draw_buf_init(&draw_buf, buf1, NULL, LV_HOR_RES_MAX * 10);

    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.draw_buf = &draw_buf;
    disp_drv.flush_cb = monitor_flush;
    disp_drv.hor_res = 480;
    disp_drv.ver_res = 320;
    lv_disp_drv_register(&disp_drv);

    /* Mouse setup */
    mouse_init();
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = mouse_read;
    lv_indev_drv_register(&indev_drv);

    /* Initialize GUI from GUI Guider */
    setup_ui(&guider_ui);

    while (1) {
        lv_task_handler();
        usleep(5 * 1000);
    }

    return 0;
}
