/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void demo_gui_imgbtn_6_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.demo_gui_cont_12, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_16, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_24, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_20, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_14, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_imgbtn_7_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.demo_gui_cont_12, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.demo_gui_cont_16, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_20, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_24, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_17, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_imgbtn_8_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.demo_gui_cont_24, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_20, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_16, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_12, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_imgbtn_9_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.demo_gui_cont_20, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_16, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_12, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_24, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_sw_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_t * status_obj = lv_event_get_target(e);
		int status = lv_obj_has_state(status_obj, LV_STATE_CHECKED) ? 1 : 0;
		switch(status) {
		case 0:
		{
			lv_obj_add_flag(guider_ui.demo_gui_cont_14, LV_OBJ_FLAG_HIDDEN);
			break;
		}
		case 1:
		{
			lv_obj_clear_flag(guider_ui.demo_gui_cont_14, LV_OBJ_FLAG_HIDDEN);
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
}
static void demo_gui_sw_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_t * status_obj = lv_event_get_target(e);
		int status = lv_obj_has_state(status_obj, LV_STATE_CHECKED) ? 1 : 0;
		switch(status) {
		case 0:
		{
			lv_obj_add_flag(guider_ui.demo_gui_cont_17, LV_OBJ_FLAG_HIDDEN);
			break;
		}
		case 1:
		{
			lv_obj_clear_flag(guider_ui.demo_gui_cont_17, LV_OBJ_FLAG_HIDDEN);
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
}
static void demo_gui_imgbtn_10_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.demo_gui_cont_33, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_48, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_54, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_btn_5_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.demo_gui_cont_33, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_48, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_54, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_imgbtn_11_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.demo_gui_cont_33, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.demo_gui_cont_48, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_54, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_btn_6_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.demo_gui_cont_33, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.demo_gui_cont_48, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_54, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_imgbtn_12_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.demo_gui_cont_33, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_48, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.demo_gui_cont_54, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void demo_gui_btn_7_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.demo_gui_cont_33, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.demo_gui_cont_48, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.demo_gui_cont_54, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
void events_init_demo_gui(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->demo_gui_imgbtn_6, demo_gui_imgbtn_6_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_imgbtn_7, demo_gui_imgbtn_7_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_imgbtn_8, demo_gui_imgbtn_8_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_imgbtn_9, demo_gui_imgbtn_9_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_sw_1, demo_gui_sw_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_sw_2, demo_gui_sw_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_imgbtn_10, demo_gui_imgbtn_10_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_btn_5, demo_gui_btn_5_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_imgbtn_11, demo_gui_imgbtn_11_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_btn_6, demo_gui_btn_6_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_imgbtn_12, demo_gui_imgbtn_12_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->demo_gui_btn_7, demo_gui_btn_7_event_handler, LV_EVENT_ALL, ui);
}

void events_init(lv_ui *ui)
{

}