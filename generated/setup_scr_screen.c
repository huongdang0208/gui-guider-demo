/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



int demo_gui_digital_clock_1_min_value = 25;
int demo_gui_digital_clock_1_hour_value = 11;
int demo_gui_digital_clock_1_sec_value = 50;
char demo_gui_digital_clock_1_meridiem[] = "AM";
int demo_gui_digital_clock_2_min_value = 25;
int demo_gui_digital_clock_2_hour_value = 11;
int demo_gui_digital_clock_2_sec_value = 50;
char demo_gui_digital_clock_2_meridiem[] = "AM";
void setup_scr_demo_gui(lv_ui *ui)
{
	//Write codes demo_gui
	ui->demo_gui = lv_obj_create(NULL);
	lv_obj_set_size(ui->demo_gui, 480, 272);
	lv_obj_set_scrollbar_mode(ui->demo_gui, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_tileview_1
	ui->demo_gui_tileview_1 = lv_tileview_create(ui->demo_gui);
	ui->demo_gui_tileview_1_setting = lv_tileview_add_tile(ui->demo_gui_tileview_1, 0, 0, LV_DIR_BOTTOM);
	ui->demo_gui_tileview_1_main = lv_tileview_add_tile(ui->demo_gui_tileview_1, 0, 1, LV_DIR_TOP);
	lv_obj_set_pos(ui->demo_gui_tileview_1, 0, 0);
	lv_obj_set_size(ui->demo_gui_tileview_1, 483, 272);
	lv_obj_set_scrollbar_mode(ui->demo_gui_tileview_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_tileview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_tileview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_tileview_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_tileview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_tileview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_tileview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_tileview_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_tileview_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_tileview_1, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_tileview_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_tileview_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	//Write codes demo_gui_cont_6
	ui->demo_gui_cont_6 = lv_obj_create(ui->demo_gui_tileview_1_setting);
	lv_obj_set_pos(ui->demo_gui_cont_6, 0, 0);
	lv_obj_set_size(ui->demo_gui_cont_6, 484, 272);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_6, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_6, LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_6, 244, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_7
	ui->demo_gui_cont_7 = lv_obj_create(ui->demo_gui_cont_6);
	lv_obj_set_pos(ui->demo_gui_cont_7, 0, 0);
	lv_obj_set_size(ui->demo_gui_cont_7, 121, 273);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_7, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_7, lv_color_hex(0xa5aaae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_7, LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_8
	ui->demo_gui_cont_8 = lv_obj_create(ui->demo_gui_cont_7);
	lv_obj_set_pos(ui->demo_gui_cont_8, 7, 65);
	lv_obj_set_size(ui->demo_gui_cont_8, 106, 35);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_8, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_8, lv_color_hex(0x292323), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_8
	ui->demo_gui_label_8 = lv_label_create(ui->demo_gui_cont_8);
	lv_label_set_text(ui->demo_gui_label_8, "Wifi\n");
	lv_label_set_long_mode(ui->demo_gui_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_8, 11, 7);
	lv_obj_set_size(ui->demo_gui_label_8, 65, 21);

	//Write style for demo_gui_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_8, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_8, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_6
	ui->demo_gui_imgbtn_6 = lv_imgbtn_create(ui->demo_gui_cont_8);
	lv_obj_add_flag(ui->demo_gui_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_arrow_alpha_21x17, NULL);
	ui->demo_gui_imgbtn_6_label = lv_label_create(ui->demo_gui_imgbtn_6);
	lv_label_set_text(ui->demo_gui_imgbtn_6_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_6_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_6_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_6, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_6, 78, 7);
	lv_obj_set_size(ui->demo_gui_imgbtn_6, 21, 17);

	//Write style for demo_gui_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_6, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_6, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_label_7
	ui->demo_gui_label_7 = lv_label_create(ui->demo_gui_cont_7);
	lv_label_set_text(ui->demo_gui_label_7, "Settings");
	lv_label_set_long_mode(ui->demo_gui_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_7, 9, 12);
	lv_obj_set_size(ui->demo_gui_label_7, 102, 32);

	//Write style for demo_gui_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_7, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_label_7, lv_color_hex(0xa1a3a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_label_7, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_7, lv_color_hex(0x1b77bb), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_7, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_7, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_9
	ui->demo_gui_cont_9 = lv_obj_create(ui->demo_gui_cont_7);
	lv_obj_set_pos(ui->demo_gui_cont_9, 6, 107);
	lv_obj_set_size(ui->demo_gui_cont_9, 106, 35);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_9, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_9, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_9, lv_color_hex(0x292323), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_9
	ui->demo_gui_label_9 = lv_label_create(ui->demo_gui_cont_9);
	lv_label_set_text(ui->demo_gui_label_9, "Bluetooth\n");
	lv_label_set_long_mode(ui->demo_gui_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_9, 11, 9);
	lv_obj_set_size(ui->demo_gui_label_9, 65, 21);

	//Write style for demo_gui_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_9, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_9, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_9, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_7
	ui->demo_gui_imgbtn_7 = lv_imgbtn_create(ui->demo_gui_cont_9);
	lv_obj_add_flag(ui->demo_gui_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_arrow_alpha_20x17, NULL);
	ui->demo_gui_imgbtn_7_label = lv_label_create(ui->demo_gui_imgbtn_7);
	lv_label_set_text(ui->demo_gui_imgbtn_7_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_7_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_7_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_7, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_7, 79, 8);
	lv_obj_set_size(ui->demo_gui_imgbtn_7, 20, 17);

	//Write style for demo_gui_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_7, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_7, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_10
	ui->demo_gui_cont_10 = lv_obj_create(ui->demo_gui_cont_7);
	lv_obj_set_pos(ui->demo_gui_cont_10, 7, 190);
	lv_obj_set_size(ui->demo_gui_cont_10, 106, 35);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_10, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_10, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_10, lv_color_hex(0x292323), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_10
	ui->demo_gui_label_10 = lv_label_create(ui->demo_gui_cont_10);
	lv_label_set_text(ui->demo_gui_label_10, "Notification\n\n");
	lv_label_set_long_mode(ui->demo_gui_label_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_10, 3, 9);
	lv_obj_set_size(ui->demo_gui_label_10, 74, 21);

	//Write style for demo_gui_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_10, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_10, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_8
	ui->demo_gui_imgbtn_8 = lv_imgbtn_create(ui->demo_gui_cont_10);
	lv_obj_add_flag(ui->demo_gui_imgbtn_8, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_8, LV_IMGBTN_STATE_RELEASED, NULL, &_arrow_alpha_19x17, NULL);
	ui->demo_gui_imgbtn_8_label = lv_label_create(ui->demo_gui_imgbtn_8);
	lv_label_set_text(ui->demo_gui_imgbtn_8_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_8_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_8_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_8, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_8, 80, 8);
	lv_obj_set_size(ui->demo_gui_imgbtn_8, 19, 17);

	//Write style for demo_gui_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_8, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_8, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_8, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_8, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_11
	ui->demo_gui_cont_11 = lv_obj_create(ui->demo_gui_cont_7);
	lv_obj_set_pos(ui->demo_gui_cont_11, 7, 149);
	lv_obj_set_size(ui->demo_gui_cont_11, 106, 35);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_11, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_11, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_11, lv_color_hex(0x292323), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_11
	ui->demo_gui_label_11 = lv_label_create(ui->demo_gui_cont_11);
	lv_label_set_text(ui->demo_gui_label_11, "Language\n");
	lv_label_set_long_mode(ui->demo_gui_label_11, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_11, 12, 9);
	lv_obj_set_size(ui->demo_gui_label_11, 65, 21);

	//Write style for demo_gui_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_11, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_11, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_9
	ui->demo_gui_imgbtn_9 = lv_imgbtn_create(ui->demo_gui_cont_11);
	lv_obj_add_flag(ui->demo_gui_imgbtn_9, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_9, LV_IMGBTN_STATE_RELEASED, NULL, &_arrow_alpha_19x17, NULL);
	ui->demo_gui_imgbtn_9_label = lv_label_create(ui->demo_gui_imgbtn_9);
	lv_label_set_text(ui->demo_gui_imgbtn_9_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_9_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_9_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_9, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_9, 81, 10);
	lv_obj_set_size(ui->demo_gui_imgbtn_9, 19, 17);

	//Write style for demo_gui_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_9, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_9, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_9, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_9, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_9, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_12
	ui->demo_gui_cont_12 = lv_obj_create(ui->demo_gui_cont_6);
	lv_obj_set_pos(ui->demo_gui_cont_12, 131, 4);
	lv_obj_set_size(ui->demo_gui_cont_12, 338, 204);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_12, LV_SCROLLBAR_MODE_OFF);
	lv_obj_add_flag(ui->demo_gui_cont_12, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_cont_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_13
	ui->demo_gui_cont_13 = lv_obj_create(ui->demo_gui_cont_12);
	lv_obj_set_pos(ui->demo_gui_cont_13, -3, 11);
	lv_obj_set_size(ui->demo_gui_cont_13, 300, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_13, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_12
	ui->demo_gui_label_12 = lv_label_create(ui->demo_gui_cont_13);
	lv_label_set_text(ui->demo_gui_label_12, "Wifi");
	lv_label_set_long_mode(ui->demo_gui_label_12, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_12, 7, 4);
	lv_obj_set_size(ui->demo_gui_label_12, 56, 22);

	//Write style for demo_gui_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_12, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_12, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_sw_1
	ui->demo_gui_sw_1 = lv_switch_create(ui->demo_gui_cont_13);
	lv_obj_set_pos(ui->demo_gui_sw_1, 80, 6);
	lv_obj_set_size(ui->demo_gui_sw_1, 37, 18);

	//Write style for demo_gui_sw_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_1, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_sw_1, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->demo_gui_sw_1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for demo_gui_sw_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_1, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_1, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_14
	ui->demo_gui_cont_14 = lv_obj_create(ui->demo_gui_cont_12);
	lv_obj_set_pos(ui->demo_gui_cont_14, -1, 61);
	lv_obj_set_size(ui->demo_gui_cont_14, 329, 122);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_14, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_15
	ui->demo_gui_cont_15 = lv_obj_create(ui->demo_gui_cont_14);
	lv_obj_set_pos(ui->demo_gui_cont_15, 0, -2);
	lv_obj_set_size(ui->demo_gui_cont_15, 322, 48);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_15, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_btn_1
	ui->demo_gui_btn_1 = lv_btn_create(ui->demo_gui_cont_15);
	ui->demo_gui_btn_1_label = lv_label_create(ui->demo_gui_btn_1);
	lv_label_set_text(ui->demo_gui_btn_1_label, "Connect");
	lv_label_set_long_mode(ui->demo_gui_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->demo_gui_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->demo_gui_btn_1, 242, 9);
	lv_obj_set_size(ui->demo_gui_btn_1, 72, 28);

	//Write style for demo_gui_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_btn_1, lv_color_hex(0x1b77bb), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_btn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_13
	ui->demo_gui_label_13 = lv_label_create(ui->demo_gui_cont_15);
	lv_label_set_text(ui->demo_gui_label_13, "Wifi AB");
	lv_label_set_long_mode(ui->demo_gui_label_13, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_13, 7, 16);
	lv_obj_set_size(ui->demo_gui_label_13, 69, 17);

	//Write style for demo_gui_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_13, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_13, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_16
	ui->demo_gui_cont_16 = lv_obj_create(ui->demo_gui_cont_6);
	lv_obj_set_pos(ui->demo_gui_cont_16, 135, 7);
	lv_obj_set_size(ui->demo_gui_cont_16, 338, 216);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_16, LV_SCROLLBAR_MODE_OFF);
	lv_obj_add_flag(ui->demo_gui_cont_16, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_cont_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_19
	ui->demo_gui_cont_19 = lv_obj_create(ui->demo_gui_cont_16);
	lv_obj_set_pos(ui->demo_gui_cont_19, -3, 9);
	lv_obj_set_size(ui->demo_gui_cont_19, 300, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_19, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_15
	ui->demo_gui_label_15 = lv_label_create(ui->demo_gui_cont_19);
	lv_label_set_text(ui->demo_gui_label_15, "Bluetooth");
	lv_label_set_long_mode(ui->demo_gui_label_15, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_15, 7, 4);
	lv_obj_set_size(ui->demo_gui_label_15, 91, 22);

	//Write style for demo_gui_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_15, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_15, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_15, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_15, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_sw_2
	ui->demo_gui_sw_2 = lv_switch_create(ui->demo_gui_cont_19);
	lv_obj_set_pos(ui->demo_gui_sw_2, 126, 8);
	lv_obj_set_size(ui->demo_gui_sw_2, 37, 18);

	//Write style for demo_gui_sw_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_2, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_sw_2, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_2, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_2, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->demo_gui_sw_2, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for demo_gui_sw_2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_2, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_2, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_2, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_17
	ui->demo_gui_cont_17 = lv_obj_create(ui->demo_gui_cont_16);
	lv_obj_set_pos(ui->demo_gui_cont_17, -1, 62);
	lv_obj_set_size(ui->demo_gui_cont_17, 329, 143);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_17, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_18
	ui->demo_gui_cont_18 = lv_obj_create(ui->demo_gui_cont_17);
	lv_obj_set_pos(ui->demo_gui_cont_18, 0, -2);
	lv_obj_set_size(ui->demo_gui_cont_18, 322, 48);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_18, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_btn_2
	ui->demo_gui_btn_2 = lv_btn_create(ui->demo_gui_cont_18);
	ui->demo_gui_btn_2_label = lv_label_create(ui->demo_gui_btn_2);
	lv_label_set_text(ui->demo_gui_btn_2_label, "Connect");
	lv_label_set_long_mode(ui->demo_gui_btn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_btn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->demo_gui_btn_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->demo_gui_btn_2, 242, 9);
	lv_obj_set_size(ui->demo_gui_btn_2, 72, 28);

	//Write style for demo_gui_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_btn_2, lv_color_hex(0x1b77bb), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_btn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_14
	ui->demo_gui_label_14 = lv_label_create(ui->demo_gui_cont_18);
	lv_label_set_text(ui->demo_gui_label_14, "Bluetooth 1");
	lv_label_set_long_mode(ui->demo_gui_label_14, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_14, 1, 14);
	lv_obj_set_size(ui->demo_gui_label_14, 105, 17);

	//Write style for demo_gui_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_14, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_14, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_20
	ui->demo_gui_cont_20 = lv_obj_create(ui->demo_gui_cont_6);
	lv_obj_set_pos(ui->demo_gui_cont_20, 135, 7);
	lv_obj_set_size(ui->demo_gui_cont_20, 338, 216);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_20, LV_SCROLLBAR_MODE_OFF);
	lv_obj_add_flag(ui->demo_gui_cont_20, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_cont_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_23
	ui->demo_gui_cont_23 = lv_obj_create(ui->demo_gui_cont_20);
	lv_obj_set_pos(ui->demo_gui_cont_23, -3, 9);
	lv_obj_set_size(ui->demo_gui_cont_23, 300, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_23, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_17
	ui->demo_gui_label_17 = lv_label_create(ui->demo_gui_cont_23);
	lv_label_set_text(ui->demo_gui_label_17, "Language");
	lv_label_set_long_mode(ui->demo_gui_label_17, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_17, 7, 4);
	lv_obj_set_size(ui->demo_gui_label_17, 91, 22);

	//Write style for demo_gui_label_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_17, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_17, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_17, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_17, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_ddlist_1
	ui->demo_gui_ddlist_1 = lv_dropdown_create(ui->demo_gui_cont_20);
	lv_dropdown_set_options(ui->demo_gui_ddlist_1, "Vietnamese\nEnglish");
	lv_obj_set_pos(ui->demo_gui_ddlist_1, 5, 63);
	lv_obj_set_size(ui->demo_gui_ddlist_1, 162, 30);

	//Write style for demo_gui_ddlist_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_ddlist_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_ddlist_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_ddlist_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_ddlist_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_ddlist_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_ddlist_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_ddlist_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_ddlist_1, 126, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_ddlist_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_ddlist_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_ddlist_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_ddlist_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->demo_gui_ddlist_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_ddlist_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->demo_gui_ddlist_1, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->demo_gui_ddlist_1, lv_color_hex(0x654f4f), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->demo_gui_ddlist_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->demo_gui_ddlist_1, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->demo_gui_ddlist_1, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->demo_gui_ddlist_1, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->demo_gui_ddlist_1, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->demo_gui_ddlist_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_ddlist_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_ddlist_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_ddlist_1, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->demo_gui_ddlist_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->demo_gui_ddlist_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->demo_gui_ddlist_1, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->demo_gui_ddlist_1, lv_color_hex(0x654f4f), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->demo_gui_ddlist_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->demo_gui_ddlist_1, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->demo_gui_ddlist_1, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->demo_gui_ddlist_1, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->demo_gui_ddlist_1, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->demo_gui_ddlist_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_ddlist_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_ddlist_1, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style for demo_gui_ddlist_1, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
	lv_obj_set_style_text_color(ui->demo_gui_ddlist_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->demo_gui_ddlist_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_width(ui->demo_gui_ddlist_1, 1, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_color(ui->demo_gui_ddlist_1, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_side(ui->demo_gui_ddlist_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_top(ui->demo_gui_ddlist_1, 8, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_left(ui->demo_gui_ddlist_1, 6, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_right(ui->demo_gui_ddlist_1, 6, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_radius(ui->demo_gui_ddlist_1, 3, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_opa(ui->demo_gui_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->demo_gui_ddlist_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_ddlist_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_shadow_width(ui->demo_gui_ddlist_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);

	//Write style state: LV_STATE_CHECKED for &style_demo_gui_ddlist_1_extra_list_selected_checked
	static lv_style_t style_demo_gui_ddlist_1_extra_list_selected_checked;
	ui_init_style(&style_demo_gui_ddlist_1_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_demo_gui_ddlist_1_extra_list_selected_checked, 2);
	lv_style_set_border_opa(&style_demo_gui_ddlist_1_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_demo_gui_ddlist_1_extra_list_selected_checked, lv_color_hex(0x654f4f));
	lv_style_set_border_side(&style_demo_gui_ddlist_1_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_demo_gui_ddlist_1_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_demo_gui_ddlist_1_extra_list_selected_checked, 110);
	lv_style_set_bg_color(&style_demo_gui_ddlist_1_extra_list_selected_checked, lv_color_hex(0x000000));
	lv_style_set_bg_grad_dir(&style_demo_gui_ddlist_1_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->demo_gui_ddlist_1), &style_demo_gui_ddlist_1_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_demo_gui_ddlist_1_extra_list_main_default
	static lv_style_t style_demo_gui_ddlist_1_extra_list_main_default;
	ui_init_style(&style_demo_gui_ddlist_1_extra_list_main_default);
	
	lv_style_set_max_height(&style_demo_gui_ddlist_1_extra_list_main_default, 90);
	lv_style_set_text_color(&style_demo_gui_ddlist_1_extra_list_main_default, lv_color_hex(0xffffff));
	lv_style_set_text_font(&style_demo_gui_ddlist_1_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_demo_gui_ddlist_1_extra_list_main_default, 255);
	lv_style_set_border_width(&style_demo_gui_ddlist_1_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_demo_gui_ddlist_1_extra_list_main_default, 255);
	lv_style_set_border_color(&style_demo_gui_ddlist_1_extra_list_main_default, lv_color_hex(0x654f4f));
	lv_style_set_border_side(&style_demo_gui_ddlist_1_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_demo_gui_ddlist_1_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_demo_gui_ddlist_1_extra_list_main_default, 138);
	lv_style_set_bg_color(&style_demo_gui_ddlist_1_extra_list_main_default, lv_color_hex(0x000000));
	lv_style_set_bg_grad_dir(&style_demo_gui_ddlist_1_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->demo_gui_ddlist_1), &style_demo_gui_ddlist_1_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_demo_gui_ddlist_1_extra_list_scrollbar_default
	static lv_style_t style_demo_gui_ddlist_1_extra_list_scrollbar_default;
	ui_init_style(&style_demo_gui_ddlist_1_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_demo_gui_ddlist_1_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_demo_gui_ddlist_1_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_demo_gui_ddlist_1_extra_list_scrollbar_default, lv_color_hex(0x000000));
	lv_style_set_bg_grad_dir(&style_demo_gui_ddlist_1_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->demo_gui_ddlist_1), &style_demo_gui_ddlist_1_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_24
	ui->demo_gui_cont_24 = lv_obj_create(ui->demo_gui_cont_6);
	lv_obj_set_pos(ui->demo_gui_cont_24, 135, 7);
	lv_obj_set_size(ui->demo_gui_cont_24, 338, 230);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_24, LV_SCROLLBAR_MODE_OFF);
	lv_obj_add_flag(ui->demo_gui_cont_24, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_cont_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_27
	ui->demo_gui_cont_27 = lv_obj_create(ui->demo_gui_cont_24);
	lv_obj_set_pos(ui->demo_gui_cont_27, -3, 9);
	lv_obj_set_size(ui->demo_gui_cont_27, 300, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_27, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_19
	ui->demo_gui_label_19 = lv_label_create(ui->demo_gui_cont_27);
	lv_label_set_text(ui->demo_gui_label_19, "Notification");
	lv_label_set_long_mode(ui->demo_gui_label_19, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_19, 7, 4);
	lv_obj_set_size(ui->demo_gui_label_19, 117, 22);

	//Write style for demo_gui_label_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_19, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_19, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_19, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_19, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_19, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_list_1
	ui->demo_gui_list_1 = lv_list_create(ui->demo_gui_cont_24);
	ui->demo_gui_list_1_item0 = lv_list_add_btn(ui->demo_gui_list_1, LV_SYMBOL_BATTERY_1, "Battery is running low");
	ui->demo_gui_list_1_item1 = lv_list_add_btn(ui->demo_gui_list_1, LV_SYMBOL_REFRESH, "New software is available");
	ui->demo_gui_list_1_item2 = lv_list_add_btn(ui->demo_gui_list_1, LV_SYMBOL_WARNING, "Lights ");
	lv_obj_set_pos(ui->demo_gui_list_1, 0, 57);
	lv_obj_set_size(ui->demo_gui_list_1, 334, 153);
	lv_obj_set_scrollbar_mode(ui->demo_gui_list_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for &style_demo_gui_list_1_main_main_default
	static lv_style_t style_demo_gui_list_1_main_main_default;
	ui_init_style(&style_demo_gui_list_1_main_main_default);
	
	lv_style_set_pad_top(&style_demo_gui_list_1_main_main_default, 5);
	lv_style_set_pad_left(&style_demo_gui_list_1_main_main_default, 0);
	lv_style_set_pad_right(&style_demo_gui_list_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_demo_gui_list_1_main_main_default, 0);
	lv_style_set_bg_opa(&style_demo_gui_list_1_main_main_default, 0);
	lv_style_set_border_width(&style_demo_gui_list_1_main_main_default, 0);
	lv_style_set_radius(&style_demo_gui_list_1_main_main_default, 7);
	lv_style_set_shadow_width(&style_demo_gui_list_1_main_main_default, 0);
	lv_obj_add_style(ui->demo_gui_list_1, &style_demo_gui_list_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_demo_gui_list_1_main_scrollbar_default
	static lv_style_t style_demo_gui_list_1_main_scrollbar_default;
	ui_init_style(&style_demo_gui_list_1_main_scrollbar_default);
	
	lv_style_set_radius(&style_demo_gui_list_1_main_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_demo_gui_list_1_main_scrollbar_default, 255);
	lv_style_set_bg_color(&style_demo_gui_list_1_main_scrollbar_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_demo_gui_list_1_main_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(ui->demo_gui_list_1, &style_demo_gui_list_1_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_demo_gui_list_1_extra_btns_main_default
	static lv_style_t style_demo_gui_list_1_extra_btns_main_default;
	ui_init_style(&style_demo_gui_list_1_extra_btns_main_default);
	
	lv_style_set_pad_top(&style_demo_gui_list_1_extra_btns_main_default, 5);
	lv_style_set_pad_left(&style_demo_gui_list_1_extra_btns_main_default, 10);
	lv_style_set_pad_right(&style_demo_gui_list_1_extra_btns_main_default, 0);
	lv_style_set_pad_bottom(&style_demo_gui_list_1_extra_btns_main_default, 10);
	lv_style_set_border_width(&style_demo_gui_list_1_extra_btns_main_default, 1);
	lv_style_set_border_opa(&style_demo_gui_list_1_extra_btns_main_default, 255);
	lv_style_set_border_color(&style_demo_gui_list_1_extra_btns_main_default, lv_color_hex(0x6f6969));
	lv_style_set_border_side(&style_demo_gui_list_1_extra_btns_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_text_color(&style_demo_gui_list_1_extra_btns_main_default, lv_color_hex(0xfef6ea));
	lv_style_set_text_font(&style_demo_gui_list_1_extra_btns_main_default, &lv_font_FontAwesome5_18);
	lv_style_set_text_opa(&style_demo_gui_list_1_extra_btns_main_default, 255);
	lv_style_set_radius(&style_demo_gui_list_1_extra_btns_main_default, 0);
	lv_style_set_bg_opa(&style_demo_gui_list_1_extra_btns_main_default, 0);
	lv_obj_add_style(ui->demo_gui_list_1_item2, &style_demo_gui_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->demo_gui_list_1_item1, &style_demo_gui_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->demo_gui_list_1_item0, &style_demo_gui_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_demo_gui_list_1_extra_texts_main_default
	static lv_style_t style_demo_gui_list_1_extra_texts_main_default;
	ui_init_style(&style_demo_gui_list_1_extra_texts_main_default);
	
	lv_style_set_pad_top(&style_demo_gui_list_1_extra_texts_main_default, 6);
	lv_style_set_pad_left(&style_demo_gui_list_1_extra_texts_main_default, 5);
	lv_style_set_pad_right(&style_demo_gui_list_1_extra_texts_main_default, 0);
	lv_style_set_pad_bottom(&style_demo_gui_list_1_extra_texts_main_default, 0);
	lv_style_set_border_width(&style_demo_gui_list_1_extra_texts_main_default, 0);
	lv_style_set_text_color(&style_demo_gui_list_1_extra_texts_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_demo_gui_list_1_extra_texts_main_default, &lv_font_montserratMedium_18);
	lv_style_set_text_opa(&style_demo_gui_list_1_extra_texts_main_default, 255);
	lv_style_set_radius(&style_demo_gui_list_1_extra_texts_main_default, 3);
	lv_style_set_bg_opa(&style_demo_gui_list_1_extra_texts_main_default, 0);



	//Write codes demo_gui_tileview_2
	ui->demo_gui_tileview_2 = lv_tileview_create(ui->demo_gui_tileview_1_main);
	ui->demo_gui_tileview_2_home_page = lv_tileview_add_tile(ui->demo_gui_tileview_2, 0, 0, LV_DIR_RIGHT);
	ui->demo_gui_tileview_2_side_page = lv_tileview_add_tile(ui->demo_gui_tileview_2, 1, 0, LV_DIR_LEFT);
	lv_obj_set_pos(ui->demo_gui_tileview_2, 0, 0);
	lv_obj_set_size(ui->demo_gui_tileview_2, 482, 272);
	lv_obj_set_scrollbar_mode(ui->demo_gui_tileview_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_tileview_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_tileview_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_tileview_2, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_tileview_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_tileview_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_tileview_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_tileview_2, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_tileview_2, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_tileview_2, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_tileview_2, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_tileview_2, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	//Write codes demo_gui_img_1
	ui->demo_gui_img_1 = lv_img_create(ui->demo_gui_tileview_2_home_page);
	lv_obj_add_flag(ui->demo_gui_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->demo_gui_img_1, &_background_alpha_482x272);
	lv_img_set_pivot(ui->demo_gui_img_1, 50,50);
	lv_img_set_angle(ui->demo_gui_img_1, 0);
	lv_obj_set_pos(ui->demo_gui_img_1, 0, 0);
	lv_obj_set_size(ui->demo_gui_img_1, 482, 272);

	//Write style for demo_gui_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->demo_gui_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_1
	ui->demo_gui_cont_1 = lv_obj_create(ui->demo_gui_tileview_2_home_page);
	lv_obj_set_pos(ui->demo_gui_cont_1, 256, 4);
	lv_obj_set_size(ui->demo_gui_cont_1, 224, 44);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_2
	ui->demo_gui_imgbtn_2 = lv_imgbtn_create(ui->demo_gui_cont_1);
	lv_obj_add_flag(ui->demo_gui_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_itemperature_alpha_27x21, NULL);
	ui->demo_gui_imgbtn_2_label = lv_label_create(ui->demo_gui_imgbtn_2);
	lv_label_set_text(ui->demo_gui_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_2, 59, 10);
	lv_obj_set_size(ui->demo_gui_imgbtn_2, 27, 21);

	//Write style for demo_gui_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_2, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_2, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_label_2
	ui->demo_gui_label_2 = lv_label_create(ui->demo_gui_cont_1);
	lv_label_set_text(ui->demo_gui_label_2, "25°C");
	lv_label_set_long_mode(ui->demo_gui_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_2, 86, 11);
	lv_obj_set_size(ui->demo_gui_label_2, 46, 21);

	//Write style for demo_gui_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_1
	ui->demo_gui_imgbtn_1 = lv_imgbtn_create(ui->demo_gui_cont_1);
	lv_obj_add_flag(ui->demo_gui_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_ihumidity_alpha_16x15, NULL);
	ui->demo_gui_imgbtn_1_label = lv_label_create(ui->demo_gui_imgbtn_1);
	lv_label_set_text(ui->demo_gui_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_1, 154, 12);
	lv_obj_set_size(ui->demo_gui_imgbtn_1, 16, 15);

	//Write style for demo_gui_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_1, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_label_1
	ui->demo_gui_label_1 = lv_label_create(ui->demo_gui_cont_1);
	lv_label_set_text(ui->demo_gui_label_1, "70%");
	lv_label_set_long_mode(ui->demo_gui_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_1, 178, 12);
	lv_obj_set_size(ui->demo_gui_label_1, 38, 21);

	//Write style for demo_gui_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_2
	ui->demo_gui_cont_2 = lv_obj_create(ui->demo_gui_tileview_2_home_page);
	lv_obj_set_pos(ui->demo_gui_cont_2, 301, 171);
	lv_obj_set_size(ui->demo_gui_cont_2, 178, 97);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_4
	ui->demo_gui_label_4 = lv_label_create(ui->demo_gui_cont_2);
	lv_label_set_text(ui->demo_gui_label_4, "11 May, 2024");
	lv_label_set_long_mode(ui->demo_gui_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_4, 44, 27);
	lv_obj_set_size(ui->demo_gui_label_4, 128, 23);

	//Write style for demo_gui_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_3
	ui->demo_gui_label_3 = lv_label_create(ui->demo_gui_cont_2);
	lv_label_set_text(ui->demo_gui_label_3, "9:00 AM");
	lv_label_set_long_mode(ui->demo_gui_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_3, 61, 54);
	lv_obj_set_size(ui->demo_gui_label_3, 114, 32);

	//Write style for demo_gui_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_3, &lv_font_Antonio_Regular_27, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes demo_gui_cont_28
	ui->demo_gui_cont_28 = lv_obj_create(ui->demo_gui_tileview_2_side_page);
	lv_obj_set_pos(ui->demo_gui_cont_28, 0, 0);
	lv_obj_set_size(ui->demo_gui_cont_28, 484, 272);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_28, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_28, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_28, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_28, LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_28, 244, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_28, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_28, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_41
	ui->demo_gui_cont_41 = lv_obj_create(ui->demo_gui_cont_28);
	lv_obj_set_pos(ui->demo_gui_cont_41, 0, 0);
	lv_obj_set_size(ui->demo_gui_cont_41, 125, 273);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_41, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_41, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_41, lv_color_hex(0xa5aaae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_41, LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_29
	ui->demo_gui_label_29 = lv_label_create(ui->demo_gui_cont_41);
	lv_label_set_text(ui->demo_gui_label_29, "Home ");
	lv_label_set_long_mode(ui->demo_gui_label_29, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_29, 8, 10);
	lv_obj_set_size(ui->demo_gui_label_29, 106, 45);

	//Write style for demo_gui_label_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_29, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_label_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_label_29, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_label_29, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_29, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_29, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_29, &lv_font_Acme_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_29, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_29, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_label_29, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_label_29, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_29, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_29, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_42
	ui->demo_gui_cont_42 = lv_obj_create(ui->demo_gui_cont_41);
	lv_obj_set_pos(ui->demo_gui_cont_42, 3, 59);
	lv_obj_set_size(ui->demo_gui_cont_42, 121, 49);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_42, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_42, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_42, lv_color_hex(0x4e9ee1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_42, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_10
	ui->demo_gui_imgbtn_10 = lv_imgbtn_create(ui->demo_gui_cont_42);
	lv_obj_add_flag(ui->demo_gui_imgbtn_10, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_10, LV_IMGBTN_STATE_RELEASED, NULL, &_led_alpha_25x24, NULL);
	ui->demo_gui_imgbtn_10_label = lv_label_create(ui->demo_gui_imgbtn_10);
	lv_label_set_text(ui->demo_gui_imgbtn_10_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_10_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_10_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_10, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_10, 8, 10);
	lv_obj_set_size(ui->demo_gui_imgbtn_10, 25, 24);

	//Write style for demo_gui_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_10, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_10, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_10, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_10, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_btn_5
	ui->demo_gui_btn_5 = lv_btn_create(ui->demo_gui_cont_42);
	ui->demo_gui_btn_5_label = lv_label_create(ui->demo_gui_btn_5);
	lv_label_set_text(ui->demo_gui_btn_5_label, "Lights");
	lv_label_set_long_mode(ui->demo_gui_btn_5_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_btn_5_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_btn_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->demo_gui_btn_5_label, LV_PCT(100));
	lv_obj_set_pos(ui->demo_gui_btn_5, 35, 8);
	lv_obj_set_size(ui->demo_gui_btn_5, 51, 29);

	//Write style for demo_gui_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_btn_5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_43
	ui->demo_gui_cont_43 = lv_obj_create(ui->demo_gui_cont_41);
	lv_obj_set_pos(ui->demo_gui_cont_43, 4, 115);
	lv_obj_set_size(ui->demo_gui_cont_43, 119, 49);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_43, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_43, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_43, lv_color_hex(0x4e9ee1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_43, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_11
	ui->demo_gui_imgbtn_11 = lv_imgbtn_create(ui->demo_gui_cont_43);
	lv_obj_add_flag(ui->demo_gui_imgbtn_11, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_11, LV_IMGBTN_STATE_RELEASED, NULL, &_switch_alpha_25x24, NULL);
	ui->demo_gui_imgbtn_11_label = lv_label_create(ui->demo_gui_imgbtn_11);
	lv_label_set_text(ui->demo_gui_imgbtn_11_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_11_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_11_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_11, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_11, 6, 11);
	lv_obj_set_size(ui->demo_gui_imgbtn_11, 25, 24);

	//Write style for demo_gui_imgbtn_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_11, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_11, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_11, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_11, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_11, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_11, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_11, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_11, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_11, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_11, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_btn_6
	ui->demo_gui_btn_6 = lv_btn_create(ui->demo_gui_cont_43);
	ui->demo_gui_btn_6_label = lv_label_create(ui->demo_gui_btn_6);
	lv_label_set_text(ui->demo_gui_btn_6_label, "Switchs");
	lv_label_set_long_mode(ui->demo_gui_btn_6_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_btn_6_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_btn_6, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->demo_gui_btn_6_label, LV_PCT(100));
	lv_obj_set_pos(ui->demo_gui_btn_6, 35, 8);
	lv_obj_set_size(ui->demo_gui_btn_6, 59, 29);

	//Write style for demo_gui_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_btn_6, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_btn_6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_44
	ui->demo_gui_cont_44 = lv_obj_create(ui->demo_gui_cont_41);
	lv_obj_set_pos(ui->demo_gui_cont_44, 4, 171);
	lv_obj_set_size(ui->demo_gui_cont_44, 119, 49);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_44, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_44, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_44, lv_color_hex(0x4e9ee1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_44, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_12
	ui->demo_gui_imgbtn_12 = lv_imgbtn_create(ui->demo_gui_cont_44);
	lv_obj_add_flag(ui->demo_gui_imgbtn_12, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_12, LV_IMGBTN_STATE_RELEASED, NULL, &_timer_alpha_25x24, NULL);
	ui->demo_gui_imgbtn_12_label = lv_label_create(ui->demo_gui_imgbtn_12);
	lv_label_set_text(ui->demo_gui_imgbtn_12_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_12_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_12_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_12, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_12, 3, 14);
	lv_obj_set_size(ui->demo_gui_imgbtn_12, 25, 24);

	//Write style for demo_gui_imgbtn_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_12, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_12, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_12, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_12, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_12, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_12, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_12, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_12, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_12, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_12, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_btn_7
	ui->demo_gui_btn_7 = lv_btn_create(ui->demo_gui_cont_44);
	ui->demo_gui_btn_7_label = lv_label_create(ui->demo_gui_btn_7);
	lv_label_set_text(ui->demo_gui_btn_7_label, "Set timer");
	lv_label_set_long_mode(ui->demo_gui_btn_7_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_btn_7_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_btn_7, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->demo_gui_btn_7_label, LV_PCT(100));
	lv_obj_set_pos(ui->demo_gui_btn_7, 31, 10);
	lv_obj_set_size(ui->demo_gui_btn_7, 74, 29);

	//Write style for demo_gui_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_btn_7, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_btn_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_btn_7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_33
	ui->demo_gui_cont_33 = lv_obj_create(ui->demo_gui_cont_28);
	lv_obj_set_pos(ui->demo_gui_cont_33, 136, 7);
	lv_obj_set_size(ui->demo_gui_cont_33, 338, 251);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_33, LV_SCROLLBAR_MODE_OFF);
	lv_obj_add_flag(ui->demo_gui_cont_33, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_cont_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_45
	ui->demo_gui_cont_45 = lv_obj_create(ui->demo_gui_cont_33);
	lv_obj_set_pos(ui->demo_gui_cont_45, 26, 21);
	lv_obj_set_size(ui->demo_gui_cont_45, 287, 43);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_45, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_45, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_45, 123, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_45, lv_color_hex(0x7f7c7c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_45, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_13
	ui->demo_gui_imgbtn_13 = lv_imgbtn_create(ui->demo_gui_cont_45);
	lv_obj_add_flag(ui->demo_gui_imgbtn_13, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_13, LV_IMGBTN_STATE_RELEASED, NULL, &_offlight_alpha_39x37, NULL);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_13, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_onlight_alpha_39x37, NULL);
	ui->demo_gui_imgbtn_13_label = lv_label_create(ui->demo_gui_imgbtn_13);
	lv_label_set_text(ui->demo_gui_imgbtn_13_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_13_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_13_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_13, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_13, 6, 2);
	lv_obj_set_size(ui->demo_gui_imgbtn_13, 39, 37);

	//Write style for demo_gui_imgbtn_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_13, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_13, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_13, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_13, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_13, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_13, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_13, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_13, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_13, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_13, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_13, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_13, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_13, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_13, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_13, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_13, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_label_30
	ui->demo_gui_label_30 = lv_label_create(ui->demo_gui_cont_45);
	lv_label_set_text(ui->demo_gui_label_30, "Light 1");
	lv_label_set_long_mode(ui->demo_gui_label_30, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_30, 58, 11);
	lv_obj_set_size(ui->demo_gui_label_30, 62, 21);

	//Write style for demo_gui_label_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_30, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_30, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_30, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_30, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_31
	ui->demo_gui_label_31 = lv_label_create(ui->demo_gui_cont_45);
	lv_label_set_text(ui->demo_gui_label_31, "Off");
	lv_label_set_long_mode(ui->demo_gui_label_31, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_31, 227, 13);
	lv_obj_set_size(ui->demo_gui_label_31, 33, 21);

	//Write style for demo_gui_label_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_31, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_31, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_31, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_31, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_31, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_32
	ui->demo_gui_label_32 = lv_label_create(ui->demo_gui_cont_45);
	lv_label_set_text(ui->demo_gui_label_32, "On");
	lv_label_set_long_mode(ui->demo_gui_label_32, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_32, 227, 12);
	lv_obj_set_size(ui->demo_gui_label_32, 33, 21);
	lv_obj_add_flag(ui->demo_gui_label_32, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_label_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_32, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_32, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_32, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_32, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_32, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_46
	ui->demo_gui_cont_46 = lv_obj_create(ui->demo_gui_cont_33);
	lv_obj_set_pos(ui->demo_gui_cont_46, 26, 75);
	lv_obj_set_size(ui->demo_gui_cont_46, 287, 43);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_46, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_46, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_46, 123, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_46, lv_color_hex(0x7f7c7c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_46, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_14
	ui->demo_gui_imgbtn_14 = lv_imgbtn_create(ui->demo_gui_cont_46);
	lv_obj_add_flag(ui->demo_gui_imgbtn_14, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_14, LV_IMGBTN_STATE_RELEASED, NULL, &_offlight_alpha_39x37, NULL);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_14, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_onlight_alpha_39x37, NULL);
	ui->demo_gui_imgbtn_14_label = lv_label_create(ui->demo_gui_imgbtn_14);
	lv_label_set_text(ui->demo_gui_imgbtn_14_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_14_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_14_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_14, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_14, 6, 2);
	lv_obj_set_size(ui->demo_gui_imgbtn_14, 39, 37);

	//Write style for demo_gui_imgbtn_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_14, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_14, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_14, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_14, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_14, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_14, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_14, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_14, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_14, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_14, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_label_35
	ui->demo_gui_label_35 = lv_label_create(ui->demo_gui_cont_46);
	lv_label_set_text(ui->demo_gui_label_35, "Light 2");
	lv_label_set_long_mode(ui->demo_gui_label_35, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_35, 58, 11);
	lv_obj_set_size(ui->demo_gui_label_35, 60, 21);

	//Write style for demo_gui_label_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_35, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_35, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_35, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_35, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_35, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_34
	ui->demo_gui_label_34 = lv_label_create(ui->demo_gui_cont_46);
	lv_label_set_text(ui->demo_gui_label_34, "Off");
	lv_label_set_long_mode(ui->demo_gui_label_34, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_34, 227, 13);
	lv_obj_set_size(ui->demo_gui_label_34, 33, 21);

	//Write style for demo_gui_label_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_34, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_34, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_34, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_34, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_34, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_33
	ui->demo_gui_label_33 = lv_label_create(ui->demo_gui_cont_46);
	lv_label_set_text(ui->demo_gui_label_33, "On");
	lv_label_set_long_mode(ui->demo_gui_label_33, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_33, 227, 12);
	lv_obj_set_size(ui->demo_gui_label_33, 33, 21);
	lv_obj_add_flag(ui->demo_gui_label_33, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_label_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_33, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_33, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_33, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_33, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_33, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_47
	ui->demo_gui_cont_47 = lv_obj_create(ui->demo_gui_cont_33);
	lv_obj_set_pos(ui->demo_gui_cont_47, 26, 128);
	lv_obj_set_size(ui->demo_gui_cont_47, 287, 43);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_47, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_47, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_47, 123, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_47, lv_color_hex(0x7f7c7c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_47, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_15
	ui->demo_gui_imgbtn_15 = lv_imgbtn_create(ui->demo_gui_cont_47);
	lv_obj_add_flag(ui->demo_gui_imgbtn_15, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_15, LV_IMGBTN_STATE_RELEASED, NULL, &_offlight_alpha_39x37, NULL);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_15, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_onlight_alpha_39x37, NULL);
	ui->demo_gui_imgbtn_15_label = lv_label_create(ui->demo_gui_imgbtn_15);
	lv_label_set_text(ui->demo_gui_imgbtn_15_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_15_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_15_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_15, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_15, 6, 2);
	lv_obj_set_size(ui->demo_gui_imgbtn_15, 39, 37);

	//Write style for demo_gui_imgbtn_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_15, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_15, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_15, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_15, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_15, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_15, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_15, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_15, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_15, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_15, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_15, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_15, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_15, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_15, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_15, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_15, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_label_38
	ui->demo_gui_label_38 = lv_label_create(ui->demo_gui_cont_47);
	lv_label_set_text(ui->demo_gui_label_38, "Light 3");
	lv_label_set_long_mode(ui->demo_gui_label_38, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_38, 58, 11);
	lv_obj_set_size(ui->demo_gui_label_38, 66, 21);

	//Write style for demo_gui_label_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_38, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_38, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_38, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_38, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_38, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_37
	ui->demo_gui_label_37 = lv_label_create(ui->demo_gui_cont_47);
	lv_label_set_text(ui->demo_gui_label_37, "Off");
	lv_label_set_long_mode(ui->demo_gui_label_37, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_37, 227, 13);
	lv_obj_set_size(ui->demo_gui_label_37, 33, 21);

	//Write style for demo_gui_label_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_37, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_37, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_37, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_37, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_37, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_36
	ui->demo_gui_label_36 = lv_label_create(ui->demo_gui_cont_47);
	lv_label_set_text(ui->demo_gui_label_36, "On");
	lv_label_set_long_mode(ui->demo_gui_label_36, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_36, 227, 12);
	lv_obj_set_size(ui->demo_gui_label_36, 33, 21);
	lv_obj_add_flag(ui->demo_gui_label_36, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_label_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_36, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_36, &lv_font_montserratMedium_10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_36, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_36, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_36, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_16
	ui->demo_gui_imgbtn_16 = lv_imgbtn_create(ui->demo_gui_cont_33);
	lv_obj_add_flag(ui->demo_gui_imgbtn_16, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_16, LV_IMGBTN_STATE_RELEASED, NULL, &_add_alpha_33x29, NULL);
	ui->demo_gui_imgbtn_16_label = lv_label_create(ui->demo_gui_imgbtn_16);
	lv_label_set_text(ui->demo_gui_imgbtn_16_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_16_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_16_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_16, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_16, 149, 184);
	lv_obj_set_size(ui->demo_gui_imgbtn_16, 33, 29);

	//Write style for demo_gui_imgbtn_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_16, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_16, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_16, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_16, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_16, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_16, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_16, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_16, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_16, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_16, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_16, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_16, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_16, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_16, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_16, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_16, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_48
	ui->demo_gui_cont_48 = lv_obj_create(ui->demo_gui_cont_28);
	lv_obj_set_pos(ui->demo_gui_cont_48, 136, 7);
	lv_obj_set_size(ui->demo_gui_cont_48, 338, 251);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_48, LV_SCROLLBAR_MODE_OFF);
	lv_obj_add_flag(ui->demo_gui_cont_48, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_cont_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_51
	ui->demo_gui_cont_51 = lv_obj_create(ui->demo_gui_cont_48);
	lv_obj_set_pos(ui->demo_gui_cont_51, 26, 21);
	lv_obj_set_size(ui->demo_gui_cont_51, 287, 43);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_51, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_51, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_51, 123, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_51, lv_color_hex(0x7f7c7c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_51, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_47
	ui->demo_gui_label_47 = lv_label_create(ui->demo_gui_cont_51);
	lv_label_set_text(ui->demo_gui_label_47, "Switch 1");
	lv_label_set_long_mode(ui->demo_gui_label_47, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_47, 70, 10);
	lv_obj_set_size(ui->demo_gui_label_47, 74, 21);

	//Write style for demo_gui_label_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_47, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_47, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_47, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_47, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_47, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_sw_3
	ui->demo_gui_sw_3 = lv_switch_create(ui->demo_gui_cont_51);
	lv_obj_set_pos(ui->demo_gui_sw_3, 15, 11);
	lv_obj_set_size(ui->demo_gui_sw_3, 40, 20);

	//Write style for demo_gui_sw_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_3, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_sw_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_sw_3, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_3, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_3, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->demo_gui_sw_3, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for demo_gui_sw_3, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_3, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_3, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_3, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_3, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_17
	ui->demo_gui_imgbtn_17 = lv_imgbtn_create(ui->demo_gui_cont_48);
	lv_obj_add_flag(ui->demo_gui_imgbtn_17, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_17, LV_IMGBTN_STATE_RELEASED, NULL, &_add_alpha_33x29, NULL);
	ui->demo_gui_imgbtn_17_label = lv_label_create(ui->demo_gui_imgbtn_17);
	lv_label_set_text(ui->demo_gui_imgbtn_17_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_17_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_17_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_17, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_17, 149, 184);
	lv_obj_set_size(ui->demo_gui_imgbtn_17, 33, 29);

	//Write style for demo_gui_imgbtn_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_17, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_17, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_17, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_17, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_17, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_17, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_17, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_17, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_17, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_17, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_17, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_17, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_17, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_17, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_17, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_17, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_52
	ui->demo_gui_cont_52 = lv_obj_create(ui->demo_gui_cont_48);
	lv_obj_set_pos(ui->demo_gui_cont_52, 26, 72);
	lv_obj_set_size(ui->demo_gui_cont_52, 287, 43);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_52, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_52, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_52, 123, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_52, lv_color_hex(0x7f7c7c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_52, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_48
	ui->demo_gui_label_48 = lv_label_create(ui->demo_gui_cont_52);
	lv_label_set_text(ui->demo_gui_label_48, "Switch 2");
	lv_label_set_long_mode(ui->demo_gui_label_48, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_48, 70, 10);
	lv_obj_set_size(ui->demo_gui_label_48, 74, 21);

	//Write style for demo_gui_label_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_48, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_48, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_48, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_48, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_48, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_sw_4
	ui->demo_gui_sw_4 = lv_switch_create(ui->demo_gui_cont_52);
	lv_obj_set_pos(ui->demo_gui_sw_4, 15, 11);
	lv_obj_set_size(ui->demo_gui_sw_4, 40, 20);

	//Write style for demo_gui_sw_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_4, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_sw_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_sw_4, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_4, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_4, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->demo_gui_sw_4, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for demo_gui_sw_4, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_4, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_4, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_4, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_4, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_4, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_53
	ui->demo_gui_cont_53 = lv_obj_create(ui->demo_gui_cont_48);
	lv_obj_set_pos(ui->demo_gui_cont_53, 26, 124);
	lv_obj_set_size(ui->demo_gui_cont_53, 287, 43);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_53, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_53, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_53, 123, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_53, lv_color_hex(0x7f7c7c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_53, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_49
	ui->demo_gui_label_49 = lv_label_create(ui->demo_gui_cont_53);
	lv_label_set_text(ui->demo_gui_label_49, "Switch 3");
	lv_label_set_long_mode(ui->demo_gui_label_49, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_49, 70, 10);
	lv_obj_set_size(ui->demo_gui_label_49, 74, 21);

	//Write style for demo_gui_label_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_49, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_49, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_49, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_49, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_49, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_sw_5
	ui->demo_gui_sw_5 = lv_switch_create(ui->demo_gui_cont_53);
	lv_obj_set_pos(ui->demo_gui_sw_5, 15, 11);
	lv_obj_set_size(ui->demo_gui_sw_5, 40, 20);

	//Write style for demo_gui_sw_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_5, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_5, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_sw_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_sw_5, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_5, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_5, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_5, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->demo_gui_sw_5, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for demo_gui_sw_5, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->demo_gui_sw_5, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_sw_5, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_sw_5, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_sw_5, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_sw_5, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_54
	ui->demo_gui_cont_54 = lv_obj_create(ui->demo_gui_cont_28);
	lv_obj_set_pos(ui->demo_gui_cont_54, 136, 7);
	lv_obj_set_size(ui->demo_gui_cont_54, 338, 251);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_54, LV_SCROLLBAR_MODE_ON);
	lv_obj_add_flag(ui->demo_gui_cont_54, LV_OBJ_FLAG_HIDDEN);

	//Write style for demo_gui_cont_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_57
	ui->demo_gui_cont_57 = lv_obj_create(ui->demo_gui_cont_54);
	lv_obj_set_pos(ui->demo_gui_cont_57, 14, 10);
	lv_obj_set_size(ui->demo_gui_cont_57, 308, 137);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_57, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_57, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_57, 123, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_57, lv_color_hex(0x7f7c7c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_57, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_52
	ui->demo_gui_label_52 = lv_label_create(ui->demo_gui_cont_57);
	lv_label_set_text(ui->demo_gui_label_52, "Time/Date:");
	lv_label_set_long_mode(ui->demo_gui_label_52, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_52, 2, 8);
	lv_obj_set_size(ui->demo_gui_label_52, 81, 22);

	//Write style for demo_gui_label_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_52, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_52, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_52, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_52, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_52, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_digital_clock_1
	static bool demo_gui_digital_clock_1_timer_enabled = false;
	ui->demo_gui_digital_clock_1 = lv_dclock_create(ui->demo_gui_cont_57, "11:25:50 AM");
	if (!demo_gui_digital_clock_1_timer_enabled) {
		lv_timer_create(demo_gui_digital_clock_1_timer, 1000, NULL);
		demo_gui_digital_clock_1_timer_enabled = true;
	}
	lv_obj_set_pos(ui->demo_gui_digital_clock_1, 94, 5);
	lv_obj_set_size(ui->demo_gui_digital_clock_1, 97, 30);

	//Write style for demo_gui_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->demo_gui_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_digital_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_digital_clock_1, &lv_font_Antonio_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_digital_clock_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_digital_clock_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_digital_clock_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_datetext_1
	ui->demo_gui_datetext_1 = lv_label_create(ui->demo_gui_cont_57);
	lv_label_set_text(ui->demo_gui_datetext_1, "2023/07/31");
	lv_obj_set_style_text_align(ui->demo_gui_datetext_1, LV_TEXT_ALIGN_CENTER, 0);
	lv_obj_add_flag(ui->demo_gui_datetext_1, LV_OBJ_FLAG_CLICKABLE);
	lv_obj_add_event_cb(ui->demo_gui_datetext_1, demo_gui_datetext_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_set_pos(ui->demo_gui_datetext_1, 193, 6);
	lv_obj_set_size(ui->demo_gui_datetext_1, 101, 25);

	//Write style for demo_gui_datetext_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_datetext_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_datetext_1, &lv_font_Antonio_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_datetext_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_datetext_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_58
	ui->demo_gui_cont_58 = lv_obj_create(ui->demo_gui_cont_57);
	lv_obj_set_pos(ui->demo_gui_cont_58, 7, 44);
	lv_obj_set_size(ui->demo_gui_cont_58, 136, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_58, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_58, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_58, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_58, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_58, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_53
	ui->demo_gui_label_53 = lv_label_create(ui->demo_gui_cont_58);
	lv_label_set_text(ui->demo_gui_label_53, "Light 1");
	lv_label_set_long_mode(ui->demo_gui_label_53, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_53, 32, 7);
	lv_obj_set_size(ui->demo_gui_label_53, 62, 18);

	//Write style for demo_gui_label_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_53, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_53, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_53, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_53, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_54
	ui->demo_gui_label_54 = lv_label_create(ui->demo_gui_cont_58);
	lv_label_set_text(ui->demo_gui_label_54, "On");
	lv_label_set_long_mode(ui->demo_gui_label_54, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_54, 101, 7);
	lv_obj_set_size(ui->demo_gui_label_54, 29, 18);

	//Write style for demo_gui_label_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_54, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_54, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_54, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_54, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_18
	ui->demo_gui_imgbtn_18 = lv_imgbtn_create(ui->demo_gui_cont_58);
	lv_obj_add_flag(ui->demo_gui_imgbtn_18, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_18, LV_IMGBTN_STATE_RELEASED, NULL, &_onlight_alpha_26x29, NULL);
	ui->demo_gui_imgbtn_18_label = lv_label_create(ui->demo_gui_imgbtn_18);
	lv_label_set_text(ui->demo_gui_imgbtn_18_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_18_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_18_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_18, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_18, 4, 0);
	lv_obj_set_size(ui->demo_gui_imgbtn_18, 26, 29);

	//Write style for demo_gui_imgbtn_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_18, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_18, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_18, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_18, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_18, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_18, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_18, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_18, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_18, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_18, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_18, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_18, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_18, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_18, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_18, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_18, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_18, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_59
	ui->demo_gui_cont_59 = lv_obj_create(ui->demo_gui_cont_57);
	lv_obj_set_pos(ui->demo_gui_cont_59, 163, 43);
	lv_obj_set_size(ui->demo_gui_cont_59, 136, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_59, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_59, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_59, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_59, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_59, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_56
	ui->demo_gui_label_56 = lv_label_create(ui->demo_gui_cont_59);
	lv_label_set_text(ui->demo_gui_label_56, "Light 2");
	lv_label_set_long_mode(ui->demo_gui_label_56, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_56, 32, 7);
	lv_obj_set_size(ui->demo_gui_label_56, 62, 18);

	//Write style for demo_gui_label_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_56, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_56, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_56, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_56, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_55
	ui->demo_gui_label_55 = lv_label_create(ui->demo_gui_cont_59);
	lv_label_set_text(ui->demo_gui_label_55, "Off");
	lv_label_set_long_mode(ui->demo_gui_label_55, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_55, 101, 7);
	lv_obj_set_size(ui->demo_gui_label_55, 29, 18);

	//Write style for demo_gui_label_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_55, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_55, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_55, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_55, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_19
	ui->demo_gui_imgbtn_19 = lv_imgbtn_create(ui->demo_gui_cont_59);
	lv_obj_add_flag(ui->demo_gui_imgbtn_19, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_19, LV_IMGBTN_STATE_RELEASED, NULL, &_offlight_alpha_28x29, NULL);
	ui->demo_gui_imgbtn_19_label = lv_label_create(ui->demo_gui_imgbtn_19);
	lv_label_set_text(ui->demo_gui_imgbtn_19_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_19_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_19_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_19, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_19, 4, 0);
	lv_obj_set_size(ui->demo_gui_imgbtn_19, 28, 29);

	//Write style for demo_gui_imgbtn_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_19, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_19, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_19, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_19, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_19, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_19, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_19, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_19, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_19, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_19, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_19, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_19, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_19, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_19, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_19, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_19, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_19, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_60
	ui->demo_gui_cont_60 = lv_obj_create(ui->demo_gui_cont_57);
	lv_obj_set_pos(ui->demo_gui_cont_60, 8, 88);
	lv_obj_set_size(ui->demo_gui_cont_60, 136, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_60, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_60, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_60, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_60, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_60, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_58
	ui->demo_gui_label_58 = lv_label_create(ui->demo_gui_cont_60);
	lv_label_set_text(ui->demo_gui_label_58, "Switch 1");
	lv_label_set_long_mode(ui->demo_gui_label_58, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_58, 32, 7);
	lv_obj_set_size(ui->demo_gui_label_58, 62, 18);

	//Write style for demo_gui_label_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_58, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_58, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_58, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_58, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_57
	ui->demo_gui_label_57 = lv_label_create(ui->demo_gui_cont_60);
	lv_label_set_text(ui->demo_gui_label_57, "Off");
	lv_label_set_long_mode(ui->demo_gui_label_57, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_57, 101, 7);
	lv_obj_set_size(ui->demo_gui_label_57, 29, 18);

	//Write style for demo_gui_label_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_57, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_57, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_57, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_57, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_20
	ui->demo_gui_imgbtn_20 = lv_imgbtn_create(ui->demo_gui_cont_60);
	lv_obj_add_flag(ui->demo_gui_imgbtn_20, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_20, LV_IMGBTN_STATE_RELEASED, NULL, &_iswitch_alpha_26x22, NULL);
	ui->demo_gui_imgbtn_20_label = lv_label_create(ui->demo_gui_imgbtn_20);
	lv_label_set_text(ui->demo_gui_imgbtn_20_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_20_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_20_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_20, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_20, 4, 2);
	lv_obj_set_size(ui->demo_gui_imgbtn_20, 26, 22);

	//Write style for demo_gui_imgbtn_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_20, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_20, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_20, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_20, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_20, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_20, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_20, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_20, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_20, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_20, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_20, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_20, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_20, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_20, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_20, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_20, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_20, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_61
	ui->demo_gui_cont_61 = lv_obj_create(ui->demo_gui_cont_54);
	lv_obj_set_pos(ui->demo_gui_cont_61, 13, 158);
	lv_obj_set_size(ui->demo_gui_cont_61, 308, 137);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_61, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_61, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_61, 123, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->demo_gui_cont_61, lv_color_hex(0x7f7c7c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->demo_gui_cont_61, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_65
	ui->demo_gui_label_65 = lv_label_create(ui->demo_gui_cont_61);
	lv_label_set_text(ui->demo_gui_label_65, "Time/Date:");
	lv_label_set_long_mode(ui->demo_gui_label_65, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_65, 2, 8);
	lv_obj_set_size(ui->demo_gui_label_65, 81, 22);

	//Write style for demo_gui_label_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_65, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_65, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_65, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_65, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_65, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_digital_clock_2
	static bool demo_gui_digital_clock_2_timer_enabled = false;
	ui->demo_gui_digital_clock_2 = lv_dclock_create(ui->demo_gui_cont_61, "11:25:50 AM");
	if (!demo_gui_digital_clock_2_timer_enabled) {
		lv_timer_create(demo_gui_digital_clock_2_timer, 1000, NULL);
		demo_gui_digital_clock_2_timer_enabled = true;
	}
	lv_obj_set_pos(ui->demo_gui_digital_clock_2, 94, 5);
	lv_obj_set_size(ui->demo_gui_digital_clock_2, 97, 30);

	//Write style for demo_gui_digital_clock_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->demo_gui_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_digital_clock_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_digital_clock_2, &lv_font_Antonio_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_digital_clock_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_digital_clock_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_digital_clock_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_digital_clock_2, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_datetext_2
	ui->demo_gui_datetext_2 = lv_label_create(ui->demo_gui_cont_61);
	lv_label_set_text(ui->demo_gui_datetext_2, "2023/07/31");
	lv_obj_set_style_text_align(ui->demo_gui_datetext_2, LV_TEXT_ALIGN_CENTER, 0);
	lv_obj_add_flag(ui->demo_gui_datetext_2, LV_OBJ_FLAG_CLICKABLE);
	lv_obj_add_event_cb(ui->demo_gui_datetext_2, demo_gui_datetext_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_set_pos(ui->demo_gui_datetext_2, 193, 6);
	lv_obj_set_size(ui->demo_gui_datetext_2, 101, 25);

	//Write style for demo_gui_datetext_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_datetext_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_datetext_2, &lv_font_Antonio_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_datetext_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_datetext_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_datetext_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_datetext_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->demo_gui_datetext_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_datetext_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_datetext_2, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_datetext_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_datetext_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_datetext_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_cont_64
	ui->demo_gui_cont_64 = lv_obj_create(ui->demo_gui_cont_61);
	lv_obj_set_pos(ui->demo_gui_cont_64, 7, 44);
	lv_obj_set_size(ui->demo_gui_cont_64, 136, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_64, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_64, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_64, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_64, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_64, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_64
	ui->demo_gui_label_64 = lv_label_create(ui->demo_gui_cont_64);
	lv_label_set_text(ui->demo_gui_label_64, "Light 1");
	lv_label_set_long_mode(ui->demo_gui_label_64, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_64, 32, 7);
	lv_obj_set_size(ui->demo_gui_label_64, 62, 18);

	//Write style for demo_gui_label_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_64, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_64, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_64, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_64, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_63
	ui->demo_gui_label_63 = lv_label_create(ui->demo_gui_cont_64);
	lv_label_set_text(ui->demo_gui_label_63, "On");
	lv_label_set_long_mode(ui->demo_gui_label_63, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_63, 101, 7);
	lv_obj_set_size(ui->demo_gui_label_63, 29, 18);

	//Write style for demo_gui_label_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_63, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_63, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_63, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_63, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_23
	ui->demo_gui_imgbtn_23 = lv_imgbtn_create(ui->demo_gui_cont_64);
	lv_obj_add_flag(ui->demo_gui_imgbtn_23, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_23, LV_IMGBTN_STATE_RELEASED, NULL, &_onlight_alpha_26x29, NULL);
	ui->demo_gui_imgbtn_23_label = lv_label_create(ui->demo_gui_imgbtn_23);
	lv_label_set_text(ui->demo_gui_imgbtn_23_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_23_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_23_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_23, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_23, 4, 0);
	lv_obj_set_size(ui->demo_gui_imgbtn_23, 26, 29);

	//Write style for demo_gui_imgbtn_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_23, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_23, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_23, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_23, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_23, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_23, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_23, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_23, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_23, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_23, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_23, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_23, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_23, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_23, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_23, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_23, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_23, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_63
	ui->demo_gui_cont_63 = lv_obj_create(ui->demo_gui_cont_61);
	lv_obj_set_pos(ui->demo_gui_cont_63, 163, 43);
	lv_obj_set_size(ui->demo_gui_cont_63, 136, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_63, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_63, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_63, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_63, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_63, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_62
	ui->demo_gui_label_62 = lv_label_create(ui->demo_gui_cont_63);
	lv_label_set_text(ui->demo_gui_label_62, "Light 2");
	lv_label_set_long_mode(ui->demo_gui_label_62, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_62, 32, 7);
	lv_obj_set_size(ui->demo_gui_label_62, 62, 18);

	//Write style for demo_gui_label_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_62, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_62, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_62, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_62, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_61
	ui->demo_gui_label_61 = lv_label_create(ui->demo_gui_cont_63);
	lv_label_set_text(ui->demo_gui_label_61, "Off");
	lv_label_set_long_mode(ui->demo_gui_label_61, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_61, 101, 7);
	lv_obj_set_size(ui->demo_gui_label_61, 29, 18);

	//Write style for demo_gui_label_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_61, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_61, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_61, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_61, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_22
	ui->demo_gui_imgbtn_22 = lv_imgbtn_create(ui->demo_gui_cont_63);
	lv_obj_add_flag(ui->demo_gui_imgbtn_22, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_22, LV_IMGBTN_STATE_RELEASED, NULL, &_offlight_alpha_28x29, NULL);
	ui->demo_gui_imgbtn_22_label = lv_label_create(ui->demo_gui_imgbtn_22);
	lv_label_set_text(ui->demo_gui_imgbtn_22_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_22_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_22_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_22, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_22, 4, 0);
	lv_obj_set_size(ui->demo_gui_imgbtn_22, 28, 29);

	//Write style for demo_gui_imgbtn_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_22, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_22, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_22, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_22, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_22, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_22, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_22, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_22, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_22, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_22, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_22, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_22, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_22, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_22, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_22, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_22, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_22, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Write codes demo_gui_cont_62
	ui->demo_gui_cont_62 = lv_obj_create(ui->demo_gui_cont_61);
	lv_obj_set_pos(ui->demo_gui_cont_62, 8, 88);
	lv_obj_set_size(ui->demo_gui_cont_62, 136, 31);
	lv_obj_set_scrollbar_mode(ui->demo_gui_cont_62, LV_SCROLLBAR_MODE_OFF);

	//Write style for demo_gui_cont_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_cont_62, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->demo_gui_cont_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->demo_gui_cont_62, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->demo_gui_cont_62, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_cont_62, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_60
	ui->demo_gui_label_60 = lv_label_create(ui->demo_gui_cont_62);
	lv_label_set_text(ui->demo_gui_label_60, "Switch 1");
	lv_label_set_long_mode(ui->demo_gui_label_60, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_60, 32, 7);
	lv_obj_set_size(ui->demo_gui_label_60, 62, 18);

	//Write style for demo_gui_label_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_60, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_60, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_60, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_60, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_label_59
	ui->demo_gui_label_59 = lv_label_create(ui->demo_gui_cont_62);
	lv_label_set_text(ui->demo_gui_label_59, "Off");
	lv_label_set_long_mode(ui->demo_gui_label_59, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->demo_gui_label_59, 101, 7);
	lv_obj_set_size(ui->demo_gui_label_59, 29, 18);

	//Write style for demo_gui_label_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->demo_gui_label_59, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_label_59, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_label_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->demo_gui_label_59, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_label_59, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes demo_gui_imgbtn_21
	ui->demo_gui_imgbtn_21 = lv_imgbtn_create(ui->demo_gui_cont_62);
	lv_obj_add_flag(ui->demo_gui_imgbtn_21, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->demo_gui_imgbtn_21, LV_IMGBTN_STATE_RELEASED, NULL, &_iswitch_alpha_26x22, NULL);
	ui->demo_gui_imgbtn_21_label = lv_label_create(ui->demo_gui_imgbtn_21);
	lv_label_set_text(ui->demo_gui_imgbtn_21_label, "");
	lv_label_set_long_mode(ui->demo_gui_imgbtn_21_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->demo_gui_imgbtn_21_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->demo_gui_imgbtn_21, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->demo_gui_imgbtn_21, 4, 2);
	lv_obj_set_size(ui->demo_gui_imgbtn_21, 26, 22);

	//Write style for demo_gui_imgbtn_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_21, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_21, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->demo_gui_imgbtn_21, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for demo_gui_imgbtn_21, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_21, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_21, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_21, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_21, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_21, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for demo_gui_imgbtn_21, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_21, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->demo_gui_imgbtn_21, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->demo_gui_imgbtn_21, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->demo_gui_imgbtn_21, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->demo_gui_imgbtn_21, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for demo_gui_imgbtn_21, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->demo_gui_imgbtn_21, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//The custom code of demo_gui.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->demo_gui);

	//Init events for screen.
	events_init_demo_gui(ui);
}
