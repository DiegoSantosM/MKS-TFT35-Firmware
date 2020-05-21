#ifndef MULTI_LANGUAGE_H
#define MULTI_LANGUAGE_H

#include "main.h"
#include "Language_en.h"
#include "Language_s_cn.h"
#include "Language_t_cn.h"

extern void disp_language_init();
#if 0
#define TFT28           1
#define TFT35           2
#define TFT70           3

#define TFT_SEL         TFT35
#endif

//语言
#define LANG_SIMPLE_CHINESE		1
#define LANG_COMPLEX_CHINESE	2
#define LANG_ENGLISH						3
#define LANG_JAPAN							4
#define LANG_GERMAN						5		
#define LANG_FRENCH						6
#define LANG_RUSSIAN						7
#define LANG_KOREAN						8
#define LANG_TURKISH						9
#define LANG_SPANISH						10
#define LANG_GREEK							11
#define LANG_ITALY							12
#define LANG_PORTUGUESE				13



#define FONT_BUTTON	GUI_FontHZ_fontHz14
#define FONT_STATE_INF	GUI_FontHZ_fontHz14
#define FONT_TITLE		GUI_FontHZ_fontHz14
///
typedef struct machine_common_disp
{
	const char *default_value;
	
	const char *next;
	const char *previous;
	const char *back;
	
	const char *MachineConfigTitle;
	const char *MachineType;
	const char *Stroke;
	const char *HomeDir;
	const char *EndStopType;
	const char *FilamentConf;
	const char *LevelingConf;
	const char *FirmwareType;	
	const char *PausePosConf;
	const char *BaudRateConf;
	const char *WifiConf;

	const char *wifiConfTile;
	const char *WifiMode;
	const char *WifiKey;
	const char *cloudEnable;
	const char *cloudHost;
	const char *cloudPort;
	const char *WifiMode0;
	const char *WifiMode1;
	const char *WifiName;
	

	const char *MachineTypeConfTitle;
	const char *xyz;
	const char *delta;
	const char *corexy;
	const char *normal;

	const char *FirmwareTypeConfTitle;
	const char *marlin;
	const char *repetier;
	const char *smoothie;
	
	const char *BaudRateConfTitle;
	const char *rate1;
	const char *rate2;
	const char *rate3;
	const char *rate4;
	
	
	const char *StrokeConfTitle;
	const char *xStroke;
	const char *yStroke;
	const char *zStroke;

	const char *xmin;
	const char *ymin;
	const char *zmin;

	const char *HomeDirConfTitle;
	const char *xHomeDir;
	const char *yHomeDir;
	const char *zHomeDir;
	const char *min;
	const char *max;
	
	const char *PositionPuaseConfTitle;
	const char *xPosition;
	const char *yPosition;
	const char *zPosition;
        
	const char *EndstopConfTitle;
	const char *xEndstop_min;
	const char *yEndstop_min;
	const char *zEndstop_min;
	const char *xEndstop_max;
	const char *yEndstop_max;
	const char *zEndstop_max;	
	const char *FilamentEndstop;
	const char *LevelingEndstop;
	const char *opened;
	const char *closed;

	const char *FilamentConfTitle;
	const char *InTemperature;
	const char *InLength;
	const char *InSpeed;
	const char *OutTemperature;
	const char *OutLength;
	const char *OutSpeed;	

	const char *LevelingParaConfTitle;
	const char *LevelingParaConf;
	const char *DeltaLevelConf;
	const char *XYZLevelconf;
	
	const char *LevelingSubConfTitle;
	const char *AutoLevelEnable;
	const char *BLtouchEnable;
	const char *ProbePort;
	const char *ProbeXoffset;
	const char *ProbeYoffset;
	const char *ProbeZoffset;
	const char *ProbeXYspeed;
	const char *ProbeZspeed;
	const char *enable;
	const char *disable;
	const char *z_min;
	const char *z_max;
	const char *leveling_z_speed;
	const char *leveling_xy_speed;
	const char *leveling_z_high;
	const char *AutoLevelCmd;

	const char *LevelingSubDeltaConfTitle;
	const char *MachineRadius;
	const char *DiagonalRod;
	const char *PrintableRadius;
	const char *DeltaHeight;
	const char *SmoothRodOffset;
	const char *EffectorOffset;
	const char *CalibrationRadius;
	
	const char *LevelingSubXYZConfTitle;
	//const char *Level_positon1;
	//const char *Level_positon2;
	//const char *Level_positon3;
	//const char *Level_positon4;

	const char *TemperatureConfTitle;
	const char *NozzleConf;
	const char *HotBedConf;
	const char *PreheatTemperConf;

	const char *NozzleCnt;
	const char *NozzleConfTitle;
	const char *NozzleType;
	const char *NozzleAdjustType;
	const char *NozzleMinTemperature;
	const char *NozzleMaxTemperature;
	const char *Extrude_Min_Temper;

	const char *HotbedEnable;
	const char *HotbedConfTitle;
	const char *HotbedAjustType;
	const char *HotbedMinTemperature;
	const char *HotbedMaxTemperature;

	const char *MotorConfTitle;
	const char *MaxFeedRateConf;
	const char *AccelerationConf;
	const char *JerkConf;
	const char *StepsConf;
	const char *MotorDirConf;
	const char *HomeFeedRateConf;
	const char *CurrentConf;
	const char *TMCBumpSen;
	const char *GetInfo;
	const char *SaveInfo;
	
	const char *consosTitle;

	const char *MaxFeedRateConfTitle;
	const char *XMaxFeedRate;
	const char *YMaxFeedRate;
	const char *ZMaxFeedRate;
	const char *E0MaxFeedRate;
	const char *E1MaxFeedRate;

	const char *AccelerationConfTitle;
	const char *PrintAcceleration;
	const char *RetractAcceleration;
	const char *TravelAcceleration;
	const char *X_Acceleration;
	const char *Y_Acceleration;
	const char *Z_Acceleration;
	const char *E0_Acceleration;
	const char *E1_Acceleration;

	const char *JerkConfTitle;
	const char *X_Jerk;
	const char *Y_Jerk;
	const char *Z_Jerk;
	const char *E_Jerk;

	const char *StepsConfTitle;
	const char *X_Steps;
	const char *Y_Steps;
	const char *Z_Steps;
	const char *E0_Steps;
	const char *E1_Steps;
	
	const char *CurrentConfTitle;
	const char *X_Current;
	const char *Y_Current;
	const char *Z_Current;
	const char *E0_Current;
	const char *E1_Current;
	
	const char *TMCBumpTitle;
	const char *X_Sensivisity;
	const char *Y_Sensivisity;
	const char *Z_Sensivisity;

	const char *MotorDirConfTitle;
	const char *X_MotorDir;
	const char *Y_MotorDir;
	const char *Z_MotorDir;
	const char *E0_MotorDir;
	const char *E1_MotorDir;
	const char *Invert_1;
	const char *Invert_0;

	const char *HomeFeedRateConfTitle;
	const char *XY_HomeFeedRate;
	const char *Y_HomeFeedRate;
	const char *Z_HomeFeedRate;

	const char *AdvancedConfTitle;
	const char *PwrOffDection;
	const char *PwrOffAfterPrint;
	const char *HaveUps;
	const char *Z2andZ2Endstop;
	const char *EnablePinsInvert;
	const char *h_level;
	const char *l_level;
	const char *pwr_saveMode;
	const char *disable_PB0_PB1;
	const char *pwr_saveMode1;
	const char *pwr_saveMode2;
	const char *level_PB0;
	const char *level_PB1;
	const char *z_error;
	
	const char *Z2ConfTitle;
	const char *Z2Enable;
	const char *Z2EndstopEnable;
	const char *Z2Port;

	const char *EnablePinsInvertTitle;
	const char *XInvert;
	const char *YInvert;
	const char *ZInvert;
	const char *EInvert;

	const char *key_1;	
	const char *key_2;	
	const char *key_3;	
	const char *key_4;	
	const char *key_5;	
	const char *key_6;	
	const char *key_7;	
	const char *key_8;	
	const char *key_9;	
	const char *key_0;	
	const char *key_point;	
	const char *key_back;	
	const char *key_rest;	
	const char *key_confirm;	
	const char *negative;
	const char *low_level;
	const char *high_level;

	const char *CustomConfTitle;
	const char *display;
	const char *button;

	const char *buttonConfTitle;
	const char *function_btn1_display;
	const char *function_btn1_cmd;
	const char *quickStop_btn;
	const char *zoffset_btn_display;
	const char *more_btn;
	const char *print_more_btn;
	const char *displayCalibrate;

	const char *MoreButtonConfTitle;
	const char *moreItem_cnt;
	const char *moreItem_btn1;
	const char *moreItem_btn2;
	const char *moreItem_btn3;
	const char *moreItem_btn4;
	const char *moreItem_btn5;
	const char *moreItem_btn6;
	const char *moreItem_btn7;	

	const char *MoreFunctionConfTitle;
	const char *morefunc_cnt;
	const char *moreItem_func1;
	const char *moreItem_func2;
	const char *moreItem_func3;
	const char *moreItem_func4;
	const char *moreItem_func5;
	const char *moreItem_func6;
	const char *moreItem_func7;	
	
	const char *DisplayConfTitle;
	const char *background_color;
	const char *title_color;
	const char *state_bkcolor;
	const char *state_text_color;
	const char *filename_bkcolor;
	const char *filename_textcolor;
	const char *btn_bkcolor;
	const char *btn_textcolor;
	const char *state_btn_textcolor;
	const char *state_btn_bkcolor;
	const char *back_btn_textcolor;
	const char *back_btn_bkcolor;
	const char *sel_btn_bkcolor;
	const char *sel_btn_textcolor;
	const char *dialog_btn_bkcolor;
	const char *dialog_btn_textcolor;

	const char *btn_3D_ecffects;
	const char *btn_text_offset;
	const char *screen_overturn;
	const char *display_mode;
	const char* display_error_msg;
	const char* simple_theme;//Simple theme
	const char *classic_theme;				//Classic theme
	const char *babastepting;
	const char *colorConfigTitle;
	const char * blue;
	const char * yellow;
	const char * white;
	const char * black;
	const char * red;
	const char * cyan;
	const char * gray;
	const char * green;
}machine_common_def;
extern machine_common_def machine_menu;
typedef struct common_menu_disp
{
	char *text_back;
	char *dialog_confirm_title;
	char *close_machine_tips;
	char *unbind_printer_tips;
	char *print_special_title;
	char *pause_special_title;
	char *operate_special_title;
	const char *next;
	const char *previous;
}common_menu_def;
extern common_menu_def common_menu;

typedef struct main_menu_disp
{
	char *title;
	char *preheat;
	char *move;
	char *home;
	char *print;
	char *extrude;
	char *leveling;
	char *autoleveling;
	char *fan;
	char *set;
	char *tool;
	char *more;
	const char *machine_para;
}main_menu_def;
extern main_menu_def main_menu;
typedef struct preheat_menu_disp
{
	char *adjust_title;
	char *title;
	char *add;
	char *dec;
	char *ext1;
	char *ext2;
	char *hotbed;
	char *off;
	char *step_1c;
	char *step_5c;
	char *step_10c;
	char *back;
	
	char *value_state;	
	
	char *dialog_tips;
	
}preheat_menu_def;
extern preheat_menu_def preheat_menu;
typedef struct move_menu_disp
{
	char *title;
	char *x_add;
	char *x_dec;
	char *y_add;
	char *y_dec;
	char *z_add;
	char *z_dec;
	char *step_01mm;
	char *step_1mm;
	char *step_10mm;
	char *step_005mm;
	char *step_001mm;
	char *back;
}move_menu_def;
extern move_menu_def move_menu;
typedef struct home_menu_disp
{
	char *title;
	char *home_all;
	char *home_x;
	char *home_y;
	char *home_z;
	char *stopmove;
	char *back;
}home_menu_def;
extern home_menu_def home_menu;
typedef struct file_menu_disp
{
	char *title;
	char *page_up;
	char *page_down;
	char *back;

	char *file_loading;
	char *no_file;
	char *no_file_and_check;
	
}file_menu_def;
extern file_menu_def file_menu;
typedef struct extrude_menu_disp
{
	char *title;
	char *in;
	char *out;
	char *ext1;
	char *ext2;
	char *step_1mm;
	char *step_5mm;
	char *step_10mm;
	char *low;
	char *normal;
	char *high;
	char *back;

	char *count_value_mm;
	char *count_value_cm;
	char *count_value_m;
	char *temp_value;
	char *temper_text;
}extrude_menu_def;
extern extrude_menu_def extrude_menu;
typedef struct leveling_menu_disp
{
	char *title;
	char *position1;
	char *position2;
	char *position3;
	char *position4;
	char *position5;
	char *count;
	char *back;
}leveling_menu_def;
extern leveling_menu_def leveling_menu;
typedef struct set_menu_disp
{
	char *title;
	char *filesys;
	char *wifi;
	char *about;
	char *fan;
	char *filament;
	char *breakpoint;
	char *motoroff;
	char *shutdown;
	char *language;
	const char *machine_para;//
	char *back;
}set_menu_def;
extern set_menu_def set_menu;
typedef struct filesys_menu_disp
{
char *title;
char *filesys;
char *sd_sys;
char *usb_sys;
char *back;

}filesys_menu_def;
extern filesys_menu_def filesys_menu;
typedef struct more_menu_disp
{
	char *title;
	char *zoffset;
	char *calibrate;
	char *back;
}more_menu_def;
extern more_menu_def more_menu;
typedef struct wifi_menu_disp
{
	char *title;
	char *ip;
	char *wifi;
	char *key;
	char *state_ap;
	char *state_sta;
	char *cloud;
	char *connected;
	char *disconnected;
	char *exception;
	char *back;
	char *reconnect;
}wifi_menu_def;
extern wifi_menu_def wifi_menu;
typedef struct cloud_menu_disp
{
	char *title;
	char *unbind;
	char *unbinding;
	char *unbinded;
	char *bind; 
	char *binding;
	char *binded;
	char *disable;
	char *disconnected;
	char *back;
	char *unbind_printer_tips;
}cloud_menu_def;
extern cloud_menu_def cloud_menu;

typedef struct about_menu_disp
{
	char *title;
	char *type_name;
	char *firmware_v;
	char *type;
	char *version; 
	char *wifi;
	char *type_robin;
	char *type_robin_mini;
	char *back;
}about_menu_def;
extern about_menu_def about_menu;

typedef struct fan_menu_disp
{
	char *title;
	char *add;
	char *dec; 
	char *full;
	char *half;
	char *off;
	char *back;
	
	char *state;
	char *state_value;
}fan_menu_def;
extern fan_menu_def fan_menu;

typedef struct filament_menu_disp
{
	char *title;
	char *in;
	char *out; 
	char *ext1;
	char *ext2;
	char *back;
	char *stat_temp;
	char *ready_replace;
	char *replacing;
	char *loading;
	char *unloading;
	char *heating;
	char *complete_and_back;
	char *filament_dialog_load_heat;
	char *filament_dialog_unload_heat;
	char *filament_dialog_load_heat_confirm;
	char *filament_dialog_unload_heat_confirm;
	char *filament_dialog_loading;
	char *filament_dialog_unloading;
	char *filament_dialog_load_completed;
	char *filament_dialog_unload_completed;
	char *filament_dialog_ok;
	char *filament_dialog_back;
}filament_menu_def;
extern filament_menu_def filament_menu;

typedef struct language_menu
{
	char *title;
	char *chinese_s;
	char *chinese_t;
	char *english;
	char *russian;
	char *japan;
	char *italy;
	char *german;
	char *spanish;
	char *korean;
	char *french;
	char *brazil;
	char *portuguese;
	char *next;
	char *up;
	char *back;
}language_menu_def;
extern language_menu_def language_menu;


typedef struct printing_menu_disp
{
	char *title;
	char *option;
	char *temp1; 
	char *temp2;
	char *bed_temp;
	char *fan_speed;	
	char *pause;
	char *resume;
	char *stop;
}printing_menu_def;
extern printing_menu_def printing_menu;

typedef struct operation_menu_disp
{
	char *title;
	char *pause;
	char *stop; 
	char *temp;
	char *fan;
	char *filament;
	char *extr;
	char *speed;
	char *move;
	char *more;	
	char *auto_off;
	char *manual_off;
	char *back;
	char *babystep;
}operation_menu_def;
extern operation_menu_def operation_menu;
typedef struct pause_menu_disp
{
	char *title;
	char *resume;
	char *stop; 
	char *extrude;
	char *move;
	char *filament;	
	char *more;
}pause_menu_def;
extern pause_menu_def pause_menu;

typedef struct speed_menu_disp
{
	char *title;
	char *add;
	char *dec; 
	char *extrude;
	char *move;
	char *step_1percent;
	char *step_5percent;
	char *step_10percent;
	char *back;
	char *move_speed;
	char *extrude_speed;
}speed_menu_def;
extern speed_menu_def speed_menu;

typedef struct printing_more_menu_disp
{
	char *title;
	char *fan;
	char *auto_close; 
	char *manual;
	char *temp;	
	char *speed;
	char *back;
}printing_more_menu_def;
extern printing_more_menu_def printing_more_menu;

typedef struct dialog_menu_disp
{
	char *confirm_title;
	
	char *error1_repint_no_file;
	char *error2_communication_fail;
	char *error3_filename_too_long;
	char *error4_no_file;
	char *error5_check_filesys;

	char *tip1_print_file;
	char *tip2_stop_file;
}dialog_menu_def;
extern dialog_menu_def dialog_menu;

typedef struct print_file_dialog_disp
{
	char *title;
	char *confirm;
	char *cancle;
	char *print_file;
	char *cancle_print;
	char *retry;
	char *stop;
	char *no_file_print_tips;
	char *print_from_breakpoint;
	char *file_name_too_long_error;
	char *close_machine_error;
	char *filament_no_press;
	char *wifi_enable_tips;
}print_file_dialog_menu_def;
extern print_file_dialog_menu_def print_file_dialog_menu;

typedef struct zoffset_menu_disp
{
	char *title;
	char *inc;
	char *dec;
	char *step001;
	char *step01;
	char *step1;
	char *back;
}zoffset_menu_def;
extern zoffset_menu_def zoffset_menu;
typedef struct tool_menu_disp
{
	char *title;
	char *preheat;
	char *extrude;
	char *move;
	char *home;
	char *leveling;
	char *autoleveling;
	char *filament;
	char *more;
	char *back;
}tool_menu_def;
extern tool_menu_def tool_menu;	

typedef struct MachinePara_menu_disp
{
	const char *title;
	const char *MachineSetting;
	const char *TemperatureSetting;
	const char *MotorSetting;
	const char *AdvanceSetting;
	const char *Custom;
	const char *Console;
	//const char *back;
}MachinePara_menu_def;
extern MachinePara_menu_def MachinePara_menu;

typedef struct MachineSettings_menu_disp
{
	const char *title;
	const char *Machine;
	const char *Stroke;
	const char *HomeDir;
	const char *EndStopType;
	const char *filamet;
	const char *leveling;
	const char *back;
}MachineSettings_menu_def;
extern MachineSettings_menu_def MachineSettings_menu;

typedef struct TemperatureSettings_menu_disp
{
	const char *title;
	const char *nozzle;
	const char *hotbed;
	const char *preheat;
	const char *back;
}TemperatureSettings_menu_def;
extern TemperatureSettings_menu_def TemperatureSettings_menu;

/*****************************************/
//********************************************//
#if defined(TFT70)
#define TEXT_VALUE                  "%d℃/%d℃"
#elif defined(TFT35)
#define TEXT_VALUE                  "%d/%d"
#endif

#define TEXT_VALUE_T                  ": %d℃"
#define TEXT_VALUE_mm                 ": %dmm"
#define TEXT_VALUE_cm                 ": %dcm"
#define TEXT_VALUE_m                  ": %dm"

#define TEMP_UNIT_SYBOL               "%d℃"
#define FLOAT_TEMP_UNIT_SYBOL               "%.1f℃"

#define TEXT_1C						"1℃"
#define TEXT_5C						"5℃"
#define TEXT_10C					"10℃"

#define AXIS_X_ADD_TEXT			    "X+"
#define AXIS_X_DEC_TEXT			    "X-"
#define AXIS_Y_ADD_TEXT			    "Y+"
#define AXIS_Y_DEC_TEXT			    "Y-"
#define AXIS_Z_ADD_TEXT			    "Z+"
#define AXIS_Z_DEC_TEXT			    "Z-"
#define TEXT_01MM					"0.1mm"
#define TEXT_001MM					"0.01mm"
#define TEXT_005MM					"0.05mm"
#define TEXT_1MM					"1mm"
#define TEXT_10MM					"10mm"

#define EXTRUDE_1MM_TEXT			"1mm"
#define EXTRUDE_5MM_TEXT			"5mm"
#define EXTRUDE_10MM_TEXT		    "10mm"

#define STEP_1PERCENT				"1%"
#define STEP_5PERCENT				"5%"
#define STEP_10PERCENT				"10%"

#define LANGUAGE_S_CN				"简体"
#define LANGUAGE_T_CN				"繁体"
#define LANGUAGE_EN					"English"
#define LANGUAGE_JP					"日本語"
#define LANGUAGE_GE					"Deutsch"
#define LANGUAGE_FR					"français"
#define LANGUAGE_IT                 "Italia"
#define LANGUAGE_PR                 "português"
#define LANGUAGE_KR                 "Korean"
#define LANGUAGE_BR                 "Brazil"
#define LANGUAGE_RU                 "русский"
#define LANGUAGE_SP                 "español"

#define HOME_X_TEXT					"X"
#define HOME_Y_TEXT					"Y"
#define HOME_Z_TEXT					"Z"
#define HOME_ALL_TEXT				"All"

#define ABOUT_TYPE_TEXT				"MKS TFT"
#define ABOUT_VERSION_TEXT			"1.0.6"
//#define ABOUT_WIFI_TEXT				"WiFi:"

#define FAN_OPEN_TEXT				"100%"
#define FAN_HALF_TEXT				"50%"
#define FAN_CLOSE_TEXT				"0%"
//#define FAN_TIPS1_TEXT				"FAN"
//#define FAN_TIPS2_TEXT				"FAN\nClose"

#define WIFI_TEXT					"WIFI"
#define WIFI_IP_TEXT			"IP: "
#define WIFI_NAME_TEXT		"WiFi: "
#define WIFI_KEY_TEXT		"Key: "
#define WIFI_STATE_AP_TEXT			"State: AP"
#define WIFI_STATE_STA_TEXT			"State: STA"
#define WIFI_CONNECTED_TEXT			"Connected"
#define WIFI_DISCONNECTED_TEXT  "Disconnected"
#define WIFI_EXCEPTION_TEXT				"Exception"

#define FILAMENT_TIPS2_TEXT			"T:"

#define DIALOG_UPLOAD_ING_EN				"Uploading......"
#define DIALOG_UPLOAD_ERROR_EN				"Upload error"
#define DIALOG_UPLOAD_FINISH_EN				"Upload finished"
#define DIALOG_UPLOAD_SIZE_EN				"Size"
#define DIALOG_UPLOAD_TIME_EN				"Time"
#define DIALOG_UPLOAD_SPEED_EN				"Speed"
#define DIALOG_UPDATE_WIFI_FIRMWARE_EN		"Updating wifi model firmware"
#define DIALOG_UPDATE_WIFI_WEB_EN			"Updating wifi model web data"
#define DIALOG_SVAE_DATE_SUCCESS_EN			"Save date to eeprom successful"

#define ZOFFSET_STEP001      "0.01mm"
#define ZOFFSET_STEP01      "0.1mm"
#define ZOFFSET_STEP1      "1mm"

#define TEXT_BABY_STEP  "Babystep"

//*************简体中文***********************//
/*
#define TOOL_TEXT_CN			    "工具"
#define PREHEAT_TEXT_CN 	        "预热"
#define	MOVE_TEXT_CN				"移动"
#define HOME_TEXT_CN 		        "回零"
#define PRINT_TEXT_CN		        "打印"
#define EXTRUDE_TEXT_CN 	        "挤出"
#define LEVELING_TEXT_CN            "调平"
#define AUTO_LEVELING_TEXT_CN       "自动调平"
#define SET_TEXT_CN			        "设置"
#define MORE_TEXT_CN                "更多"

#define ADD_TEXT_CN			        "增加"
#define DEC_TEXT_CN			        "减少"
#define EXTRUDER_1_TEXT_CN		    "喷头1"
#define EXTRUDER_2_TEXT_CN		    "喷头2"
#define HEATBED_TEXT_CN			    "热床"
#define TEXT_1C_CN					"1℃"
#define TEXT_5C_CN					"5℃"
#define TEXT_10C_CN					"10℃"
#define CLOSE_TEXT_CN				"关闭"

#define BACK_TEXT_CN					"返回"

#define TOOL_PREHEAT_CN            "预热"
#define TOOL_EXTRUDE_CN             "挤出"
#define TOOL_MOVE_CN                "移动"
#define TOOL_HOME_CN                "回零"
#define TOOL_LEVELING_CN               "调平"
#define TOOL_AUTO_LEVELING_CN         "自动调平"
#define TOOL_FILAMENT_CN                "换料"
#define TOOL_MORE_CN                    "更多"

#define AXIS_X_ADD_TEXT_CN				"X+"
#define AXIS_X_DEC_TEXT_CN				"X-"
#define AXIS_Y_ADD_TEXT_CN				"Y+"
#define AXIS_Y_DEC_TEXT_CN				"Y-"
#define AXIS_Z_ADD_TEXT_CN				"Z+"
#define AXIS_Z_DEC_TEXT_CN				"Z-"
#define TEXT_01MM_CN					"0.1mm"
#define TEXT_1MM_CN						"1mm"
#define TEXT_10MM_CN					"10mm"

#define HOME_X_TEXT_CN						"X"
#define HOME_Y_TEXT_CN						"Y"
#define HOME_Z_TEXT_CN						"Z"
#define HOME_ALL_TEXT_CN					"回零"
#define HOME_STOPMOVE_CN                       "急停"

#define PAGE_UP_TEXT_CN				"上一页"
#define PAGE_DOWN_TEXT_CN			"下一页"

#define EXTRUDER_IN_TEXT_CN		"进料"
#define EXTRUDER_OUT_TEXT_CN		"退料"
#define EXTRUDE_1MM_TEXT_CN			"1mm"
#define EXTRUDE_5MM_TEXT_CN			"5mm"
#define EXTRUDE_10MM_TEXT_CN		"10mm"
#define EXTRUDE_LOW_SPEED_TEXT_CN		"低速"
#define EXTRUDE_MEDIUM_SPEED_TEXT_CN	"常速"
#define EXTRUDE_HIGH_SPEED_TEXT_CN		"高速"

#define LEVELING_POINT1_TEXT_CN				"第一点"
#define LEVELING_POINT2_TEXT_CN				"第二点"
#define LEVELING_POINT3_TEXT_CN				"第三点"
#define LEVELING_POINT4_TEXT_CN				"第四点"
#define LEVELING_POINT5_TEXT_CN				"第五点"

#define FILESYS_TEXT_CN						"文件系统"
#define WIFI_TEXT_CN						"WIFI"
#define FAN_TEXT_CN							"风扇"
#define ABOUT_TEXT_CN						"关于"
#define BREAK_POINT_TEXT_CN					"断点续打"
#define FILAMENT_TEXT_CN					"换料"
#define LANGUAGE_TEXT_CN					"语言"
#define MOTOR_OFF_TEXT_CN					"关闭电机"
#define SHUTDOWN_TEXT_CN					"关机"

#define U_DISK_TEXT_CN						"U盘"
#define SD_CARD_TEXT_CN						"SD卡"
#define WIFI_NAME_TEXT_CN					"无线网络:"
#define WIFI_KEY_TEXT_CN					"密码: "
#define WIFI_IP_TEXT_CN						"IP: "
#define WIFI_AP_TEXT_CN						"状态: AP"
#define WIFI_STA_TEXT_CN					"状态: STA"
#define WIFI_CONNECTED_TEXT_CN				"已连接"
#define WIFI_DISCONNECTED_TEXT_CN			"未连接"
#define WIFI_EXCEPTION_TEXT_CN				"模块异常"
#define CLOUD_TEXT_CN						"云服务"
#define CLOUD_BIND_CN						"已绑定"
#define CLOUD_UNBIND_CN						"解绑"
#define CLOUD_UNBINDING_CN					"解绑中"
#define CLOUD_DISCONNECTED_CN				"未连接"
#define CLOUD_UNBINDED_CN					"未绑定"
#define CLOUD_BINDED_CN						"已绑定"
#define CLOUD_DISABLE_CN					"已禁用"

#define FAN_ADD_TEXT_CN						"增加"
#define FAN_DEC_TEXT_CN						"减少"
#define FAN_OPEN_TEXT_CN					"100%"
#define FAN_HALF_TEXT_CN					"50%"
#define FAN_CLOSE_TEXT_CN					"关闭"
#define FAN_TIPS1_TEXT_CN					"风扇"
#define FAN_TIPS2_TEXT_CN					"FAN\nClose"

#define FILAMENT_IN_TEXT_CN				"进料"
#define FILAMENT_OUT_TEXT_CN				"退料"
#define FILAMENT_EXT0_TEXT_CN				"喷头1"
#define FILAMENT_EXT1_TEXT_CN				"喷头2"
#define FILAMENT_HEAT_TEXT_CN				"预热"					
#define FILAMENT_STOP_TEXT_CN				"停止"
#if defined(TFT70)
  #define FILAMENT_REPLAYS_IDLE_TEXT_CN         "请按<进料>或<退料>进行换料!"
  #define FILAMENT_CHANGE_TEXT_CN				"待打印机暂停后,请按<进料>或<退料>进行换料!"

#elif defined(TFT35)

  #define FILAMENT_CHANGE_TEXT_CN				"待打印机暂停后,\n请按<进料>或<退料>"

#endif
#define FILAMENT_DIALOG_LOAD_HEAT_TIPS_CN		"准备进料,正在加热,请稍等!"
#define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_CN		"准备退料,正在加热,请稍等!"
#define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_CN           "加热完成,请装载耗材后,按<确定>开始进料!"
#define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_CN           "请装载耗材,按<确定>开始进料!"
#define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_CN          "加热完成,请按<确定>开始退料!"
#define FILAMENT_DIALOG_LOADING_TIPS_CN                 "正在进料,请等待耗材加载完成!"
#define FILAMENT_DIALOG_UNLOADING_TIPS_CN               "正在退料,请等待耗材卸载完成!"
#define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_CN           "进料完成,请按<确定>返回"
#define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_CN         "退料完成,请按<确定>返回"

#define FILAMENT_TIPS3_TEXT_CN				"正在进料"
#define FILAMENT_TIPS4_TEXT_CN				"正在退料"
#define FILAMENT_TIPS5_TEXT_CN				"温度太低,请先预热"
#define FILAMENT_TIPS6_TEXT_CN				"换料完成"

#define PRE_HEAT_EXT_TEXT_CN				"喷头"
#define PRE_HEAT_BED_TEXT_CN				"热床"

#define FILE_LOADING_CN					"正在载入......"
#define NO_FILE_AND_CHECK_CN			"无文件!请插入sd卡或u盘!"
#define NO_FILE_CN					    "无文件!"

#define EXTRUDER_TEMP_TEXT_CN				"温度"
#define EXTRUDER_E_LENGTH1_TEXT_CN          "喷头"
#define EXTRUDER_E_LENGTH2_TEXT_CN          "喷头"
#define EXTRUDER_E_LENGTH3_TEXT_CN          "喷头"

#define ABOUT_TYPE_TEXT_CN					"Type: "
#define ABOUT_VERSION_TEXT_CN				"Firmware: "
#define ABOUT_WIFI_TEXT_CN					"Wifi: "

#define PRINTING_OPERATION_CN				"操作"
#define PRINTING_PAUSE_CN					"暂停"
#define PRINTING_TEMP_CN					"温度"
#define PRINTING_CHANGESPEED_CN			    "变速"
#define PRINTING_RESUME_CN					"恢复"
#define PRINTING_STOP_CN					"停止"
#define PRINTING_MORE_CN					"更多"
#define PRINTING_EXTRUDER_CN				"挤出"
#define PRINTING_MOVE_CN					"移动"

#define EXTRUDER_SPEED_CN					"挤出"
#define MOVE_SPEED_CN						"移动"
#define EXTRUDER_SPEED_STATE_CN			    "挤出速度"
#define MOVE_SPEED_STATE_CN					"移动速度"
#define STEP_1PERCENT_CN					"1%"
#define STEP_5PERCENT_CN					"5%"
#define STEP_10PERCENT_CN					"10%"

#define ZOFFSET_CN                          "Z Offset"
#define ZOFFSET_INC_CN                      "增加"
#define ZOFFSET_DEC_CN                      "减少"

#define TITLE_READYPRINT_CN						"准备打印"
#define TITLE_PREHEAT_CN						"预热"
#define TITLE_MOVE_CN					        "移动"
#define TITLE_HOME_CN							"回零"
#define TITLE_EXTRUDE_CN						"挤出"
#define TITLE_LEVELING_CN						"调平"
#define TITLE_SET_CN							"设置"
#define TITLE_MORE_CN							"更多"
#define TITLE_CHOOSEFILE_CN						"选择文件"
#define TITLE_PRINTING_CN						"正在打印"
#define TITLE_OPERATION_CN						"操作"
#define TITLE_ADJUST_CN							"调整"
#define	TITLE_WIRELESS_CN						"无线网络"
#define	TITLE_FILAMENT_CN						"换料"
#define TITLE_ABOUT_CN							"关于"
#define TITLE_FAN_CN							"风扇"
#define TITLE_LANGUAGE_CN						"语言"
#define TITLE_PAUSE_CN							"暂停"
#define TITLE_CHANGESPEED_CN				    "变速"
#define TITLE_CLOUD_TEXT_CN				        "云服务"
#define TITLE_DIALOG_CONFIRM_CN				"确认"
#define TITLE_FILESYS_CN								"文件系统"
#define TITLE_ZOFFSET_CN                    "Z Offset"

#define AUTO_SHUTDOWN_CN					"自动关机"
#define MANUAL_SHUTDOWN_CN					"手动关机"

#define DIALOG_CONFIRM_CN					"确定"
#define DIALOG_CANCLE_CN					"取消"
#define DIALOG_OK_CN						"确认"
#define DIALOG_RESET_CN						"重置"
#define DIALOG_DISABLE_CN					"禁用"
#define DIALOG_PRINT_MODEL_CN			    "打印模型?"
#define DIALOG_CANCEL_PRINT_CN		        "停止打印?"
#define DIALOG_RETRY_CN						"重试"
#define DIALOG_STOP_CN						"停止"
#define DIALOG_REPRINT_FROM_BREAKPOINT_CN	"从断点续打?"
#define DIALOG_UNBIND_PRINTER_CN			"解除绑定 ?"
#define DIALOG_ERROR_TIPS1_CN				"错误:找不到文件,请插入sd卡/u盘!"
#define DIALOG_ERROR_TIPS2_CN				"错误:通信失败,请检查波特率或主板硬件!"
#define DIALOG_ERROR_TIPS3_CN				"错误:文件名或文件路径太长 !"
#define DIALOG_CLOSE_MACHINE_CN             "正在关机......"
#define DIALOG_UNBIND_PRINTER_CN            "解除绑定?"

#define CALIBRATE_CN  "触屏校准"
*/
//***************繁体中文**********************//
#define TOOL_TEXT_T_CN							"工具"
#define PREHEAT_TEXT_T_CN 					    "預熱"
#define	MOVE_TEXT_T_CN							"移動"
#define HOME_TEXT_T_CN  						"回零"
#define PRINT_TEXT_T_CN							"打印"
#define EXTRUDE_TEXT_T_CN 					    "擠出"
#define LEVELING_TEXT_T_CN 					    "調平"
#define AUTO_LEVELING_TEXT_T_CN 		        "自動調平"
#define SET_TEXT_T_CN							"設置"
#define MORE_TEXT_T_CN     					    "更多"

#define ADD_TEXT_T_CN			    "增加"
#define DEC_TEXT_T_CN			    "減少"
#define EXTRUDER_1_TEXT_T_CN		"噴頭1"
#define EXTRUDER_2_TEXT_T_CN		"噴頭2"
#define HEATBED_TEXT_T_CN			"熱床"
#define TEXT_1C_T_CN				"1℃"
#define TEXT_5C_T_CN				"5℃"
#define TEXT_10C_T_CN				"10℃"
#define CLOSE_TEXT_T_CN				"關閉"

#define BACK_TEXT_T_CN					    "返回"

#define TOOL_PREHEAT_T_CN            "預熱"
#define TOOL_EXTRUDE_T_CN             "擠出"
#define TOOL_MOVE_T_CN                "移動"
#define TOOL_HOME_T_CN                "回零"
#define TOOL_LEVELING_T_CN               "調平"
#define TOOL_AUTO_LEVELING_T_CN         "自動調平"
#define TOOL_FILAMENT_T_CN                "換料"
#define TOOL_MORE_T_CN                    "更多"

#define AXIS_X_ADD_TEXT_T_CN				"X+"
#define AXIS_X_DEC_TEXT_T_CN				"X-"
#define AXIS_Y_ADD_TEXT_T_CN				"Y+"
#define AXIS_Y_DEC_TEXT_T_CN				"Y-"
#define AXIS_Z_ADD_TEXT_T_CN				"Z+"
#define AXIS_Z_DEC_TEXT_T_CN				"Z-"
#define TEXT_01MM_T_CN						"0.1mm"
#define TEXT_1MM_T_CN						"1mm"
#define TEXT_10MM_T_CN						"10mm"

#define HOME_X_TEXT_T_CN					"X"
#define HOME_Y_TEXT_T_CN					"Y"
#define HOME_Z_TEXT_T_CN					"Z"
#define HOME_ALL_TEXT_T_CN					"回零"
#define HOME_STOPMOVE_T_CN                  "急停"

#define PAGE_UP_TEXT_T_CN					"上一頁"
#define PAGE_DOWN_TEXT_T_CN				    "下一頁"

#define EXTRUDER_IN_TEXT_T_CN		    "進料"
#define EXTRUDER_OUT_TEXT_T_CN		    "退料"
#define EXTRUDE_1MM_TEXT_T_CN			"1mm"
#define EXTRUDE_5MM_TEXT_T_CN			"5mm"
#define EXTRUDE_10MM_TEXT_T_CN		    "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_T_CN		"低速"
#define EXTRUDE_MEDIUM_SPEED_TEXT_T_CN	"常速"
#define EXTRUDE_HIGH_SPEED_TEXT_T_CN	"高速"

#define LEVELING_POINT1_TEXT_T_CN				"第一點"
#define LEVELING_POINT2_TEXT_T_CN				"第二點"
#define LEVELING_POINT3_TEXT_T_CN				"第三點"
#define LEVELING_POINT4_TEXT_T_CN				"第四點"
#define LEVELING_POINT5_TEXT_T_CN				"第五點"

#define FILESYS_TEXT_T_CN							"文件系統"
#define WIFI_TEXT_T_CN								"WIFI"
#define FAN_TEXT_T_CN								"風扇"
#define ABOUT_TEXT_T_CN								"關於"
#define BREAK_POINT_TEXT_T_CN						"斷點續打"
#define FILAMENT_TEXT_T_CN							"換料"
#define LANGUAGE_TEXT_T_CN							"語言"
#define MOTOR_OFF_TEXT_T_CN							"關閉電機"
#define SHUTDOWN_TEXT_T_CN							"關機"

#define U_DISK_TEXT_T_CN							"U盤"
#define SD_CARD_TEXT_T_CN							"SD卡"
#define WIFI_NAME_TEXT_T_CN							"無線網絡:"
#define WIFI_KEY_TEXT_T_CN							"密碼: "
#define WIFI_IP_TEXT_T_CN							"IP: "
#define WIFI_AP_TEXT_T_CN							"狀態: AP"
#define WIFI_STA_TEXT_T_CN							"狀態: STA"
#define WIFI_CONNECTED_TEXT_T_CN				    "已連接"
#define WIFI_DISCONNECTED_TEXT_T_CN			        "未連接"
#define WIFI_EXCEPTION_TEXT_T_CN				    "模塊異常"
#define CLOUD_TEXT_T_CN								"雲服務"
#define CLOUD_BIND_T_CN								"已綁定"
#define CLOUD_UNBIND_T_CN							"解綁"
#define CLOUD_UNBINDING_T_CN					    "解绑中"
#define CLOUD_DISCONNECTED_T_CN				        "未連接"
#define CLOUD_UNBINDED_T_CN						    "未綁定"
#define CLOUD_BINDED_T_CN							"已綁定"
#define CLOUD_DISABLE_T_CN						    "已禁用"

#define FAN_ADD_TEXT_T_CN							"增加"
#define FAN_DEC_TEXT_T_CN							"減少"
#define FAN_OPEN_TEXT_T_CN							"100%"
#define FAN_HALF_TEXT_T_CN							"50%"
#define FAN_CLOSE_TEXT_T_CN							"關閉"
#define FAN_TIPS1_TEXT_T_CN							"風扇"
#define FAN_TIPS2_TEXT_T_CN							"FAN\nClose"

#define FILAMENT_IN_TEXT_T_CN					"進料"
#define FILAMENT_OUT_TEXT_T_CN					"退料"
#define FILAMENT_EXT0_TEXT_T_CN					"噴頭1"
#define FILAMENT_EXT1_TEXT_T_CN					"噴頭2"
#define FILAMENT_HEAT_TEXT_T_CN					"預熱"					
#define FILAMENT_STOP_TEXT_T_CN					"停止"
#define FILAMENT_CHANGE_TEXT_T_CN				"準備換料"
#define FILAMENT_TIPS2_TEXT_T_CN				"T:"
#define FILAMENT_TIPS3_TEXT_T_CN				"正在進料"
#define FILAMENT_TIPS4_TEXT_T_CN				"正在退料"
#define FILAMENT_TIPS5_TEXT_T_CN				"溫度太低,請先預熱"
#define FILAMENT_TIPS6_TEXT_T_CN				"換料完成"

#if defined(TFT70)
  #define FILAMENT_REPLAYS_IDLE_TEXT_T_CN         "請按<進料>或<退料>進行換料!"
  #define FILAMENT_CHANGE_TEXT_T_CN				"待打印機暫停后,請按<進料>或<退料>進行換料!"

#elif defined(TFT35)

  #define FILAMENT_CHANGE_TEXT_T_CN				"待打印機暫停后,\n請按<進料>或<退料>"

#endif

#define FILAMENT_DIALOG_LOAD_HEAT_TIPS_T_CN		"準備進料,正在加熱,請稍等"
#define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_T_CN		"準備退料,正在加熱,請稍等"
#define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_T_CN           "加熱完成,請裝載耗材后,按<確定>開始進料"
#define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_T_CN           "請裝載耗,按<確定>開始進料!"
#define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_T_CN          "加熱完成,请按<確定>開始退料!"
#define FILAMENT_DIALOG_LOADING_TIPS_T_CN                 "正在進料,请等待耗材加載完成!"
#define FILAMENT_DIALOG_UNLOADING_TIPS_T_CN               "正在退料,请等待耗材卸載完成!"
#define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_T_CN           "進料完成,请按<確定>返回"
#define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_T_CN         "退料完成,请按<確定>返回"

#define PRE_HEAT_EXT_TEXT_T_CN					"噴頭"
#define PRE_HEAT_BED_TEXT_T_CN					"熱床"

#define FILE_LOADING_T_CN					"正在載入......"
#define NO_FILE_AND_CHECK_T_CN					"無文件!請插入sd卡/u盤!"
#define NO_FILE_T_CN					"無文件!"

#define EXTRUDER_TEMP_TEXT_T_CN		    "溫度"
#define EXTRUDER_E_LENGTH1_TEXT_T_CN    "噴頭"
#define EXTRUDER_E_LENGTH2_TEXT_T_CN    "噴頭"
#define EXTRUDER_E_LENGTH3_TEXT_T_CN    "噴頭"

#define ABOUT_TYPE_TEXT_T_CN			"Type: "
#define ABOUT_VERSION_TEXT_T_CN			"Firmware: "
#define ABOUT_WIFI_TEXT_T_CN			"Wifi: "

#define PRINTING_OPERATION_T_CN		    "操作"
#define PRINTING_PAUSE_T_CN				"暫停"
#define PRINTING_TEMP_T_CN				"溫度"
#define PRINTING_CHANGESPEED_T_CN		"變速"
#define PRINTING_RESUME_T_CN			"恢復"
#define PRINTING_STOP_T_CN				"停止"
#define PRINTING_MORE_T_CN				"更多"
#define PRINTING_EXTRUDER_T_CN			"擠出"
#define PRINTING_MOVE_T_CN              "移動"

#define EXTRUDER_SPEED_T_CN				"擠出"
#define MOVE_SPEED_T_CN					"移動"
#define EXTRUDER_SPEED_STATE_T_CN		"擠出速度"
#define MOVE_SPEED_STATE_T_CN			"移動速度"
#define STEP_1PERCENT_T_CN				"1%%"
#define STEP_5PERCENT_T_CN				"5%%"
#define STEP_10PERCENT_T_CN				"10%%"

#define ZOFFSET_T_CN                          "Z Offset"
#define ZOFFSET_INC_T_CN                       "增加"
#define ZOFFSET_DEC_T_CN                        "減少"

#define TITLE_READYPRINT_T_CN				    "準備打印"
#define TITLE_PREHEAT_T_CN						"預熱"
#define TITLE_MOVE_T_CN					        "移動"
#define TITLE_HOME_T_CN							"回零"
#define TITLE_EXTRUDE_T_CN						"擠出"
#define TITLE_LEVELING_T_CN						"調平"
#define TITLE_SET_T_CN							"設置"
#define TITLE_MORE_T_CN							"更多"
#define TITLE_CHOOSEFILE_T_CN					"選擇文件"
#define TITLE_PRINTING_T_CN						"正在打印"
#define TITLE_OPERATION_T_CN					"操作"
#define TITLE_ADJUST_T_CN						"調整"
#define	TITLE_WIRELESS_T_CN						"無線網絡"
#define	TITLE_FILAMENT_T_CN						"換料"
#define TITLE_ABOUT_T_CN						"關於"
#define TITLE_FAN_T_CN							"風扇"
#define TITLE_LANGUAGE_T_CN						"語言"
#define TITLE_PAUSE_T_CN						"暫停"
#define TITLE_CHANGESPEED_T_CN				    "變速"
#define TITLE_CLOUD_TEXT_T_CN				        "雲服務"
#define TITLE_DIALOG_CONFIRM_T_CN					"確認"
#define TITLE_FILESYS_T_CN								"文件系統"
#define TITLE_ZOFFSET_T_CN                    "Z Offset"

#define AUTO_SHUTDOWN_T_CN				"自動關機"
#define MANUAL_SHUTDOWN_T_CN			"手動關機"

#define DIALOG_CONFIRM_T_CN				"確定"
#define DIALOG_CANCLE_T_CN				"取消"
#define DIALOG_OK_T_CN					"確認"
#define DIALOG_RESET_T_CN				"重設"
#define DIALOG_RETRY_T_CN				"重試"
#define DIALOG_DISABLE_T_CN				"禁用"
#define DIALOG_PRINT_MODEL_T_CN			"打印模型?"
#define DIALOG_CANCEL_PRINT_T_CN		"停止打印?"
#define DIALOG_RETRY_T_CN									"重試"
#define DIALOG_STOP_T_CN									"停止"
#define DIALOG_REPRINT_FROM_BREAKPOINT_T_CN	                "從斷點續打?"
#define DIALOG_UNBIND_PRINTER_T_CN						    "解除綁定?"
#define DIALOG_ERROR_TIPS1_T_CN								"錯誤:找不到文件,請插入sd卡/u盤!"
#define DIALOG_ERROR_TIPS2_T_CN								"錯誤:通信失敗,請檢查波特率或主板硬件!"
#define DIALOG_ERROR_TIPS3_T_CN								"錯誤:文件名或文件路徑太長!"
#define DIALOG_CLOSE_MACHINE_T_CN             "正在關機......"
#define DIALOG_UNBIND_PRINTER_T_CN            "解除綁定?"

#define CALIBRATE_T_CN  "觸屏校準"
//****************英文***************************//
#define TOOL_TEXT_EN		    "Tool"
#define PREHEAT_TEXT_EN         "Preheat"
#define	MOVE_TEXT_EN		    "Move"
#define HOME_TEXT_EN            "Home"
#define PRINT_TEXT_EN		    "Printing"
#define EXTRUDE_TEXT_EN         "Extrusion"
#define LEVELING_TEXT_EN        "Leveling"
#define AUTO_LEVELING_TEXT_EN   "AutoLevel"
#define SET_TEXT_EN			    "Settings"
#define MORE_TEXT_EN            "More"

#define ADD_TEXT_EN			    "Add"
#define DEC_TEXT_EN			    "Dec"
#define EXTRUDER_1_TEXT_EN		"Extrusion1"
#define EXTRUDER_2_TEXT_EN		"Extrusion2"
#define HEATBED_TEXT_EN			"HeatBed"
#define TEXT_1C_EN				"1℃"
#define TEXT_5C_EN				"5℃"
#define TEXT_10C_EN				"10℃"
#define CLOSE_TEXT_EN			"Close"

#define BACK_TEXT_EN				    "Back"

#define TOOL_PREHEAT_EN            "Preheat"
#define TOOL_EXTRUDE_EN             "Extrusion"
#define TOOL_MOVE_EN                "Move"
#define TOOL_HOME_EN                "Home"
#define TOOL_LEVELING_EN               "Leveling"
#define TOOL_AUTO_LEVELING_EN          "AutoLevel"
#define TOOL_FILAMENT_EN                "Filament"
#define TOOL_MORE_EN                    "More"

#define AXIS_X_ADD_TEXT_EN				"X+"
#define AXIS_X_DEC_TEXT_EN				"X-"
#define AXIS_Y_ADD_TEXT_EN				"Y+"
#define AXIS_Y_DEC_TEXT_EN				"Y-"
#define AXIS_Z_ADD_TEXT_EN				"Z+"
#define AXIS_Z_DEC_TEXT_EN				"Z-"
#define TEXT_01MM_EN					"0.1mm"
#define TEXT_1MM_EN						"1mm"
#define TEXT_10MM_EN					"10mm"

#define HOME_X_TEXT_EN					"X"
#define HOME_Y_TEXT_EN					"Y"
#define HOME_Z_TEXT_EN					"Z"
#define HOME_ALL_TEXT_EN				"Home"
#define HOME_STOPMOVE_EN                "Quickstop"

#define PAGE_UP_TEXT_EN					"Page up"
#define PAGE_DOWN_TEXT_EN				"Page down"

#define EXTRUDER_IN_TEXT_EN		"In"
#define EXTRUDER_OUT_TEXT_EN		"Out"
#define EXTRUDE_1MM_TEXT_EN			"1mm"
#define EXTRUDE_5MM_TEXT_EN			"5mm"
#define EXTRUDE_10MM_TEXT_EN		"10mm"
#define EXTRUDE_LOW_SPEED_TEXT_EN		"Low"
#define EXTRUDE_MEDIUM_SPEED_TEXT_EN	"Normal"
#define EXTRUDE_HIGH_SPEED_TEXT_EN		"High"

#define LEVELING_POINT1_TEXT_EN				"Point1"
#define LEVELING_POINT2_TEXT_EN				"Point2"
#define LEVELING_POINT3_TEXT_EN				"Point3"
#define LEVELING_POINT4_TEXT_EN				"Point4"
#define LEVELING_POINT5_TEXT_EN				"Point5"

#define FILESYS_TEXT_EN								"FileSys"
#define WIFI_TEXT_EN								"WiFi"
#define FAN_TEXT_EN									"Fan"
#define ABOUT_TEXT_EN								"About"
#define BREAK_POINT_TEXT_EN						    "Continue"
#define FILAMENT_TEXT_EN							"Filament"
#define LANGUAGE_TEXT_EN							"Language"
#define MOTOR_OFF_TEXT_EN							"Moto-off"
#define SHUTDOWN_TEXT_EN							"Shutdown"

#define U_DISK_TEXT_EN								"USB"
#define SD_CARD_TEXT_EN								"SD"
#define WIFI_NAME_TEXT_EN							"WiFi: "
#define WIFI_KEY_TEXT_EN							"Key: "
#define WIFI_IP_TEXT_EN								"IP: "
#define WIFI_AP_TEXT_EN								"State: AP"
#define WIFI_STA_TEXT_EN							"State: STA"
#define WIFI_CONNECTED_TEXT_EN				        "Connected"
#define WIFI_DISCONNECTED_TEXT_EN			        "Disconnected"
#define WIFI_EXCEPTION_TEXT_EN				        "Exception"
#define WIFI_RECONNECT_TEXT_EN         "Reconnect"
#define CLOUD_TEXT_EN								"Cloud"
#define CLOUD_BIND_EN								"Bind"
#define CLOUD_UNBIND_EN							    "Unbind"
#define CLOUD_UNBINDING_EN					        "Unbinding"
#define CLOUD_DISCONNECTED_EN				        "Disconnected"
#define CLOUD_UNBINDED_EN						    "Unbinded"
#define CLOUD_BINDED_EN							    "Binded"
#define CLOUD_DISABLE_EN						    "Disable"

#define FAN_ADD_TEXT_EN								"Add"
#define FAN_DEC_TEXT_EN								"Dec"
#define FAN_OPEN_TEXT_EN							"100%"
#define FAN_HALF_TEXT_EN							"50%"
#define FAN_CLOSE_TEXT_EN							"Close"
#define FAN_TIPS1_TEXT_EN							"FAN"
#define FAN_TIPS2_TEXT_EN							"FAN\nClose"

#define FILAMENT_IN_TEXT_EN				"Load"
#define FILAMENT_OUT_TEXT_EN				"Unload"
#define FILAMENT_EXT0_TEXT_EN				"Extrusion1"
#define FILAMENT_EXT1_TEXT_EN				"Extrusion2"
#define FILAMENT_HEAT_TEXT_EN				"Preheat"					
#define FILAMENT_STOP_TEXT_EN				"Stop"
#define FILAMENT_CHANGE_TEXT_EN				"Filament replace"
#define FILAMENT_TIPS2_TEXT_EN				"T:"
#define FILAMENT_TIPS3_TEXT_EN				"Loading..."
#define FILAMENT_TIPS4_TEXT_EN				"Unloading..."
#define FILAMENT_TIPS5_TEXT_EN				"Temp is too low to go,please heat"
#define FILAMENT_TIPS6_TEXT_EN				"Completed"

#if defined(TFT70)
  #define FILAMENT_REPLAYS_IDLE_TEXT_EN         "Please click <Load> or <unload> \nto replace filament!"
  #define FILAMENT_CHANGE_TEXT_EN				"Please click <Load> or <unload>,\nAfter pinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_EN		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_EN		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_EN           "Heat completed,please load filament to extruder,and click <confirm> for start loading."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_EN           "Please load filament to extruder,and click <confirm> for start loading."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_EN          "Heat completed,please click <confirm> for start unloading.!"
  #define FILAMENT_DIALOG_LOADING_TIPS_EN                 "Is loading ,please wait!"
  #define FILAMENT_DIALOG_UNLOADING_TIPS_EN               "Is unloading,please wait!"
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_EN           "Load filament completed,click <confirm> for return!"
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_EN         "Unload filament completed,click <confirm> for return!"
#elif defined(TFT35)

  #define FILAMENT_CHANGE_TEXT_EN				"Please click <Load> \nor <unload>,After \npinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_EN		"Heating up the nozzle,\nplease wait..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_EN		"Heating up the nozzle,\nplease wait..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_EN           "Heat completed,please load filament \nto extruder,and click <confirm> \nfor start loading."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_EN           "Please load filament to extruder,\nand click <confirm> for start loading."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_EN          "Heat completed,please \nclick <confirm> for start unloading.!"
  #define FILAMENT_DIALOG_LOADING_TIPS_EN                 "Is loading ,please wait!"
  #define FILAMENT_DIALOG_UNLOADING_TIPS_EN               "Is unloading,please wait!"
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_EN           "Load filament completed,\nclick <confirm> for return!"
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_EN         "Unload filament completed,\nclick <confirm> for return!"
#endif

#define PRE_HEAT_EXT_TEXT_EN				"E"
#define PRE_HEAT_BED_TEXT_EN				"Bed"

#define FILE_LOADING_EN					"Loading......"
#if defined(TFT70)
#define NO_FILE_AND_CHECK_EN					"No files found!Please insert SD card or U disk!"
#elif defined(TFT35)
#define NO_FILE_AND_CHECK_EN					"  No files found!\n            Check the file system configuration!"
#endif
#define NO_FILE_EN					"No files found!"

#define EXTRUDER_TEMP_TEXT_EN				"Temper"
#define EXTRUDER_E_LENGTH1_TEXT_EN   "Extrusion1"
#define EXTRUDER_E_LENGTH2_TEXT_EN   "Extrusion2"
#define EXTRUDER_E_LENGTH3_TEXT_EN   "Extrusion3"

#define ABOUT_TYPE_TEXT_EN					    "Type: "
#define ABOUT_VERSION_TEXT_EN					"Firmware: "
#define ABOUT_WIFI_TEXT_EN						"WiFi: "

#define PRINTING_OPERATION_EN					"Option"
#define PRINTING_PAUSE_EN						"Pause"
#define PRINTING_TEMP_EN						"Temp."
#define PRINTING_CHANGESPEED_EN				    "Speed"
#define PRINTING_RESUME_EN						"Resume"
#define PRINTING_STOP_EN						"Stop"
#define PRINTING_MORE_EN						"More"
#define PRINTING_EXTRUDER_EN					"Extrusion"
#define PRINTING_MOVE_EN						"Move"

#define EXTRUDER_SPEED_EN						"Extrusion"
#define MOVE_SPEED_EN							"Move"
#define EXTRUDER_SPEED_STATE_EN					"Extrude Speed"
#define MOVE_SPEED_STATE_EN						"Move Speed"
#define STEP_1PERCENT_EN						"1%"
#define STEP_5PERCENT_EN						"5%"
#define STEP_10PERCENT_EN						"10%"

#define ZOFFSET_EN                          "Z Offset"
#define ZOFFSET_INC_EN                          "Add"
#define ZOFFSET_DEC_EN                          "Dec"

#define TITLE_READYPRINT_EN						"ReadyPrint"
#define TITLE_PREHEAT_EN						"Preheat"
#define TITLE_MOVE_EN					        "Move"
#define TITLE_HOME_EN							"Home"
#define TITLE_EXTRUDE_EN						"Extrusion"
#define TITLE_LEVELING_EN						"Leveling"
#define TITLE_SET_EN							"Settings"
#define TITLE_MORE_EN							"More"
#define TITLE_CHOOSEFILE_EN						"ChooseFile"
#define TITLE_PRINTING_EN						"Printing"
#define TITLE_OPERATION_EN						"Operation"
#define TITLE_ADJUST_EN							"Adjust"
#define	TITLE_WIRELESS_EN						"Wireless"
#define	TITLE_FILAMENT_EN						"Filament"
#define TITLE_ABOUT_EN							"About"
#define TITLE_FAN_EN							"Fan"
#define TITLE_LANGUAGE_EN						"Language"
#define TITLE_PAUSE_EN							"Pause"
#define TITLE_CHANGESPEED_EN				    "Speed"
#define TITLE_CLOUD_TEXT_EN				        "Cloud"
#define TITLE_DIALOG_CONFIRM_EN				"Confirm"
#define TITLE_FILESYS_EN								"FileSys"
#define TITLE_ZOFFSET_EN                    "Z Offset"

#define AUTO_SHUTDOWN_EN						"Auto"
#define MANUAL_SHUTDOWN_EN						"Manual"

#define DIALOG_CONFIRM_EN							"Confirm"
#define DIALOG_CANCLE_EN							"Cancel"
#define DIALOG_OK_EN								"OK"
#define DIALOG_RESET_EN								"Reset"
#define DIALOG_RETRY_EN								"Retry"
#define DIALOG_DISABLE_EN							"Disable"
#define DIALOG_PRINT_MODEL_EN				        "Print this model?"
#define DIALOG_CANCEL_PRINT_EN				        "Stop print?"
#define DIALOG_RETRY_EN								"Retry"
#define DIALOG_STOP_EN								"Stop"
#define DIALOG_REPRINT_FROM_BREAKPOINT_EN	        "Reprint from breakpoint?"
#define DIALOG_UNBIND_PRINTER_EN					"Unbind the printer?"
#define DIALOG_ERROR_TIPS1_EN						"Error:no file,please check it again."
#define DIALOG_ERROR_TIPS2_EN						"Error:transaction failed.please check display baudrate \nwhether as the same as mainboard!"
#define DIALOG_ERROR_TIPS3_EN		        "Error:file name or path is too long!"
#define DIALOG_CLOSE_MACHINE_EN             "Closing machine......"
#define DIALOG_UNBIND_PRINTER_EN            "Unbind the printer?"

#define CALIBRATE_EN  "Calibrate"
//****************日文*************************//
#define TOOL_TEXT_JP		"ツール"
#define PREHEAT_TEXT_JP     "予熱"
#define	MOVE_TEXT_JP		"モバイル"
#define HOME_TEXT_JP        "ゼロ"
#define PRINT_TEXT_JP		"プリント"
#define EXTRUDE_TEXT_JP     "押出"
#define LEVELING_TEXT_JP    "レベリング"
#define AUTO_LEVELING_TEXT_JP   "オートレベリング"
#define SET_TEXT_JP			    "セット\nアップ"
#define MORE_TEXT_JP            "もっと"

#define ADD_TEXT_JP			    "さらに"
#define DEC_TEXT_JP			    "リダクション"
#define EXTRUDER_1_TEXT_JP	    "シャワーノズル1"
#define EXTRUDER_2_TEXT_JP		"シャワーノズル1"
#define HEATBED_TEXT_JP			"ホットベッド"
#define TEXT_1C_JP				"1℃"
#define TEXT_5C_JP				"5℃"
#define TEXT_10C_JP				"10℃"
#define CLOSE_TEXT_JP			"クローズ"

#define BACK_TEXT_JP					"リターン"

#define TOOL_PREHEAT_JP            "预热"
#define TOOL_EXTRUDE_JP             "挤出"
#define TOOL_MOVE_JP                "移动"
#define TOOL_HOME_JP               "回零"
#define TOOL_LEVELING_JP               "调平"
#define TOOL_AUTO_LEVELING_JP         "自动调平"
#define TOOL_FILAMENT_JP                "换料"
#define TOOL_MORE_JP                    "更多"

#define AXIS_X_ADD_TEXT_JP				"X+"
#define AXIS_X_DEC_TEXT_JP				"X-"
#define AXIS_Y_ADD_TEXT_JP				"Y+"
#define AXIS_Y_DEC_TEXT_JP				"Y-"
#define AXIS_Z_ADD_TEXT_JP				"Z+"
#define AXIS_Z_DEC_TEXT_JP				"Z-"
#define TEXT_01MM_JP					"0.1mm"
#define TEXT_1MM_JP						"1mm"
#define TEXT_10MM_JP					"10mm"

#define HOME_X_TEXT_JP					"X"
#define HOME_Y_TEXT_JP					"Y"
#define HOME_Z_TEXT_JP					"Z"
#define HOME_ALL_TEXT_JP				"ゼロ"
#define HOME_STOPMOVE_JP                "Quickstop"

#define PAGE_UP_TEXT_JP					"前のページ"
#define PAGE_DOWN_TEXT_JP				"下一ページ"

#define EXTRUDER_IN_TEXT_JP		    "フィード"
#define EXTRUDER_OUT_TEXT_JP		    "OUT"
#define EXTRUDE_1MM_TEXT_JP			    "1mm"
#define EXTRUDE_5MM_TEXT_JP			    "5mm"
#define EXTRUDE_10MM_TEXT_JP		    "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_JP		"LOW"
#define EXTRUDE_MEDIUM_SPEED_TEXT_JP	"Medium"
#define EXTRUDE_HIGH_SPEED_TEXT_JP		"High"

#define LEVELING_POINT1_TEXT_JP				"Point1"
#define LEVELING_POINT2_TEXT_JP				"Point2"
#define LEVELING_POINT3_TEXT_JP			    "Point3"
#define LEVELING_POINT4_TEXT_JP				"Point4"
#define LEVELING_POINT5_TEXT_JP				"Point5"

#define FILESYS_TEXT_JP							    "FileSys"
#define WIFI_TEXT_JP							    "WIFI"
#define FAN_TEXT_JP								    "Fan"
#define ABOUT_TEXT_JP							    "About"
#define BREAK_POINT_TEXT_JP						    "Continue"
#define FILAMENT_TEXT_JP							"Filament"
#define LANGUAGE_TEXT_JP							"Language"
#define MOTO_OFF_TEXT_JP							"Moto-off"
#define SHUTDOWN_TEXT_JP							"Shutdown"

#define U_DISK_TEXT_JP								"USB"
#define SD_CARD_TEXT_JP								"SD"
#define WIFI_NAME_TEXT_JP							"WIFI: "
#define WIFI_KEY_TEXT_JP							"KEY: "
#define WIFI_IP_TEXT_JP								"IP: "
#define WIFI_AP_TEXT_JP								"STATE: AP"
#define WIFI_STA_TEXT_JP							"STATE: STA"
#define WIFI_CONNECTED_TEXT_JP				        "CONNECTED"
#define WIFI_DISCONNECTED_TEXT_JP			        "DISCONNECTED"
#define WIFI_EXCEPTION_TEXT_JP				        "EXCEPTION"
#define WIFI_RECONNECT_TEXT_JP         "Reconnect"
#define CLOUD_TEXT_JP								"Cloud"
#define CLOUD_BIND_JP								"Bind"
#define CLOUD_UNBIND_JP							    "Unbind"
#define CLOUD_UNBINDING_JP					        "Unbinding"
#define CLOUD_DISCONNECTED_JP				        "Disconnected"
#define CLOUD_UNBINDED_JP					        "Unbinded"
#define CLOUD_BINDED_JP						        "Binded"
#define CLOUD_DISABLE_JP						    "Disable"

#define FAN_ADD_TEXT_JP								"ADD"
#define FAN_DEC_TEXT_JP								"DEC"
#define FAN_OPEN_TEXT_JP							"100%"
#define FAN_HALF_TEXT_JP							"50%"
#define FAN_CLOSE_TEXT_JP							"Close"
#define FAN_TIPS1_TEXT_JP							"FAN\n%d"
#define FAN_TIPS2_TEXT_JP							"FAN\nClose"

#define FILAMENT_IN_TEXT_JP					"In"
#define FILAMENT_OUT_TEXT_JP				"Out"
#define FILAMENT_EXT0_TEXT_JP				"Extrusion1"
#define FILAMENT_EXT1_TEXT_JP				"Extrusion2"
#define FILAMENT_HEAT_TEXT_JP				"Preheat"					
#define FILAMENT_STOP_TEXT_JP				"Stop"
#define FILAMENT_CHANGE_TEXT_JP				"Filament replace"
#define FILAMENT_TIPS2_TEXT_JP				"T:%d℃/%d℃"
#define FILAMENT_TIPS3_TEXT_JP				"loading..."
#define FILAMENT_TIPS4_TEXT_JP				"unloading..."
#define FILAMENT_TIPS5_TEXT_JP				"Temp is too low to go,please heat"
#define FILAMENT_TIPS6_TEXT_JP				"Completed"

#define FILAMENT_CHANGE_TEXT_JP				"Please click <Load> \nor <unload>,After \npinter pause."
#define FILAMENT_DIALOG_LOAD_HEAT_TIPS_JP		"Heating up the nozzle,\nplease wait..."
#define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_JP		"Heating up the nozzle,\nplease wait..."
#define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_JP           "Heat completed,please load filament \nto extruder,and click <confirm> \nfor start loading."
#define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_JP           "Please load filament to extruder,\nand click <confirm> for start loading."
#define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_JP          "Heat completed,please \nclick <confirm> for start unloading.!"
#define FILAMENT_DIALOG_LOADING_TIPS_JP                 "Is loading ,please wait!"
#define FILAMENT_DIALOG_UNLOADING_TIPS_JP               "Is unloading,please wait!"
#define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_JP           "Load filament completed,\nclick <confirm> for return!"
#define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_JP         "Unload filament completed,\nclick <confirm> for return!"

#define PRE_HEAT_EXT_TEXT_JP				"E%d\n%d℃/%d℃"
#define PRE_HEAT_BED_TEXT_JP				"Bed%d\n%d℃/%d℃"

#define FILE_LOADING_JP					"にロード......"
#define NO_FILE_AND_CHECK_JP					"いいえファイル!\nファイルシステムをチェックしてください!"
#define NO_FILE_JP					"いいえファイル!"

#define EXTRUDER_TEMP_TEXT_JP				"T:%d℃"
#define EXTRUDER_E_LENGTH1_TEXT_JP          "E%d:%dmm"
#define EXTRUDER_E_LENGTH2_TEXT_JP          "E%d:%dcm"
#define EXTRUDER_E_LENGTH3_TEXT_JP          "E%d:%dm"

#define ABOUT_TYPE_TEXT_JP					"Type: "
#define ABOUT_VERSION_TEXT_JP				"Firmware: "
#define ABOUT_WIFI_TEXT_JP					"Wifi: "

#define PRINTING_OPERATION_JP				"Operation"
#define PRINTING_PAUSE_JP					"Pause"
#define PRINTING_TEMP_JP					"Temp."
#define PRINTING_CHANGESPEED_JP				"Speed"
#define PRINTING_RESUME_JP					"Resume"
#define PRINTING_STOP_JP					"Stop"
#define PRINTING_MORE_JP					"More"
#define PRINTING_EXTRUDER_JP				"Extruder"
#define PRINTING_MOVE_JP                    "Move"

#define EXTRUDER_SPEED_JP					"Extrude"
#define MOVE_SPEED_JP						"Move"
#define EXTRUDER_SPEED_STATE_JP				"Extrude Speed"
#define MOVE_SPEED_STATE_JP					"Move Speed"
#define STEP_1PERCENT_JP					"1%"
#define STEP_5PERCENT_JP					"5%"
#define STEP_10PERCENT_JP					"10%"

#define ZOFFSET_JP                          "Z Offset"
#define ZOFFSET_INC_JP                          "Add"
#define ZOFFSET_DEC_JP                          "Dec"

#define TITLE_READYPRINT_JP						"ReadyPrint"
#define TITLE_PREHEAT_JP						"Preheat"
#define TITLE_MOVE_JP					        "Move"
#define TITLE_HOME_JP							"Home"
#define TITLE_EXTRUDE_JP						"Extrude"
#define TITLE_LEVELING_JP						"Leveling"
#define TITLE_SET_JP							"Set"
#define TITLE_MORE_JP							"More"
#define TITLE_CHOOSEFILE_JP						"ChooseFile"
#define TITLE_PRINTING_JP						"Printing"
#define TITLE_OPERATION_JP						"Operation"
#define TITLE_ADJUST_JP							"Adjust"
#define	TITLE_WIRELESS_JP						"Wireless"
#define	TITLE_FILAMENT_JP						"Filament"
#define TITLE_ABOUT_JP							"About"
#define TITLE_FAN_JP							"Fan"
#define TITLE_LANGUAGE_JP						"Language"
#define TITLE_PAUSE_JP							"Pause"
#define TITLE_CHANGESPEED_JP				    "Speed"
#define TITLE_CLOUD_TEXT_JP				        "Cloud"
#define TITLE_DIALOG_CONFIRM_JP				"Confirm"
#define TITLE_FILESYS_JP								"FileSys"

#define AUTO_SHUTDOWN_JP					"Auto"
#define MANUAL_SHUTDOWN_JP					"Manual"

#define DIALOG_CONFIRM_JP					"Confirm"
#define DIALOG_CANCLE_JP					"Cancel"
#define DIALOG_OK_JP						"OK"
#define DIALOG_RESET_JP						"Reset"
#define DIALOG_RETRY_JP						"Retry"
#define DIALOG_DISABLE_JP					"Disable"
#define DIALOG_PRINT_MODEL_JP				"Print model?"
#define DIALOG_CANCEL_PRINT_JP				"Stop print?"
#define DIALOG_RETRY_JP						"Retry"
#define DIALOG_STOP_JP						"Stop"
#define DIALOG_REPRINT_FROM_BREAKPOINT_JP	                "Reprint from breakpoint?"
#define DIALOG_UNBIND_PRINTER_JP						    "Unbind the printer?"
#define DIALOG_ERROR_TIPS1_JP								"error:no file,please check it again."
#define DIALOG_ERROR_TIPS2_JP								"error:transaction failed.please check display baudrate \nwhether as the same as mainboard!"
#define DIALOG_ERROR_TIPS3_JP								"error:file name or path is too long!"
#define DIALOG_CLOSE_MACHINE_JP             "Closing machine......"
#define DIALOG_UNBIND_PRINTER_JP            "Unbind the printer?"
//***************德文****************************//
#define TOOL_TEXT_GN		        "Vorbereiten"
#define PREHEAT_TEXT_GN             "vorheizen"
#define	MOVE_TEXT_GN		        "Mobile"
#define HOME_TEXT_GN                "Null"
#define PRINT_TEXT_GN		        "drucken"
#define EXTRUDE_TEXT_GN             "Extrusion"
#define LEVELING_TEXT_GN            "Leveling"
#define AUTO_LEVELING_TEXT_GN       "Leveling"
#define SET_TEXT_GN			        "einrichten"
#define MORE_TEXT_GN                "mehr"

#define ADD_TEXT_GN			        "Zusatz"
#define DEC_TEXT_GN			        "Reduzierung"
#define EXTRUDER_1_TEXT_GN		    "Extrusion1"
#define EXTRUDER_2_TEXT_GN		    "Extrusion2"
#define HEATBED_TEXT_GN			    "Hot Bett"
#define TEXT_1C_GN					"1℃"
#define TEXT_5C_GN					"5℃"
#define TEXT_10C_GN					"10℃"
#define CLOSE_TEXT_GN				"schlie?en"

#define BACK_TEXT_GN					"Rückkehr"

#define TOOL_PREHEAT_GN            "预热"
#define TOOL_EXTRUDE_GN             "挤出"
#define TOOL_MOVE_GN                "移动"
#define TOOL_HOME_GN                "回零"
#define TOOL_LEVELING_GN               "调平"
#define TOOL_AUTO_LEVELING_GN         "自动调平"
#define TOOL_FILAMENT_GN                "换料"
#define TOOL_MORE_GN                    "更多"

#define AXIS_X_ADD_TEXT_GN				"X+"
#define AXIS_X_DEC_TEXT_GN				"X-"
#define AXIS_Y_ADD_TEXT_GN				"Y+"
#define AXIS_Y_DEC_TEXT_GN				"Y-"
#define AXIS_Z_ADD_TEXT_GN				"Z+"
#define AXIS_Z_DEC_TEXT_GN				"Z-"
#define TEXT_01MM_GN					"0.1mm"
#define TEXT_1MM_GN						"1mm"
#define TEXT_10MM_GN					"10mm"

#define HOME_X_TEXT_GN					"X"
#define HOME_Y_TEXT_GN					"Y"
#define HOME_Z_TEXT_GN					"Z"
#define HOME_ALL_TEXT_GN				"ALL"
#define HOME_STOPMOVE_GN                "Quickstop"

#define PAGE_UP_TEXT_GN					"früher"
#define PAGE_DOWN_TEXT_GN				"n?chste\nSeite"

#define EXTRUDER_ADD_TEXT_GN		    "Futter"
#define EXTRUDER_DEC_TEXT_GN		    "Stripper"
#define EXTRUDE_1MM_TEXT_GN			    "1mm"
#define EXTRUDE_5MM_TEXT_GN			    "5mm"
#define EXTRUDE_10MM_TEXT_GN		    "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_GN		"LOW"
#define EXTRUDE_MEDIUM_SPEED_TEXT_GN	"Mittlere"
#define EXTRUDE_HIGH_SPEED_TEXT_GN		"High"

#define LEVELING_POINT1_TEXT_GN				"Position1"
#define LEVELING_POINT2_TEXT_GN				"Position2"
#define LEVELING_POINT3_TEXT_GN				"Position3"
#define LEVELING_POINT4_TEXT_GN				"Position4"
#define LEVELING_POINT5_TEXT_GN				"Position5"

#define FILESYS_TEXT_GN						"FileSys"
#define WIFI_TEXT_GN						"WIFI"
#define FAN_TEXT_GN							"Fan"
#define ABOUT_TEXT_GN						"About"
#define BREAK_POINT_TEXT_GN					"Continu"
#define FILAMENT_TEXT_GN					"Filament"
#define LANGUAGE_TEXT_GN					"Language"
#define MOTO_OFF_TEXT_GN					"Moto-off"
#define SHUTDOWN_TEXT_GN					"Shutdown"

#define U_DISK_TEXT_GN						"USB"
#define SD_CARD_TEXT_GN						"SD"
#define WIFI_NAME_TEXT_GN					"WIFI: "
#define WIFI_KEY_TEXT_GN					"KEY: "
#define WIFI_IP_TEXT_GN						"IP: "
#define WIFI_AP_TEXT_GN						"STATE: AP"
#define WIFI_STA_TEXT_GN					"STATE: STA"
#define WIFI_CONNECTED_TEXT_GN				"CONNECTED"
#define WIFI_DISCONNECTED_TEXT_GN			"DISCONNECTED"
#define WIFI_EXCEPTION_TEXT_GN				"EXCEPTION"
#define WIFI_RECONNECT_TEXT_GN         "Reconnect"
#define CLOUD_TEXT_GN						"Cloud"
#define CLOUD_BIND_GN						"Bind"
#define CLOUD_UNBIND_GN						"Unbind"
#define CLOUD_UNBINDING_GN					"Unbinding"
#define CLOUD_DISCONNECTED_GN				"Disconnected"
#define CLOUD_UNBINDED_GN					"Unbinded"
#define CLOUD_BINDED_GN						"Binded"
#define CLOUD_DISABLE_GN					"Disable"

#define FAN_ADD_TEXT_GN						"ADD"
#define FAN_DEC_TEXT_GN						"DEC"
#define FAN_OPEN_TEXT_GN					"100%"
#define FAN_HALF_TEXT_GN					"50%"
#define FAN_CLOSE_TEXT_GN					"Close"
#define FAN_TIPS1_TEXT_GN					"FAN\n%d"
#define FAN_TIPS2_TEXT_GN					"FAN\nClose"

#define FILAMENT_IN_TEXT_GN					"In"
#define FILAMENT_OUT_TEXT_GN				"Out"
#define FILAMENT_EXT0_TEXT_GN				"Extrusion1"
#define FILAMENT_EXT1_TEXT_GN				"Extrusion2"
#define FILAMENT_HEAT_TEXT_GN				"Preheat"					
#define FILAMENT_STOP_TEXT_GN				"Stop"
#define FILAMENT_CHANGE_TEXT_GN				"Filament replace"
#define FILAMENT_TIPS2_TEXT_GN				"T:%d℃/%d℃"
#define FILAMENT_TIPS3_TEXT_GN				"loading..."
#define FILAMENT_TIPS4_TEXT_GN				"unloading..."
#define FILAMENT_TIPS5_TEXT_GN				"Temp is too low to go,please heat"
#define FILAMENT_TIPS6_TEXT_GN				"Completed"
#define FILAMENT_CHANGE_TEXT_GN				"Please click <Load> \nor <unload>,After \npinter pause."
#define FILAMENT_DIALOG_LOAD_HEAT_TIPS_GN		"Heating up the nozzle,\nplease wait..."
#define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_GN		"Heating up the nozzle,\nplease wait..."
#define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_GN           "Heat completed,please load filament \nto extruder,and click <confirm> \nfor start loading."
#define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_GN           "Please load filament to extruder,\nand click <confirm> for start loading."
#define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_GN          "Heat completed,please \nclick <confirm> for start unloading.!"
#define FILAMENT_DIALOG_LOADING_TIPS_GN                 "Is loading ,please wait!"
#define FILAMENT_DIALOG_UNLOADING_TIPS_GN               "Is unloading,please wait!"
#define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_GN           "Load filament completed,\nclick <confirm> for return!"
#define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_GN         "Unload filament completed,\nclick <confirm> for return!"

#define PRE_HEAT_EXT_TEXT_GN				"E%d\n%d℃/%d℃"
#define PRE_HEAT_BED_TEXT_GN				"Bed%d\n%d℃/%d℃"

#define FILE_LOADING_GN					"Loading......"
#define NO_FILE_AND_CHECK_GN					"No files found!\n   Check the file system configuration!"
#define NO_FILE_GN					"No files found!"

#define EXTRUDER_TEMP_TEXT_GN				"T:%d℃"
#define EXTRUDER_E_LENGTH1_TEXT_GN          "E%d:%dmm"
#define EXTRUDER_E_LENGTH2_TEXT_GN          "E%d:%dcm"
#define EXTRUDER_E_LENGTH3_TEXT_GN          "E%d:%dm"

#define ABOUT_TYPE_TEXT_GN					"Type: "
#define ABOUT_VERSION_TEXT_GN				"Firmware: "
#define ABOUT_WIFI_TEXT_GN					"Wifi: "

#define PRINTING_OPERATION_GN				"Operation"
#define PRINTING_PAUSE_GN					"Pause"
#define PRINTING_TEMP_GN					"Temp."
#define PRINTING_CHANGESPEED_GN				"Speed"
#define PRINTING_RESUME_GN					"Resume"
#define PRINTING_STOP_GN					"Stop"
#define PRINTING_MORE_GN					"More"
#define PRINTING_EXTRUDER_GN				"Extruder"
#define PRINTING_MOVE_GN                    "Move"

#define EXTRUDER_SPEED_GN					"Extrude"
#define MOVE_SPEED_GN						"Move"
#define EXTRUDER_SPEED_STATE_GN				"Extrude Speed"
#define MOVE_SPEED_STATE_GN					"Move Speed"
#define STEP_1PERCENT_GN					"1%"
#define STEP_5PERCENT_GN					"5%"
#define STEP_10PERCENT_GN					"10%"

#define ZOFFSET_GN                          "Z Offset"
#define ZOFFSET_INC_GN                          "Zusatz"
#define ZOFFSET_DEC_GN                          "Reduzierung"

#define TITLE_READYPRINT_GN						"ReadyPrint"
#define TITLE_PREHEAT_GN						"Preheat"
#define TITLE_MOVE_GN					        "Move"
#define TITLE_HOME_GN							"Home"
#define TITLE_EXTRUDE_GN						"Extrude"
#define TITLE_LEVELING_GN						"Leveling"
#define TITLE_SET_GN							"Set"
#define TITLE_MORE_GN							"More"
#define TITLE_CHOOSEFILE_GN						"ChooseFile"
#define TITLE_PRINTING_GN						"Printing"
#define TITLE_OPERATION_GN						"Operation"
#define TITLE_ADJUST_GN							"Adjust"
#define	TITLE_WIRELESS_GN						"Wireless"
#define	TITLE_FILAMENT_GN						"Filament"
#define TITLE_ABOUT_GN							"About"
#define TITLE_FAN_GN							"Fan"
#define TITLE_LANGUAGE_GN						"Language"
#define TITLE_PAUSE_GN							"Pause"
#define TITLE_CHANGESPEED_GN				    "Speed"
#define TITLE_CLOUD_TEXT_GN				        "Cloud"
#define TITLE_DIALOG_CONFIRM_GN				"Confirm"
#define TITLE_FILESYS_GN								"FileSys"

#define AUTO_SHUTDOWN_GN					"Auto"
#define MANUAL_SHUTDOWN_GN					"Manual"

#define DIALOG_CONFIRM_GN					"Confirm"
#define DIALOG_CANCLE_GN					"Cancel"
#define DIALOG_OK_GN						"OK"
#define DIALOG_RESET_GN						"Reset"
#define DIALOG_RETRY_GN						"Retry"
#define DIALOG_DISABLE_GN					"Disable"
#define DIALOG_PRINT_MODEL_GN				"Print model?"
#define DIALOG_CANCEL_PRINT_GN				"Stop print?"
#define DIALOG_RETRY_GN									"Retry"
#define DIALOG_STOP_GN									"Stop"
#define DIALOG_REPRINT_FROM_BREAKPOINT_GN	            "Reprint from breakpoint?"
#define DIALOG_UNBIND_PRINTER_GN						"Unbind the printer?"
#define DIALOG_ERROR_TIPS1_GN								"error:no file,please check it again."
#define DIALOG_ERROR_TIPS2_GN								"error:transaction failed.please check display baudrate \nwhether as the same as mainboard!"
#define DIALOG_ERROR_TIPS3_GN								"error:file name or path is too long!"
#define DIALOG_CLOSE_MACHINE_GN             "Closing machine......"
#define DIALOG_UNBIND_PRINTER_GN            "Unbind the printer?"

#define CALIBRATE_GN  "Calibrate"
//*************法文****************************//
#define TOOL_TEXT_FR		        "prêt"
#define PREHEAT_TEXT_FR             "Préchauffe"
#define	MOVE_TEXT_FR		        "Déplace"
#define HOME_TEXT_FR                "Acceuil"
#define PRINT_TEXT_FR		        "Impression"
#define EXTRUDE_TEXT_FR             "Extruder"
#define LEVELING_TEXT_FR            "Leveling"
#define AUTO_LEVELING_TEXT_FR       "AutoLevel"
#define SET_TEXT_FR			        "Config"
#define MORE_TEXT_FR                "Plus"

#define ADD_TEXT_FR			        "Ajouter"
#define DEC_TEXT_FR			        "Réduire"
#define EXTRUDER_1_TEXT_FR		    "Extr1"
#define EXTRUDER_2_TEXT_FR		    "Extr2"
#define HEATBED_TEXT_FR			    "Hotlit"
#define TEXT_1C_FR					"1℃"
#define TEXT_5C_FR					"5℃"
#define TEXT_10C_FR					"10℃"
#define CLOSE_TEXT_FR				"Off"

#define BACK_TEXT_FR					"Arrière"

#define TOOL_PREHEAT_FR            "Préchauffe"
#define TOOL_EXTRUDE_FR             "Extruder"
#define TOOL_MOVE_FR                "Déplace"
#define TOOL_HOME_FR                "Acceuil"
#define TOOL_LEVELING_FR               "Leveling"
#define TOOL_AUTO_LEVELING_FR         "AutoLevel"
#define TOOL_FILAMENT_FR                "Filament"
#define TOOL_MORE_FR                    "Plus"

#define AXIS_X_ADD_TEXT_FR				"X+"
#define AXIS_X_DEC_TEXT_FR				"X-"
#define AXIS_Y_ADD_TEXT_FR				"Y+"
#define AXIS_Y_DEC_TEXT_FR				"Y-"
#define AXIS_Z_ADD_TEXT_FR				"Z+"
#define AXIS_Z_DEC_TEXT_FR				"Z-"
#define TEXT_01MM_FR					"0.1mm"
#define TEXT_1MM_FR						"1mm"
#define TEXT_10MM_FR					"10mm"

#define HOME_X_TEXT_FR					"X"
#define HOME_Y_TEXT_FR					"Y"
#define HOME_Z_TEXT_FR					"Z"
#define HOME_ALL_TEXT_FR				"ALL"
#define HOME_STOPMOVE_FR                "Quickstop"

#define PAGE_UP_TEXT_FR					"En haut"
#define PAGE_DOWN_TEXT_FR				"En bas"

#define EXTRUDER_IN_TEXT_FR		    "Insérer"
#define EXTRUDER_OUT_TEXT_FR		    "éjecter"
#define EXTRUDE_1MM_TEXT_FR			    "1mm"
#define EXTRUDE_5MM_TEXT_FR			    "5mm"
#define EXTRUDE_10MM_TEXT_FR		    "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_FR		"Lente"
#define EXTRUDE_MEDIUM_SPEED_TEXT_FR	"Moyen"
#define EXTRUDE_HIGH_SPEED_TEXT_FR		"Rapide"

#define LEVELING_POINT1_TEXT_FR			"Premier"
#define LEVELING_POINT2_TEXT_FR			"Seconde"
#define LEVELING_POINT3_TEXT_FR			"Troisième"
#define LEVELING_POINT4_TEXT_FR			"Quatrième"
#define LEVELING_POINT5_TEXT_FR			"Cinquième"

#define FILESYS_TEXT_FR					"Fichier"
#define WIFI_TEXT_FR					"WiFi"
#define FAN_TEXT_FR						"Fan"
#define ABOUT_TEXT_FR					"A propos"
#define BREAK_POINT_TEXT_FR				"Continuer"
#define FILAMENT_TEXT_FR				"Remplacer"
#define LANGUAGE_TEXT_FR				"Langue"
#define MOTOR_OFF_TEXT_FR				"M-hors"
#define SHUTDOWN_TEXT_FR				"Eteindre"
#define MACHINE_PARA_FR					"Config"
#define U_DISK_TEXT_FR					"Clé usb"
#define SD_CARD_TEXT_FR					"Carte SD"
#define WIFI_NAME_TEXT_FR				"WiFi: "
#define WIFI_KEY_TEXT_FR				"Key: "
#define WIFI_IP_TEXT_FR					"IP: "
#define WIFI_AP_TEXT_FR					"Etat: AP"
#define WIFI_STA_TEXT_FR				"Etat: STA"
#define WIFI_CONNECTED_TEXT_FR			"Connecté"
#define WIFI_DISCONNECTED_TEXT_FR		"Déconnecté"
#define WIFI_EXCEPTION_TEXT_FR			"Exception"
#define WIFI_RECONNECT_TEXT_FR         "Reconnect"
#define CLOUD_TEXT_FR					"Cloud"
#define CLOUD_BIND_FR					"Lié"
#define CLOUD_UNBIND_FR					"Délier"
#define CLOUD_UNBINDING_FR				"Délier"
#define CLOUD_DISCONNECTED_FR			"Déconnecté"
#define CLOUD_UNBINDED_FR				"Délier"
#define CLOUD_BINDED_FR					"Lié"
#define CLOUD_DISABLE_FR				"Désactiver"

#define FAN_ADD_TEXT_FR					"Ajouter"
#define FAN_DEC_TEXT_FR					"Réduire"
#define FAN_OPEN_TEXT_FR				"100%"
#define FAN_HALF_TEXT_FR				"50%"
#define FAN_CLOSE_TEXT_FR				"0%"
#define FAN_TIPS1_TEXT_FR				"ventilateur"
#define FAN_TIPS2_TEXT_FR				"ventilateur\n0"

#define FILAMENT_IN_TEXT_FR						"Insérer"
#define FILAMENT_OUT_TEXT_FR					"éjecter"
#define FILAMENT_EXT0_TEXT_FR					"Extr1"
#define FILAMENT_EXT1_TEXT_FR					"Extr2"
#define FILAMENT_HEAT_TEXT_FR					"Preheat"					
#define FILAMENT_STOP_TEXT_FR					"Arrêter"
#define FILAMENT_CHANGE_TEXT_FR				"Filament remplacer"
#define FILAMENT_TIPS2_TEXT_FR				"T:"
#define FILAMENT_TIPS3_TEXT_FR				"Insérer le filament..."
#define FILAMENT_TIPS4_TEXT_FR				"éjecter le filament..."
#define FILAMENT_TIPS5_TEXT_FR				"Température trop basse pour démarrer, chauffez svp"
#define FILAMENT_TIPS6_TEXT_FR				"Terminé"

#if defined(TFT70)
  #define FILAMENT_REPLAYS_IDLE_TEXT_FR         "Please click <Insérer> or <éjecter> \nto replace filament!"
  #define FILAMENT_CHANGE_TEXT_FR				"Please click <Insérer> or <éjecter>,\nAfter pinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_FR		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_FR		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_FR           "Heat completed,please load filament to extruder,and click <Confirmer> for start loading."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_FR           "Please load filament to extruder,and click <Confirmer> for start loading."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_FR          "Heat completed,please click <Confirmer> for start unloading.!"
  #define FILAMENT_DIALOG_LOADING_TIPS_FR                 "Is loading ,please wait!"
  #define FILAMENT_DIALOG_UNLOADING_TIPS_FR               "Is unloading,please wait!"
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_FR           "Load filament completed,click <Confirmer> for return!"
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_FR         "Unload filament completed,click <Confirmer> for return!"
#elif defined(TFT35)
  #define FILAMENT_CHANGE_TEXT_FR				"Please click <Load> \nor <unload>,After \npinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_FR		"Heating up the nozzle,\nplease wait..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_FR		"Heating up the nozzle,\nplease wait..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_FR           "Heat completed,please load filament \nto extruder,and click <confirm> \nfor start loading."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_FR           "Please load filament to extruder,\nand click <confirm> for start loading."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_FR          "Heat completed,please \nclick <confirm> for start unloading.!"
  #define FILAMENT_DIALOG_LOADING_TIPS_FR                 "Is loading ,please wait!"
  #define FILAMENT_DIALOG_UNLOADING_TIPS_FR               "Is unloading,please wait!"
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_FR           "Load filament completed,\nclick <confirm> for return!"
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_FR         "Unload filament completed,\nclick <confirm> for return!"
#endif

#define PRE_HEAT_EXT_TEXT_FR						"E"
#define PRE_HEAT_BED_TEXT_FR						"Bed"

#define FILE_LOADING_FR				"Chargement......"
#if defined(TFT70)
#define NO_FILE_AND_CHECK_FR		"Aucun fichier trouvé! Insérez une carte SD ou un disque U!"
#elif defined(TFT35)
#define NO_FILE_AND_CHECK_FR		"Aucun fichier,vérifiez à nouveau!"
#endif
#define NO_FILE_FR					"Pas de fichier!"



#define EXTRUDER_TEMP_TEXT_FR				"Temper"
#define EXTRUDER_E_LENGTH1_TEXT_FR          "Extruder1"
#define EXTRUDER_E_LENGTH2_TEXT_FR          "Extruder2"
#define EXTRUDER_E_LENGTH3_TEXT_FR          "Extruder3"

#define ABOUT_TYPE_TEXT_FR					"Type: "
#define ABOUT_VERSION_TEXT_FR				"Firmware: "
#define ABOUT_WIFI_TEXT_FR					"Wifi: "

#define PRINTING_OPERATION_FR				"Option"
#define PRINTING_PAUSE_FR					"Pause"
#define PRINTING_TEMP_FR					"Temp."
#define PRINTING_CHANGESPEED_FR				"Speed"
#define PRINTING_RESUME_FR					"Reprendre"
#define PRINTING_STOP_FR					"Stop"
#define PRINTING_MORE_FR					"Plus"
#define PRINTING_EXTRUDER_FR				"Extruder"
#define PRINTING_MOVE_FR                    "Déplace"

#define EXTRUDER_SPEED_FR					"Extruder"
#define MOVE_SPEED_FR						"Déplace"
#define EXTRUDER_SPEED_STATE_FR				"Vitesse d'extrusion"
#define MOVE_SPEED_STATE_FR					"vitesse de déplacement"
#define STEP_1PERCENT_FR					"1%"
#define STEP_5PERCENT_FR					"5%"
#define STEP_10PERCENT_FR					"10%"

#define ZOFFSET_FR                          "Z Offset"
#define ZOFFSET_INC_FR                      "Ajouter"
#define ZOFFSET_DEC_FR                      "Réduire"

#define TITLE_READYPRINT_FR						"Prête"
#define TITLE_PREHEAT_FR						"Préchauffe"
#define TITLE_MOVE_FR					        "Déplace"
#define TITLE_HOME_FR							"Acceuil"
#define TITLE_EXTRUDE_FR						"Extruder"
#define TITLE_LEVELING_FR						"Leveling"
#define TITLE_SET_FR							"Paramètres"
#define TITLE_MORE_FR							"Plus"
#define TITLE_CHOOSEFILE_FR						"Fichier"
#define TITLE_PRINTING_FR						"Pimpression"
#define TITLE_OPERATION_FR						"Option"
#define TITLE_ADJUST_FR							"Réglage"
#define	TITLE_WIRELESS_FR						"Sans fil"
#define	TITLE_FILAMENT_FR						"Remplacer"
#define TITLE_ABOUT_FR							"A propos"
#define TITLE_FAN_FR							"Ventilateur"
#define TITLE_LANGUAGE_FR						"Langue"
#define TITLE_PAUSE_FR							"Pause"
#define TITLE_CHANGESPEED_FR				    "Speed"
#define TITLE_CLOUD_TEXT_FR				        "Cloud"
#define TITLE_DIALOG_CONFIRM_FR				"Confirm"
#define TITLE_FILESYS_FR								"FileSys"
#define TITLE_ZOFFSET_FR                    "Z Offset"

#define DIALOG_CLOSE_MACHINE_FR             "Closing machine......"

#define AUTO_SHUTDOWN_FR							"Auto"
#define MANUAL_SHUTDOWN_FR							"Manuel"

#define DIALOG_CONFIRM_FR							"Confirmer"
#define DIALOG_CANCLE_FR							"Annuler"
#define DIALOG_OK_FR								"OK"
#define DIALOG_RESET_FR								"Réinitialiser"
#define DIALOG_RETRY_FR								"Recommencez"
#define DIALOG_DISABLE_FR							"Disable"
#define DIALOG_PRINT_MODEL_FR				        "Imprimer le fichier?"
#define DIALOG_CANCEL_PRINT_FR				        "Arrêter?"

#define DIALOG_STOP_FR									"Arrêter"
#define DIALOG_REPRINT_FROM_BREAKPOINT_FR	            "Continuer?"
#define DIALOG_UNBIND_PRINTER_FR						"Non lié?"
#define DIALOG_ERROR_TIPS1_FR			"Erreur: Aucun fichier,vérifiez à nouveau."
#define DIALOG_ERROR_TIPS2_FR			"Erreur:La opération a échoué. \nVerifiez que le baudrate de l'écran et de \nla carte mère soient identique!"
#define DIALOG_ERROR_TIPS3_FR		    "Erreur: le nom du fichier ou le \nchemin d'accès est trop long."
#define DIALOG_UNBIND_PRINTER_FR        "Unbind the printer?"
#define DIALOG_WIFI_ENABLE_TIPS_FR "The wifi module is being configured,\nplease wait a moment....."
#define CALIBRATE_FR  "Calibrate"
//****************俄语***************************//
#define TOOL_TEXT_RU		    "инструмент"
#define PREHEAT_TEXT_RU         " нагрев"
#define	MOVE_TEXT_RU		    "движение"
#define HOME_TEXT_RU            "домой"
#define PRINT_TEXT_RU		    " печать"
#define EXTRUDE_TEXT_RU         "экструзия"
#define LEVELING_TEXT_RU        "уровень"
#define AUTO_LEVELING_TEXT_RU   "aвто"
#define SET_TEXT_RU			    "настройки"
#define MORE_TEXT_RU            "больше"

#define ADD_TEXT_RU			    "добавить"
#define DEC_TEXT_RU			    "уменьшить"
#define EXTRUDER_1_TEXT_RU		"экструдер1"
#define EXTRUDER_2_TEXT_RU		"экструдер2"
#define HEATBED_TEXT_RU			"стол"
#define TEXT_1C_RU				"1℃"
#define TEXT_5C_RU				"5℃"
#define TEXT_10C_RU				"10℃"
#define CLOSE_TEXT_RU			"выкл"

#define BACK_TEXT_RU					"назад"

#define TOOL_PREHEAT_RU            "нагрев"
#define TOOL_EXTRUDE_RU             "экструзия"
#define TOOL_MOVE_RU                "движение"
#define TOOL_HOME_RU                "домой"
#define TOOL_LEVELING_RU               "уровень"
#define TOOL_AUTO_LEVELING_RU         "aвто"
#define TOOL_FILAMENT_RU                "замена"
#define TOOL_MORE_RU                    "больше"

#define AXIS_X_ADD_TEXT_RU				"X+"
#define AXIS_X_DEC_TEXT_RU				"X-"
#define AXIS_Y_ADD_TEXT_RU				"Y+"
#define AXIS_Y_DEC_TEXT_RU				"Y-"
#define AXIS_Z_ADD_TEXT_RU				"Z+"
#define AXIS_Z_DEC_TEXT_RU				"Z-"
#define TEXT_01MM_RU					"0.1mm"
#define TEXT_1MM_RU						"1mm"
#define TEXT_10MM_RU					"10mm"

#define HOME_X_TEXT_RU					"X"
#define HOME_Y_TEXT_RU					"Y"
#define HOME_Z_TEXT_RU					"Z"
#define HOME_ALL_TEXT_RU				"Home"
#define HOME_STOPMOVE_RU                "Quickstop"

#define PAGE_UP_TEXT_RU					"вверх"
#define PAGE_DOWN_TEXT_RU				"вниз"

#define EXTRUDER_IN_TEXT_RU		        "втянуть"
#define EXTRUDER_OUT_TEXT_RU		    "выдавить"
#define EXTRUDE_1MM_TEXT_RU			    "1mm"
#define EXTRUDE_5MM_TEXT_RU			    "5mm"
#define EXTRUDE_10MM_TEXT_RU		    "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_RU		"мин"
#define EXTRUDE_MEDIUM_SPEED_TEXT_RU	"сред"
#define EXTRUDE_HIGH_SPEED_TEXT_RU		"выс"

#define LEVELING_POINT1_TEXT_RU				"1точка"
#define LEVELING_POINT2_TEXT_RU				"2точка"
#define LEVELING_POINT3_TEXT_RU				"3точка"
#define LEVELING_POINT4_TEXT_RU				"4точка"
#define LEVELING_POINT5_TEXT_RU				"5точка"

#define FILESYS_TEXT_RU						"система"
#define WIFI_TEXT_RU						"WiFi"
#define FAN_TEXT_RU							"вентилятор"
#define ABOUT_TEXT_RU						"инфо"
#define BREAK_POINT_TEXT_RU					"продолжить"
#define FILAMENT_TEXT_RU					"замена"
#define LANGUAGE_TEXT_RU					"язык"
#define MOTOR_OFF_TEXT_RU					"отклмотор"
#define SHUTDOWN_TEXT_RU					"выключение"
#define MACHINE_PARA_RU                     "Config"

#define U_DISK_TEXT_RU						"U диск"
#define SD_CARD_TEXT_RU						"SD диск"
#define WIFI_NAME_TEXT_RU					"WiFi: "
#define WIFI_KEY_TEXT_RU					"пароль: "
#define WIFI_IP_TEXT_RU						"IP: "
#define WIFI_AP_TEXT_RU						"режим: AP"
#define WIFI_STA_TEXT_RU					"режим: STA"
#define WIFI_CONNECTED_TEXT_RU				"подключен"
#define WIFI_DISCONNECTED_TEXT_RU			"не подключен"
#define WIFI_EXCEPTION_TEXT_RU				"исключение"
#define WIFI_RECONNECT_TEXT_RU         "Reconnect"
#define CLOUD_TEXT_RU						"облако"
#define CLOUD_BIND_RU						"соединён"
#define CLOUD_UNBIND_RU						"не соединён"
#define CLOUD_UNBINDING_RU					"Unbinding"
#define CLOUD_DISCONNECTED_RU				"Disconnected"
#define CLOUD_UNBINDED_RU					"Unbinded"
#define CLOUD_BINDED_RU						"Binded"
#define CLOUD_DISABLE_RU					"Disable"

#define FAN_ADD_TEXT_RU						"добавить"
#define FAN_DEC_TEXT_RU						"уменьшить"
#define FAN_OPEN_TEXT_RU					"100%"
#define FAN_HALF_TEXT_RU					"50%"
#define FAN_CLOSE_TEXT_RU					"откл"
#define FAN_TIPS1_TEXT_RU					"вентилятор"
#define FAN_TIPS2_TEXT_RU					"вентилятор\nоткл"

#define FILAMENT_IN_TEXT_RU					"втянуть"
#define FILAMENT_OUT_TEXT_RU				"выдавить"
#define FILAMENT_EXT0_TEXT_RU				"экструдер1"
#define FILAMENT_EXT1_TEXT_RU				"экструдер2"
#define FILAMENT_HEAT_TEXT_RU				"нагрев"					
#define FILAMENT_STOP_TEXT_RU				"стоп"
#define FILAMENT_CHANGE_TEXT_RU				"замена"
#define FILAMENT_TIPS2_TEXT_RU				"T:"
#define FILAMENT_TIPS3_TEXT_RU				"втянуть..."
#define FILAMENT_TIPS4_TEXT_RU				"вядавить..."
#define FILAMENT_TIPS5_TEXT_RU				"Низкая температура, \nнеобходим нагрев"
#define FILAMENT_TIPS6_TEXT_RU				"завершено"

#if defined(TFT70)
  #define FILAMENT_REPLAYS_IDLE_TEXT_RU         "Please click <втянуть> or <выдавить> \nto replace filament!"
  #define FILAMENT_CHANGE_TEXT_RU				"Please click <втянуть> or <выдавить>,\nAfter pinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_RU		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_RU		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_RU           "Heat completed,please load filament to extruder,and click <да> for start loading."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_RU           "Please load filament to extruder,and click <да> for start loading."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_RU          "Heat completed,please click <да> for start unloading.!"
  #define FILAMENT_DIALOG_LOADING_TIPS_RU                 "Is loading ,please wait!"
  #define FILAMENT_DIALOG_UNLOADING_TIPS_RU               "Is unloading,please wait!"
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_RU           "Load filament completed,click <да> for return!"
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_RU         "Unload filament completed,click <да> for return!"
#elif defined(TFT35)
  #define FILAMENT_CHANGE_TEXT_RU				"Please click <Load> \nor <unload>,After \npinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_RU		"Heating up the nozzle,\nplease wait..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_RU		"Heating up the nozzle,\nplease wait..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_RU           "Heat completed,please load filament \nto extruder,and click <confirm> \nfor start loading."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_RU           "Please load filament to extruder,\nand click <confirm> for start loading."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_RU          "Heat completed,please \nclick <confirm> for start unloading.!"
  #define FILAMENT_DIALOG_LOADING_TIPS_RU                 "Is loading ,please wait!"
  #define FILAMENT_DIALOG_UNLOADING_TIPS_RU               "Is unloading,please wait!"
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_RU           "Load filament completed,\nclick <confirm> for return!"
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_RU         "Unload filament completed,\nclick <confirm> for return!"
#endif

#define PRE_HEAT_EXT_TEXT_RU				"E"
#define PRE_HEAT_BED_TEXT_RU				"стол"

#define FILE_LOADING_RU					"загрузка......"
#if defined(TFT70)
#define NO_FILE_AND_CHECK_RU            "Файлы не найдены! Вставьте SD-карту или диск U!"
#elif defined(TFT35)
#define NO_FILE_AND_CHECK_RU					"нет файла,попробуйте ещё раз!"
#endif
#define NO_FILE_RU					"нет файла!"

#define EXTRUDER_TEMP_TEXT_RU				"температура"
#define EXTRUDER_E_LENGTH1_TEXT_RU          "экструзия1"
#define EXTRUDER_E_LENGTH2_TEXT_RU          "экструзия2"
#define EXTRUDER_E_LENGTH3_TEXT_RU          "экструзия3"

#define ABOUT_TYPE_TEXT_RU					"Type: "
#define ABOUT_VERSION_TEXT_RU				"Firmware: "
#define ABOUT_WIFI_TEXT_RU					"WiFi: "

#define PRINTING_OPERATION_RU				"управление"
#define PRINTING_PAUSE_RU					"пауза"
#define PRINTING_TEMP_RU					"темп"
#define PRINTING_CHANGESPEED_RU				"скорости"
#define PRINTING_RESUME_RU					"возобновить"
#define PRINTING_STOP_RU					"стоп"
#define PRINTING_MORE_RU					"больше"
#define PRINTING_EXTRUDER_RU			    "экстр"
#define PRINTING_MOVE_RU                    "движение"

#define EXTRUDER_SPEED_RU					"экстр"
#define MOVE_SPEED_RU						"движ"
#define EXTRUDER_SPEED_STATE_RU				"скорость экстр"
#define MOVE_SPEED_STATE_RU					"скорость движ"
#define STEP_1PERCENT_RU					"1%"
#define STEP_5PERCENT_RU					"5%"
#define STEP_10PERCENT_RU					"10%"

#define ZOFFSET_RU                          "Z Offset"
#define ZOFFSET_INC_RU                      "добавить"
#define ZOFFSET_DEC_RU                      "уменьшить"

#define TITLE_READYPRINT_RU						"готов к"
#define TITLE_PREHEAT_RU						"движение"
#define TITLE_MOVE_RU					        "движение"
#define TITLE_HOME_RU							"Home"
#define TITLE_EXTRUDE_RU						"экструзия"
#define TITLE_LEVELING_RU						"уровень"
#define TITLE_SET_RU							"настройки"
#define TITLE_MORE_RU							"больше"
#define TITLE_CHOOSEFILE_RU						"файла"
#define TITLE_PRINTING_RU						"печать"
#define TITLE_OPERATION_RU						"управление"
#define TITLE_ADJUST_RU							"регулировать"
#define	TITLE_WIRELESS_RU						"Wireless"
#define	TITLE_FILAMENT_RU						"замена"
#define TITLE_ABOUT_RU							"инфо"
#define TITLE_FAN_RU							"вентилятор"
#define TITLE_LANGUAGE_RU						"язык"
#define TITLE_PAUSE_RU							"пауза"
#define TITLE_CHANGESPEED_RU				    "скорости"
#define TILE_TOOL_RU						    "инструмент"
#define TITLE_CLOUD_TEXT_RU				        "Cloud"
#define TITLE_DIALOG_CONFIRM_RU				"Confirm"
#define TITLE_FILESYS_RU								"FileSys"
#define TITLE_ZOFFSET_RU                          "Z Offset"

#define AUTO_SHUTDOWN_RU					"авто-откл"
#define MANUAL_SHUTDOWN_RU					"ручн-откл"

#define DIALOG_CONFIRM_RU					"да"//"подтвердить"
#define DIALOG_CANCLE_RU					"отмена"
#define DIALOG_OK_RU						"да"
#define DIALOG_RESET_RU						"сброс"
#define DIALOG_RETRY_RU						"повтор"
#define DIALOG_DISABLE_RU					"запретить"
#define DIALOG_PRINT_MODEL_RU				"печать модели?"
#define DIALOG_CANCEL_PRINT_RU				"стоп?"
#define DIALOG_STOP_RU						"стоп"
#define DIALOG_REPRINT_FROM_BREAKPOINT_RU	"продолжить?"
#define DIALOG_UNBIND_PRINTER_RU			"разрыв?"
#define DIALOG_ERROR_TIPS1_RU				"ошибка:нет файла,попробуйте ещё раз."
#define DIALOG_ERROR_TIPS2_RU				"ошибка:сбой передачи. установите скорость \nпередачи данных как на плате управления!"
#define DIALOG_ERROR_TIPS3_RU				"ошибка: имя файла слишком длинное!"
#define DIALOG_CLOSE_MACHINE_RU             "Closing machine......"
#define DIALOG_UNBIND_PRINTER_RU            "Unbind the printer?"
#define DIALOG_WIFI_ENABLE_TIPS_RU "The wifi module is being configured,\nplease wait a moment....."
#define CALIBRATE_RU  "Calibrate"
//****************西班牙语***************************
#define TOOL_TEXT_SP		    "Ajustes"
#define PREHEAT_TEXT_SP         "Precalentar"//"precalent\nar"
#define	MOVE_TEXT_SP		    "Mover"
#define HOME_TEXT_SP            "Origen"
#define PRINT_TEXT_SP		    "Imprimir"
#define EXTRUDE_TEXT_SP         "Extrusor"
#define LEVELING_TEXT_SP        "Leveling"//"nivelac\nión"
#define AUTO_LEVELING_TEXT_SP   "Autolevel"//"auto\nnivelación"
#define SET_TEXT_SP			    "Config"
#define MORE_TEXT_SP            "Más"

#define ADD_TEXT_SP			    "Más"
#define DEC_TEXT_SP			    "Menos"
#define EXTRUDER_1_TEXT_SP		"Extrusor1"
#define EXTRUDER_2_TEXT_SP		"Extrusor2"
#define HEATBED_TEXT_SP			"Cama"
#define TEXT_1C_SP				"1℃"
#define TEXT_5C_SP				"5℃"
#define TEXT_10C_SP				"10℃"
#define CLOSE_TEXT_SP			"Apagar"

#define BACK_TEXT_SP			"Atrás"

#define TOOL_PREHEAT_SP            "Precalentar"
#define TOOL_EXTRUDE_SP             "Extrusor"
#define TOOL_MOVE_SP                "Mover"
#define TOOL_HOME_SP                "Origen"
#define TOOL_LEVELING_SP               "Leveling"
#define TOOL_AUTO_LEVELING_SP         "Autolevel"
#define TOOL_FILAMENT_SP                "Filamento"
#define TOOL_MORE_SP                    "Más"

#define AXIS_X_ADD_TEXT_SP		"X+"
#define AXIS_X_DEC_TEXT_SP		"X-"
#define AXIS_Y_ADD_TEXT_SP	    "Y+"
#define AXIS_Y_DEC_TEXT_SP		"Y-"
#define AXIS_Z_ADD_TEXT_SP		"Z+"
#define AXIS_Z_DEC_TEXT_SP		"Z-"
#define TEXT_01MM_SP			"0.1mm"
#define TEXT_1MM_SP				"1mm"
#define TEXT_10MM_SP			"10mm"

#define HOME_X_TEXT_SP			"EJE X"
#define HOME_Y_TEXT_SP			"EJE Y"
#define HOME_Z_TEXT_SP			"EJE Z"
#define HOME_ALL_TEXT_SP		"TODOS"
#define HOME_STOPMOVE_SP         "Quickstop"

#define PAGE_UP_TEXT_SP					"Arriba"
#define PAGE_DOWN_TEXT_SP				"Abajo"

#define EXTRUDER_IN_TEXT_SP		    "Dentro"
#define EXTRUDER_OUT_TEXT_SP		    "Fuera"
#define EXTRUDE_1MM_TEXT_SP			    "1mm"
#define EXTRUDE_5MM_TEXT_SP			    "5mm"
#define EXTRUDE_10MM_TEXT_SP		    "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_SP		"Baja"
#define EXTRUDE_MEDIUM_SPEED_TEXT_SP	"Media"
#define EXTRUDE_HIGH_SPEED_TEXT_SP		"Alta"

#define LEVELING_POINT1_TEXT_SP			"Primero"
#define LEVELING_POINT2_TEXT_SP			"Segundo"
#define LEVELING_POINT3_TEXT_SP			"Tercero"
#define LEVELING_POINT4_TEXT_SP			"Cuarto"
#define LEVELING_POINT5_TEXT_SP			"Quinto"

#define FILESYS_TEXT_SP					"Puerto"
#define WIFI_TEXT_SP					"WiFi"
#define FAN_TEXT_SP						"Ventilador"
#define ABOUT_TEXT_SP					"Acerca"
#define BREAK_POINT_TEXT_SP				"Continuar"
#define FILAMENT_TEXT_SP				"Filamento"
#define LANGUAGE_TEXT_SP				"Language"
#define MOTOR_OFF_TEXT_SP				"Apagar motor"
#define SHUTDOWN_TEXT_SP				"Apagar"
#define MACHINE_PARA_SP                 "Config"
#define U_DISK_TEXT_SP					"PENDRIVE"
#define SD_CARD_TEXT_SP					"SD"
#define WIFI_NAME_TEXT_SP				"WIFI: "
#define WIFI_KEY_TEXT_SP				"Contraseña: "
#define WIFI_IP_TEXT_SP					"IP: "
#define WIFI_AP_TEXT_SP					"Estado: AP"
#define WIFI_STA_TEXT_SP				"Estado: STA"
#define WIFI_CONNECTED_TEXT_SP				"Conectado"
#define WIFI_DISCONNECTED_TEXT_SP			"Desconectado"
#define WIFI_EXCEPTION_TEXT_SP				"Excepción"
#define WIFI_RECONNECT_TEXT_SP         "Reconnect"
#define CLOUD_TEXT_SP						"Nube"
#define CLOUD_BIND_SP						"Atado"
#define CLOUD_UNBIND_SP					    "Sin atar"
#define CLOUD_UNBINDING_SP					"Unbinding"
#define CLOUD_DISCONNECTED_SP				"Disconnected"
#define CLOUD_UNBINDED_SP					"Unbinded"
#define CLOUD_BINDED_SP						"Binded"
#define CLOUD_DISABLE_SP					"Disable"

#define FAN_ADD_TEXT_SP						"Más"
#define FAN_DEC_TEXT_SP						"Menos"
#define FAN_OPEN_TEXT_SP					"100%"
#define FAN_HALF_TEXT_SP					"50%"
#define FAN_CLOSE_TEXT_SP					"0%"
#define FAN_TIPS1_TEXT_SP					"ventilador"
#define FAN_TIPS2_TEXT_SP					"ventilador\n0"

#define FILAMENT_IN_TEXT_SP					"Dentro"
#define FILAMENT_OUT_TEXT_SP				"Fuera"
#define FILAMENT_EXT0_TEXT_SP				"Extrusor1"
#define FILAMENT_EXT1_TEXT_SP				"Extrusor2"
#define FILAMENT_HEAT_TEXT_SP				"Precalentar"					
#define FILAMENT_STOP_TEXT_SP				"Parar"
#define FILAMENT_CHANGE_TEXT_SP				"Filamento"
#define FILAMENT_TIPS2_TEXT_SP				"T:"
#define FILAMENT_TIPS3_TEXT_SP				"Dentro..."
#define FILAMENT_TIPS4_TEXT_SP				"Fuera..."
#define FILAMENT_TIPS5_TEXT_SP				"Temperatura demasiado baja, por favor calentar"
#define FILAMENT_TIPS6_TEXT_SP				"Completado"
#if defined(TFT70)
  #define FILAMENT_REPLAYS_IDLE_TEXT_SP         "Please click <Dentro> or <Fuera> \nto replace filament!"
  #define FILAMENT_CHANGE_TEXT_SP				"Please click <Dentro> or <Fuera>,\nAfter pinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_SP		"Calentando el extrusor, por favor espere..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_SP		"Calentando el extrusor, por favor espere..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_SP           "Temperatura alcanzada.Inserte el filamento y luego presione\"Confirmar\"para comenzar la carga."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_SP           "Inserte el filamento y luego presione\"Confirmar\"para comenzar la carga."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_SP          "Temperatura alcanzada.Presione\"Confirmar\"para retirar el filamento."
  #define FILAMENT_DIALOG_LOADING_TIPS_SP                 "Cargando filamento,por favor espere."
  #define FILAMENT_DIALOG_UNLOADING_TIPS_SP               "Retirando filamento,por favor espere."
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_SP           "Filamento cargado,presione\"Confirmar\"."
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_SP         "Filamento retirado,presione\"Confirmar\"."
#elif defined(TFT35)
  #define FILAMENT_CHANGE_TEXT_SP				"Please click <Load> \nor <unload>,After \npinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_SP		"Calentando el extrusor,\npor favor espere..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_SP		"Calentando el extrusor,\npor favor espere..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_SP           "Temperatura alcanzada.Inserte el \nfilamento y luego presione\"Confirmar\"\npara comenzar la carga."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_SP           "Inserte el filamento y \nluego presione\"Confirmar\"para \ncomenzar la carga."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_SP          "Temperatura alcanzada.\nPresione\"Confirmar\"para retirar \nel filamento."
  #define FILAMENT_DIALOG_LOADING_TIPS_SP                 "Cargando filamento,\npor favor espere."
  #define FILAMENT_DIALOG_UNLOADING_TIPS_SP               "Retirando filamento,\npor favor espere."
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_SP           "Filamento cargado,\npresione\"Confirmar\"."
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_SP         "Filamento retirado,\npresione\"Confirmar\"."
#endif

#define PRE_HEAT_EXT_TEXT_SP				"Extrusor"
#define PRE_HEAT_BED_TEXT_SP				"cama"

#define FILE_LOADING_SP					"Cargando......"
#if defined(TFT70)
#define NO_FILE_AND_CHECK_SP            "No se encontraron archivos! Por favor, inserte la tarjeta SD o el disco U!"
#elif defined(TFT35)
#define NO_FILE_AND_CHECK_SP					"Archivo no encontrado,\n         por favor insertar SD o disco USB!"
#endif
#define NO_FILE_SP					"Sin archivo!"



#define EXTRUDER_TEMP_TEXT_SP				"Temper"
#define EXTRUDER_E_LENGTH1_TEXT_SP          "Extrusor1"
#define EXTRUDER_E_LENGTH2_TEXT_SP          "Extrusor2"
#define EXTRUDER_E_LENGTH3_TEXT_SP          "Extrusor3"

#define ABOUT_TYPE_TEXT_SP					"Pantalla: "
#define ABOUT_VERSION_TEXT_SP				"Firmware: "
#define ABOUT_WIFI_TEXT_SP					"WiFi: "

#define PRINTING_OPERATION_SP				"Ajustes"
#define PRINTING_PAUSE_SP					"Pausar"
#define PRINTING_TEMP_SP					"Temp."
#define PRINTING_CHANGESPEED_SP				"Velocidad"
#define PRINTING_RESUME_SP					"Resumir"
#define PRINTING_STOP_SP					"Detener"
#define PRINTING_MORE_SP					"Más"
#define PRINTING_EXTRUDER_SP				"Extrusor"
#define PRINTING_MOVE_SP                    "Mover"

#define EXTRUDER_SPEED_SP					"Extrusor"
#define MOVE_SPEED_SP						"Mover"
#define EXTRUDER_SPEED_STATE_SP				"Extrusión"
#define MOVE_SPEED_STATE_SP					"Movimiento"
#define STEP_1PERCENT_SP					"1%"
#define STEP_5PERCENT_SP					"5%"
#define STEP_10PERCENT_SP					"10%"

#define ZOFFSET_SP                          "Z Offset"
#define ZOFFSET_INC_SP                      "Más"
#define ZOFFSET_DEC_SP                      "Menos"

#define TITLE_READYPRINT_SP						"Inicio"
#define TITLE_PREHEAT_SP						"Precalentar"
#define TITLE_MOVE_SP					        "Mover"
#define TITLE_HOME_SP						"Origen"
#define TITLE_EXTRUDE_SP						"Extrusor"
#define TITLE_LEVELING_SP						"Leveling"
#define TITLE_SET_SP							"Config"
#define TITLE_MORE_SP							"Más"
#define TITLE_CHOOSEFILE_SP						"Imprimir"
#define TITLE_PRINTING_SP						"Imprimir"
#define TITLE_OPERATION_SP						"Ajustes"
#define TITLE_ADJUST_SP							"Temp."
#define	TITLE_WIRELESS_SP						"Wireless"
#define	TITLE_FILAMENT_SP						"Filamento"
#define TITLE_ABOUT_SP							"Acerca"
#define TITLE_FAN_SP							"Ventilador"
#define TITLE_LANGUAGE_SP						"Language"
#define TITLE_PAUSE_SP							"Pausar"
#define TITLE_CHANGESPEED_SP				    "Velocidad"
#define TILE_TOOL_SP						    "Ajustes"
#define TITLE_CLOUD_TEXT_SP				        "Cloud"
#define TITLE_DIALOG_CONFIRM_SP				"Confirmar"
#define TITLE_FILESYS_SP								"Puerto"
#define TITLE_ZOFFSET_SP                          "Z Offset"

#define AUTO_SHUTDOWN_SP					"Auto"
#define MANUAL_SHUTDOWN_SP					"manual"

#define DIALOG_CONFIRM_SP					"Confirmar"
#define DIALOG_CANCLE_SP					"Cancelar"
#define DIALOG_OK_SP						"OK"
#define DIALOG_RESET_SP						"Resetear"
#define DIALOG_RETRY_SP						"Reintentar"
#define DIALOG_DISABLE_SP					"Desactivar"
#define DIALOG_PRINT_MODEL_SP				"¿Está seguro?"
#define DIALOG_CANCEL_PRINT_SP				"¿Está seguro que desea detener la impresión?"

#define DIALOG_RETRY_SP						"Reintentar"
#define DIALOG_STOP_SP						"Stop"
#define DIALOG_REPRINT_FROM_BREAKPOINT_SP	"Reprint from breakpoint?"
#define DIALOG_UNBIND_PRINTER_SP			"Unbind the printer?"
#define DIALOG_ERROR_TIPS1_SP				"Error:archivo no encontrado,\npor favor insertar SD o disco USB."
#define DIALOG_ERROR_TIPS2_SP				"error:transacción fallida, \nconfigurar  baudrate del \ndisplay para la placa base!"
#define DIALOG_ERROR_TIPS3_SP				"Error : nombre de archivo o \nruta demasiado largo!"
#define DIALOG_CLOSE_MACHINE_SP             "Closing machine......"
#define DIALOG_UNBIND_PRINTER_SP            "Unbind the printer?"
#define DIALOG_WIFI_ENABLE_TIPS_SP "The wifi module is being configured,\nplease wait a moment....."
#define CALIBRATE_SP  "Calibrate"

#if 0
//****************希腊语***************************//
#define TOOL_TEXT_GR		"Tool"
#define PREHEAT_TEXT_GR "Preheat"
#define	MOVE_TEXT_GR		"Move"
#define HOME_TEXT_GR  "Home"
#define PRINT_TEXT_GR		"Print"
#define EXTRUDE_TEXT_GR "Extrude"
#define LEVELING_TEXT_GR "Leveling"
#define AUTO_LEVELING_TEXT_GR "AutoLevel"
#define SET_TEXT_GR		"Set"
#define MORE_TEXT_GR     "More"

#define ADD_TEXT_GR			"ADD"
#define DEC_TEXT_GR			"DEC"
#define EXTRUDER_1_TEXT_GR		"Extruder1"
#define EXTRUDER_2_TEXT_GR		"Extruder2"
#define HEATBED_TEXT_GR			"HeatBed"
#define TEXT_1C_GR						"1℃"
#define TEXT_5C_GR						"5℃"
#define TEXT_10C_GR					"10℃"
#define CLOSE_TEXT_GR				"Close"

#define BACK_TEXT_GR					"Back"

#define TOOL_PREHEAT_GR            "Precalentar"
#define TOOL_EXTRUDE_GR             "Extrusor"
#define TOOL_MOVE_GR                "Mover"
#define TOOL_HOME_GR                "Origen"
#define TOOL_LEVELING_GR               "Leveling"
#define TOOL_AUTO_LEVELING_GR         "Autolevel"
#define TOOL_FILAMENT_GR                "Filamento"
#define TOOL_MORE_GR                    "Más"

#define AXIS_X_ADD_TEXT_GR				"X+"
#define AXIS_X_DEC_TEXT_GR				"X-"
#define AXIS_Y_ADD_TEXT_GR				"Y+"
#define AXIS_Y_DEC_TEXT_GR				"Y-"
#define AXIS_Z_ADD_TEXT_GR				"Z+"
#define AXIS_Z_DEC_TEXT_GR				"Z-"
#define TEXT_01MM_GR							"0.1mm"
#define TEXT_1MM_GR							"1mm"
#define TEXT_10MM_GR							"10mm"

#define HOME_X_TEXT_GR						"X"
#define HOME_Y_TEXT_GR						"Y"
#define HOME_Z_TEXT_GR						"Z"
#define HOME_ALL_TEXT_GR					"Home"

#define PAGE_UP_TEXT_GR					"Page up"
#define PAGE_DOWN_TEXT_GR				"Page down"

#define EXTRUDER_IN_TEXT_GR		"IN"
#define EXTRUDER_OUT_TEXT_GR		"OUT"
#define EXTRUDE_1MM_TEXT_GR			"1mm"
#define EXTRUDE_5MM_TEXT_GR			"5mm"
#define EXTRUDE_10MM_TEXT_GR		"10mm"
#define EXTRUDE_LOW_SPEED_TEXT_GR		"LOW"
#define EXTRUDE_MEDIUM_SPEED_TEXT_GR	"Medium"
#define EXTRUDE_HIGH_SPEED_TEXT_GR		"High"

#define LEVELING_POINT1_TEXT_GR				"Point1"
#define LEVELING_POINT2_TEXT_GR				"Point2"
#define LEVELING_POINT3_TEXT_GR			"Point3"
#define LEVELING_POINT4_TEXT_GR				"Point4"
#define LEVELING_POINT5_TEXT_GR				"Point5"

#define FILESYS_TEXT_GR								"FileSys"
#define WIFI_TEXT_GR									"WIFI"
#define FAN_TEXT_GR										"Fan"
#define ABOUT_TEXT_GR									"About"
#define BREAK_POINT_TEXT_GR						"Continu"
#define FILAMENT_TEXT_GR							"Filament"
#define LANGUAGE_TEXT_GR							"Language"
#define MOTOR_OFF_TEXT_GR							"Moto-off"
#define SHUTDOWN_TEXT_GR							"Shutdown"

#define U_DISK_TEXT_GR								"USB"
#define SD_CARD_TEXT_GR								"SD"
#define WIFI_NAME_TEXT_GR							"WIFI: "
#define WIFI_KEY_TEXT_GR							"KEY: "
#define WIFI_IP_TEXT_GR								"IP: "
#define WIFI_AP_TEXT_GR								"STATE: AP"
#define WIFI_STA_TEXT_GR							"STATE: STA"
#define WIFI_CONNECTED_TEXT_GR				"CONNECTED"
#define WIFI_DISCONNECTED_TEXT_GR			"DISCONNECTED"
#define WIFI_EXCEPTION_TEXT_GR				"EXCEPTION"
#define CLOUD_TEXT_GR								"Cloud"
#define CLOUD_BIND_GR								"Bind"
#define CLOUD_UNBIND_GR							"Unbind"
#define CLOUD_UNBINDING_GR					"Unbinding"
#define CLOUD_DISCONNECTED_GR				"Disconnected"
#define CLOUD_UNBINDED_GR						"Unbinded"
#define CLOUD_BINDED_GR							"Binded"
#define CLOUD_DISABLE_GR						"Disable"
#define WIFI_RECONNECT_TEXT_GR         "Reconnect"

#define FAN_ADD_TEXT_GR								"ADD"
#define FAN_DEC_TEXT_GR								"DEC"
#define FAN_OPEN_TEXT_GR							"100%"
#define FAN_HALF_TEXT_GR							"50%"
#define FAN_CLOSE_TEXT_GR							"Close"
#define FAN_TIPS1_TEXT_GR								"FAN\n%d"
#define FAN_TIPS2_TEXT_GR								"FAN\nClose"

#define FILAMENT_IN_TEXT_GR						"In"
#define FILAMENT_OUT_TEXT_GR					"Out"
#define FILAMENT_EXT0_TEXT_GR					"E1"
#define FILAMENT_EXT1_TEXT_GR					"E2"
#define FILAMENT_HEAT_TEXT_GR					"Preheat"					
#define FILAMENT_STOP_TEXT_GR					"Stop"
#define FILAMENT_CHANGE_TEXT_GR				"Filament replace"
#define FILAMENT_TIPS2_TEXT_GR				"T:%d℃/%d℃"
#define FILAMENT_TIPS3_TEXT_GR				"loading..."
#define FILAMENT_TIPS4_TEXT_GR				"unloading..."
#define FILAMENT_TIPS5_TEXT_GR				"Temp is too low to go,please heat"
#define FILAMENT_TIPS6_TEXT_GR				"Completed"

#define PRE_HEAT_EXT_TEXT_GR						"E%d\n%d℃/%d℃"
#define PRE_HEAT_BED_TEXT_GR						"Bed\n%d℃/%d℃"

#define FILE_LOADING_GR				"Loading......"
#define NO_FILE_AND_CHECK_GR					"No files found!\nCheck the file system configuration!"
#define NO_FILE_GR					"No files found!"



#define EXTRUDER_TEMP_TEXT_GR				"T:%d℃"
#define EXTRUDER_E_LENGTH1_TEXT_GR   "E%d:%dmm"
#define EXTRUDER_E_LENGTH2_TEXT_GR   "E%d:%dcm"
#define EXTRUDER_E_LENGTH3_TEXT_GR   "E%d:%dm"

#define ABOUT_TYPE_TEXT_GR							"Type: "
#define ABOUT_VERSION_TEXT_GR					"Firmware: "
#define ABOUT_WIFI_TEXT_GR							"WiFi: "

#define PRINTING_OPERATION_GR					"Operation"
#define PRINTING_PAUSE_GR						"Pause"
#define PRINTING_TEMP_GR								"Temp."
#define PRINTING_CHANGESPEED_GR				"Speed"
#define PRINTING_RESUME_GR						"Resume"
#define PRINTING_STOP_GR								"Stop"
#define PRINTING_MORE_GR								"More"
#define PRINTING_EXTRUDER_GR					"Extruder"

#define EXTRUDER_SPEED_GR							"Extrude"
#define MOVE_SPEED_GR									"Move"
#define EXTRUDER_SPEED_STATE_GR							"Extrude Speed\n%d%%"
#define MOVE_SPEED_STATE_GR									"Move Speed\n%d%%"
#define STEP_1PERCENT_GR										"1%"
#define STEP_5PERCENT_GR										"5%"
#define STEP_10PERCENT_GR										"10%"

#define TILE_READYPRINT_GR							"ReadyPrint"
#define TILE_CHOOSEFILE_GR							"ChooseFile"
#define TILE_PRINTING_GR								"Printing"
#define TILE_OPERATION_GR								"Operation"
#define TILE_ADJUST_GR									"Adjust"
#define	TILE_WIRELESS_GR								"Wireless"
#define TITLE_CLOUD_TEXT_GR				        "Cloud"
#define TITILE_DIALOG_CONFIRM_GR				"Confirm"

#define AUTO_SHUTDOWN_GR								"Auto"
#define MANUAL_SHUTDOWN_GR							"Manual"

#define DIALOG_CONFIRM_GR							"Confirm"
#define DIALOG_CANCLE_GR							"Cancel"
#define DIALOG_OK_GR									"OK"
#define DIALOG_RESET_GR								"Reset"
#define DIALOG_RETRY_GR								"Retry"
#define DIALOG_DISABLE_GR							"Disable"
#define DIALOG_PRINT_MODEL_GR					"Print model?"
#define DIALOG_CANCEL_PRINT_GR				"Stop print?"
#define DIALOG_STOP_GR									"Stop"
#define DIALOG_REPRINT_FROM_BREAKPOINT_GR	"Reprint from breakpoint?"
#define DIALOG_UNBIND_PRINTER_GR						"Unbind the printer?"
#define DIALOG_ERROR_TIPS1_GR								"error:no file,please check it again."
#define DIALOG_ERROR_TIPS2_GR								"error:transaction failed.please check display baudrate \nwhether as the same as mainboard!"
#define DIALOG_ERROR_TIPS3_GR								"error:file name or path is too long!"
#define DIALOG_CLOSE_MACHINE_GR             "Closing machine......"
#define DIALOG_UNBIND_PRINTER_GR            "Unbind the printer?"

#define CALIBRATE_GR  "Calibrate"
//****************土耳其语***************************//
#define TOOL_TEXT_TU		"Tool"
#define PREHEAT_TEXT_TU "Preheat"
#define	MOVE_TEXT_TU		"Move"
#define HOME_TEXT_TU  "Home"
#define PRINT_TEXT_TU		"Print"
#define EXTRUDE_TEXT_TU "Extrude"
#define LEVELING_TEXT_TU "Leveling"
#define AUTO_LEVELING_TEXT_TU "AutoLevel"
#define SET_TEXT_TU		"Set"
#define MORE_TEXT_TU     "More"

#define ADD_TEXT_TU			"ADD"
#define DEC_TEXT_TU			"DEC"
#define EXTRUDER_1_TEXT_TU		"Extruder1"
#define EXTRUDER_2_TEXT_TU		"Extruder2"
#define HEATBED_TEXT_TU			"HeatBed"
#define TEXT_1C_TU						"1℃"
#define TEXT_5C_TU						"5℃"
#define TEXT_10C_TU					"10℃"
#define CLOSE_TEXT_TU				"Close"

#define BACK_TEXT_TU					"Back"


#define TOOL_PREHEAT_TU            "Precalentar"
#define TOOL_EXTRUDE_TU             "Extrusor"
#define TOOL_MOVE_TU                "Mover"
#define TOOL_HOME_TU                "Origen"
#define TOOL_LEVELING_TU               "Leveling"
#define TOOL_AUTO_LEVELING_TU         "Autolevel"
#define TOOL_FILAMENT_TU                "Filamento"
#define TOOL_MORE_TU                    "Más"

#define AXIS_X_ADD_TEXT_TU				"X+"
#define AXIS_X_DEC_TEXT_TU				"X-"
#define AXIS_Y_ADD_TEXT_TU				"Y+"
#define AXIS_Y_DEC_TEXT_TU				"Y-"
#define AXIS_Z_ADD_TEXT_TU				"Z+"
#define AXIS_Z_DEC_TEXT_TU				"Z-"
#define TEXT_01MM_TU							"0.1mm"
#define TEXT_1MM_TU							"1mm"
#define TEXT_10MM_TU							"10mm"

#define HOME_X_TEXT_TU						"X"
#define HOME_Y_TEXT_TU						"Y"
#define HOME_Z_TEXT_TU						"Z"
#define HOME_ALL_TEXT_TU					"Home"

#define PAGE_UP_TEXT_TU					"Page up"
#define PAGE_DOWN_TEXT_TU				"Page down"

#define EXTRUDER_IN_TEXT_TU		"IN"
#define EXTRUDER_OUT_TEXT_TU		"OUT"
#define EXTRUDE_1MM_TEXT_TU			"1mm"
#define EXTRUDE_5MM_TEXT_TU			"5mm"
#define EXTRUDE_10MM_TEXT_TU		"10mm"
#define EXTRUDE_LOW_SPEED_TEXT_TU		"LOW"
#define EXTRUDE_MEDIUM_SPEED_TEXT_TU	"Medium"
#define EXTRUDE_HIGH_SPEED_TEXT_TU		"High"

#define LEVELING_POINT1_TEXT_TU				"Point1"
#define LEVELING_POINT2_TEXT_TU				"Point2"
#define LEVELING_POINT3_TEXT_TU			"Point3"
#define LEVELING_POINT4_TEXT_TU				"Point4"
#define LEVELING_POINT5_TEXT_TU				"Point5"

#define FILESYS_TEXT_TU								"FileSys"
#define WIFI_TEXT_TU									"WIFI"
#define FAN_TEXT_TU										"Fan"
#define ABOUT_TEXT_TU									"About"
#define BREAK_POINT_TEXT_TU						"Continu"
#define FILAMENT_TEXT_TU							"Filament"
#define LANGUAGE_TEXT_TU							"Language"
#define MOTOR_OFF_TEXT_TU							"Moto-off"
#define SHUTDOWN_TEXT_TU							"Shutdown"

#define U_DISK_TEXT_TU								"USB"
#define SD_CARD_TEXT_TU								"SD"
#define WIFI_NAME_TEXT_TU							"WIFI: "
#define WIFI_KEY_TEXT_TU							"KEY: "
#define WIFI_IP_TEXT_TU								"IP: "
#define WIFI_AP_TEXT_TU								"STATE: AP"
#define WIFI_STA_TEXT_TU							"STATE: STA"
#define WIFI_CONNECTED_TEXT_TU				"CONNECTED"
#define WIFI_DISCONNECTED_TEXT_TU			"DISCONNECTED"
#define WIFI_EXCEPTION_TEXT_TU				"EXCEPTION"
#define CLOUD_TEXT_TU								"Cloud"
#define CLOUD_BIND_TU								"Bind"
#define CLOUD_UNBIND_TU							"Unbind"
#define CLOUD_UNBINDING_TU					"Unbinding"
#define CLOUD_DISCONNECTED_TU				"Disconnected"
#define CLOUD_UNBINDED_TU						"Unbinded"
#define CLOUD_BINDED_TU							"Binded"
#define CLOUD_DISABLE_TU						"Disable"

#define FAN_ADD_TEXT_TU								"ADD"
#define FAN_DEC_TEXT_TU								"DEC"
#define FAN_OPEN_TEXT_TU							"100%"
#define FAN_HALF_TEXT_TU							"50%"
#define FAN_CLOSE_TEXT_TU							"Close"
#define FAN_TIPS1_TEXT_TU								"FAN\n%d"
#define FAN_TIPS2_TEXT_TU								"FAN\nClose"

#define FILAMENT_IN_TEXT_TU						"In"
#define FILAMENT_OUT_TEXT_TU					"Out"
#define FILAMENT_EXT0_TEXT_TU					"E1"
#define FILAMENT_EXT1_TEXT_TU					"E2"
#define FILAMENT_HEAT_TEXT_TU					"Preheat"					
#define FILAMENT_STOP_TEXT_TU					"Stop"
#define FILAMENT_CHANGE_TEXT_TU				"Filament replace"
#define FILAMENT_TIPS2_TEXT_TU				"T:%d℃/%d℃"
#define FILAMENT_TIPS3_TEXT_TU				"loading..."
#define FILAMENT_TIPS4_TEXT_TU				"unloading..."
#define FILAMENT_TIPS5_TEXT_TU				"Temp is too low to go,please heat"
#define FILAMENT_TIPS6_TEXT_TU				"Completed"

#define PRE_HEAT_EXT_TEXT_TU						"E%d\n%d℃/%d℃"
#define PRE_HEAT_BED_TEXT_TU						"Bed\n%d℃/%d℃"

#define FILE_LOADING_TU				"Loading......"
#define NO_FILE_AND_CHECK_TU					"No files found!\nCheck the file system configuration!"
#define NO_FILE_TU					"No files found!"



#define EXTRUDER_TEMP_TEXT_TU				"T:%d℃"
#define EXTRUDER_E_LENGTH1_TEXT_TU   "E%d:%dmm"
#define EXTRUDER_E_LENGTH2_TEXT_TU   "E%d:%dcm"
#define EXTRUDER_E_LENGTH3_TEXT_TU   "E%d:%dm"

#define ABOUT_TYPE_TEXT_TU							"Type: "
#define ABOUT_VERSION_TEXT_TU					"Firmware: "
#define ABOUT_WIFI_TEXT_TU							"WiFi: "

#define PRINTING_OPERATION_TU					"Operation"
#define PRINTING_PAUSE_TU						"Pause"
#define PRINTING_TEMP_TU								"Temp."
#define PRINTING_CHANGESPEED_TU				"Speed"
#define PRINTING_RESUME_TU						"Resume"
#define PRINTING_STOP_TU								"Stop"
#define PRINTING_MORE_TU								"More"
#define PRINTING_EXTRUDER_TU					"Extruder"

#define EXTRUDER_SPEED_TU							"Extrude"
#define MOVE_SPEED_TU									"Move"
#define EXTRUDER_SPEED_STATE_TU							"Extrude Speed\n%d%%"
#define MOVE_SPEED_STATE_TU									"Move Speed\n%d%%"
#define STEP_1PERCENT_TU										"1%"
#define STEP_5PERCENT_TU										"5%"
#define STEP_10PERCENT_TU										"10%"

#define TILE_READYPRINT_TU							"ReadyPrint"
#define TILE_CHOOSEFILE_TU							"ChooseFile"
#define TILE_PRINTING_TU								"Printing"
#define TILE_OPERATION_TU								"Operation"
#define TILE_ADJUST_TU									"Adjust"
#define	TILE_WIRELESS_TU								"Wireless"
#define TITLE_CLOUD_TEXT_TU				        "Cloud"
#define TITILE_DIALOG_CONFIRM_TU				"Confirm"

#define AUTO_SHUTDOWN_TU								"Auto"
#define MANUAL_SHUTDOWN_TU							"Manual"

#define DIALOG_CONFIRM_TU							"Confirm"
#define DIALOG_CANCLE_TU							"Cancel"
#define DIALOG_OK_TU									"OK"
#define DIALOG_RESET_TU								"Reset"
#define DIALOG_RETRY_TU								"Retry"
#define DIALOG_DISABLE_TU							"Disable"
#define DIALOG_PRINT_MODEL_TU					"Print model?"
#define DIALOG_CANCEL_PRINT_TU				"Stop print?"
#define DIALOG_RETRY_TU									"Retry"
#define DIALOG_STOP_TU									"Stop"
#define DIALOG_REPRINT_FROM_BREAKPOINT_TU	"Reprint from breakpoint?"
#define DIALOG_UNBIND_PRINTER_TU						"Unbind the printer?"
#define DIALOG_ERROR_TIPS1_TU								"error:no file,please check it again."
#define DIALOG_ERROR_TIPS2_TU								"error:transaction failed.please check display baudrate \nwhether as the same as mainboard!"
#define DIALOG_ERROR_TIPS3_TU								"error:file name or path is too long!"
#define DIALOG_CLOSE_MACHINE_TU             "Closing machine......"
#define DIALOG_UNBIND_PRINTER_TU            "Unbind the printer?"
#define DIALOG_WIFI_ENABLE_TIPS_TU "The wifi module is being configured,\nplease wait a moment....."
#define CALIBRATE_TU  "Calibrate"
//****************韩语***************************//
#define TOOL_TEXT_KR		"Tool"
#define PREHEAT_TEXT_KR "Preheat"
#define	MOVE_TEXT_KR		"Move"
#define HOME_TEXT_KR  "Home"
#define PRINT_TEXT_KR		"Print"
#define EXTRUDE_TEXT_KR "Extrude"
#define LEVELING_TEXT_KR "Leveling"
#define AUTO_LEVELING_TEXT_KR "AutoLevel"
#define SET_TEXT_KR		"Set"
#define MORE_TEXT_KR     "More"

#define ADD_TEXT_KR			"ADD"
#define DEC_TEXT_KR			"DEC"
#define EXTRUDER_1_TEXT_KR		"Extruder1"
#define EXTRUDER_2_TEXT_KR		"Extruder2"
#define HEATBED_TEXT_KR			"HeatBed"
#define TEXT_1C_KR						"1℃"
#define TEXT_5C_KR						"5℃"
#define TEXT_10C_KR					"10℃"
#define CLOSE_TEXT_KR				"Close"

#define BACK_TEXT_KR					"Back"

#define TOOL_PREHEAT_KR            "Precalentar"
#define TOOL_EXTRUDE_KR             "Extrusor"
#define TOOL_MOVE_KR                "Mover"
#define TOOL_HOME_KR                "Origen"
#define TOOL_LEVELING_KR               "Leveling"
#define TOOL_AUTO_LEVELING_KR         "Autolevel"
#define TOOL_FILAMENT_KR                "Filamento"
#define TOOL_MORE_KR                    "Más"

#define AXIS_X_ADD_TEXT_KR				"X+"
#define AXIS_X_DEC_TEXT_KR				"X-"
#define AXIS_Y_ADD_TEXT_KR				"Y+"
#define AXIS_Y_DEC_TEXT_KR				"Y-"
#define AXIS_Z_ADD_TEXT_KR				"Z+"
#define AXIS_Z_DEC_TEXT_KR				"Z-"
#define TEXT_01MM_KR							"0.1mm"
#define TEXT_1MM_KR							"1mm"
#define TEXT_10MM_KR							"10mm"

#define HOME_X_TEXT_KR						"X"
#define HOME_Y_TEXT_KR						"Y"
#define HOME_Z_TEXT_KR						"Z"
#define HOME_ALL_TEXT_KR					"Home"
#define HOME_STOPMOVE_KR                "Quickstop"

#define PAGE_UP_TEXT_KR					"Page up"
#define PAGE_DOWN_TEXT_KR				"Page down"

#define EXTRUDER_IN_TEXT_KR		"IN"
#define EXTRUDER_OUT_TEXT_KR		"OUT"
#define EXTRUDE_1MM_TEXT_KR			"1mm"
#define EXTRUDE_5MM_TEXT_KR			"5mm"
#define EXTRUDE_10MM_TEXT_KR		"10mm"
#define EXTRUDE_LOW_SPEED_TEXT_KR		"LOW"
#define EXTRUDE_MEDIUM_SPEED_TEXT_KR	"Medium"
#define EXTRUDE_HIGH_SPEED_TEXT_KR		"High"

#define LEVELING_POINT1_TEXT_KR				"Point1"
#define LEVELING_POINT2_TEXT_KR				"Point2"
#define LEVELING_POINT3_TEXT_KR			"Point3"
#define LEVELING_POINT4_TEXT_KR				"Point4"
#define LEVELING_POINT5_TEXT_KR				"Point5"

#define FILESYS_TEXT_KR								"FileSys"
#define WIFI_TEXT_KR									"WIFI"
#define FAN_TEXT_KR										"Fan"
#define ABOUT_TEXT_KR									"About"
#define BREAK_POINT_TEXT_KR						"Continu"
#define FILAMENT_TEXT_KR							"Filament"
#define LANGUAGE_TEXT_KR							"Language"
#define MOTOR_OFF_TEXT_KR							"Moto-off"
#define SHUTDOWN_TEXT_KR							"Shutdown"

#define U_DISK_TEXT_KR								"USB"
#define SD_CARD_TEXT_KR								"SD"
#define WIFI_NAME_TEXT_KR							"WIFI: "
#define WIFI_KEY_TEXT_KR							"KEY: "
#define WIFI_IP_TEXT_KR								"IP: "
#define WIFI_AP_TEXT_KR								"STATE: AP"
#define WIFI_STA_TEXT_KR							"STATE: STA"
#define WIFI_CONNECTED_TEXT_KR				"CONNECTED"
#define WIFI_DISCONNECTED_TEXT_KR			"DISCONNECTED"
#define WIFI_EXCEPTION_TEXT_KR				"EXCEPTION"
#define CLOUD_TEXT_KR								"Cloud"
#define CLOUD_BIND_KR								"Bind"
#define CLOUD_UNBIND_KR							"Unbind"
#define CLOUD_UNBINDING_KR					"Unbinding"
#define CLOUD_DISCONNECTED_KR				"Disconnected"
#define CLOUD_UNBINDED_KR						"Unbinded"
#define CLOUD_BINDED_KR							"Binded"
#define CLOUD_DISABLE_KR						"Disable"

#define FAN_ADD_TEXT_KR								"ADD"
#define FAN_DEC_TEXT_KR								"DEC"
#define FAN_OPEN_TEXT_KR							"100%"
#define FAN_HALF_TEXT_KR							"50%"
#define FAN_CLOSE_TEXT_KR							"Close"
#define FAN_TIPS1_TEXT_KR								"FAN\n%d"
#define FAN_TIPS2_TEXT_KR								"FAN\nClose"

#define FILAMENT_IN_TEXT_KR						"In"
#define FILAMENT_OUT_TEXT_KR					"Out"
#define FILAMENT_EXT0_TEXT_KR					"E1"
#define FILAMENT_EXT1_TEXT_KR					"E2"
#define FILAMENT_HEAT_TEXT_KR					"Preheat"					
#define FILAMENT_STOP_TEXT_KR					"Stop"
#define FILAMENT_CHANGE_TEXT_KR				"Filament replace"
#define FILAMENT_TIPS2_TEXT_KR				"T:%d℃/%d℃"
#define FILAMENT_TIPS3_TEXT_KR				"loading..."
#define FILAMENT_TIPS4_TEXT_KR				"unloading..."
#define FILAMENT_TIPS5_TEXT_KR				"Temp is too low to go,please heat"
#define FILAMENT_TIPS6_TEXT_KR				"Completed"

#define PRE_HEAT_EXT_TEXT_KR						"E%d\n%d℃/%d℃"
#define PRE_HEAT_BED_TEXT_KR						"Bed\n%d℃/%d℃"

#define FILE_LOADING_KR				"Loading......"
#define NO_FILE_AND_CHECK_KR					"No files found!\nCheck the file system configuration!"
#define NO_FILE_KR					"No files found!"



#define EXTRUDER_TEMP_TEXT_KR				"T:%d℃"
#define EXTRUDER_E_LENGTH1_TEXT_KR   "E%d:%dmm"
#define EXTRUDER_E_LENGTH2_TEXT_KR   "E%d:%dcm"
#define EXTRUDER_E_LENGTH3_TEXT_KR   "E%d:%dm"

#define ABOUT_TYPE_TEXT_KR							"Type: "
#define ABOUT_VERSION_TEXT_KR					"Firmware: "
#define ABOUT_WIFI_TEXT_KR							"WIFI: "

#define PRINTING_OPERATION_KR					"Operation"
#define PRINTING_PAUSE_KR						"Pause"
#define PRINTING_TEMP_KR								"Temp."
#define PRINTING_CHANGESPEED_KR				"Speed"
#define PRINTING_RESUME_KR						"Resume"
#define PRINTING_STOP_KR								"Stop"
#define PRINTING_MORE_KR								"More"
#define PRINTING_EXTRUDER_KR					"Extruder"

#define EXTRUDER_SPEED_KR							"Extrude"
#define MOVE_SPEED_KR									"Move"
#define EXTRUDER_SPEED_STATE_KR							"Extrude Speed\n%d%%"
#define MOVE_SPEED_STATE_KR									"Move Speed\n%d%%"
#define STEP_1PERCENT_KR										"1%"
#define STEP_5PERCENT_KR										"5%"
#define STEP_10PERCENT_KR										"10%"

#define TILE_READYPRINT_KR							"ReadyPrint"
#define TILE_CHOOSEFILE_KR							"ChooseFile"
#define TILE_PRINTING_KR								"Printing"
#define TILE_OPERATION_KR								"Operation"
#define TILE_ADJUST_KR									"Adjust"
#define	TILE_WIRELESS_KR								"Wireless"
#define TITLE_CLOUD_TEXT_KR				        "Cloud"
#define TITILE_DIALOG_CONFIRM_KR				"Confirm"

#define AUTO_SHUTDOWN_KR								"Auto"
#define MANUAL_SHUTDOWN_KR							"Manual"

#define DIALOG_CONFIRM_KR							"Confirm"
#define DIALOG_CANCLE_KR							"Cancel"
#define DIALOG_OK_KR									"OK"
#define DIALOG_RESET_KR								"Reset"
#define DIALOG_RETRY_KR								"Retry"
#define DIALOG_DISABLE_KR							"Disable"
#define DIALOG_PRINT_MODEL_KR					"Print model?"
#define DIALOG_CANCEL_PRINT_KR				"Stop print?"
#define DIALOG_STOP_KR									"Stop"
#define DIALOG_REPRINT_FROM_BREAKPOINT_KR	"Reprint from breakpoint?"
#define DIALOG_UNBIND_PRINTER_KR						"Unbind the printer?"
#define DIALOG_ERROR_TIPS1_KR								"error:no file,please check it again."
#define DIALOG_ERROR_TIPS2_KR								"error:transaction failed.please check display baudrate \nwhether as the same as mainboard!"
#define DIALOG_ERROR_TIPS3_KR								"error:file name or path is too long!"
#define DIALOG_CLOSE_MACHINE_KR             "Closing machine......"
#define DIALOG_UNBIND_PRINTER_KR            "Unbind the printer?"

#define CALIBRATE_KR  "Calibrate"
#endif
//****************意大利语***************************//
#define TOOL_TEXT_IT		"Strumento"
#define PREHEAT_TEXT_IT         "Pprerisc"
#define	MOVE_TEXT_IT		    "Muovi"
#define HOME_TEXT_IT            "Home"
#define PRINT_TEXT_IT		    "Stampa"
#define EXTRUDE_TEXT_IT         "Estrude"
#define LEVELING_TEXT_IT        "Leveling"
#define AUTO_LEVELING_TEXT_IT   "AutoLevel"
#define SET_TEXT_IT		        "Imposta"
#define MORE_TEXT_IT            "Di più"

#define ADD_TEXT_IT			    "Aumentare"
#define DEC_TEXT_IT			    "Ridurre"
#define EXTRUDER_1_TEXT_IT		"Estrude1"
#define EXTRUDER_2_TEXT_IT		"Estrude2"
#define HEATBED_TEXT_IT			"Piano"
#define TEXT_1C_IT				"1℃"
#define TEXT_5C_IT				"5℃"
#define TEXT_10C_IT				"10℃"
#define CLOSE_TEXT_IT			"Spento"

#define BACK_TEXT_IT					"Indietro"

#define TOOL_PREHEAT_IT            "Prerisc"
#define TOOL_EXTRUDE_IT             "Estrude"
#define TOOL_MOVE_IT                "Muovi"
#define TOOL_HOME_IT                "Home"
#define TOOL_LEVELING_IT               "Leveling"
#define TOOL_AUTO_LEVELING_IT         "Autolevel"
#define TOOL_FILAMENT_IT                "Filamento"
#define TOOL_MORE_IT                    "Di più"

#define AXIS_X_ADD_TEXT_IT				"X+"
#define AXIS_X_DEC_TEXT_IT				"X-"
#define AXIS_Y_ADD_TEXT_IT				"Y+"
#define AXIS_Y_DEC_TEXT_IT				"Y-"
#define AXIS_Z_ADD_TEXT_IT				"Z+"
#define AXIS_Z_DEC_TEXT_IT				"Z-"
#define TEXT_01MM_IT					"0.1mm"
#define TEXT_1MM_IT						"1mm"
#define TEXT_10MM_IT					"10mm"

#define HOME_X_TEXT_IT					"X"
#define HOME_Y_TEXT_IT					"Y"
#define HOME_Z_TEXT_IT					"Z"
#define HOME_ALL_TEXT_IT				"All"
#define HOME_STOPMOVE_IT                "Quickstop"

#define PAGE_UP_TEXT_IT					"Pagina su"
#define PAGE_DOWN_TEXT_IT				"Pagina giù"

#define EXTRUDER_IN_TEXT_IT		    "Estru"
#define EXTRUDER_OUT_TEXT_IT		    "Ritra"
#define EXTRUDE_1MM_TEXT_IT			    "1mm"
#define EXTRUDE_5MM_TEXT_IT			    "5mm"
#define EXTRUDE_10MM_TEXT_IT		    "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_IT		"Bassa"
#define EXTRUDE_MEDIUM_SPEED_TEXT_IT	"Media"
#define EXTRUDE_HIGH_SPEED_TEXT_IT		"Alta"

#define LEVELING_POINT1_TEXT_IT				"Primo"
#define LEVELING_POINT2_TEXT_IT				"Secondo"
#define LEVELING_POINT3_TEXT_IT			    "Terzo"
#define LEVELING_POINT4_TEXT_IT				"Quarto"
#define LEVELING_POINT5_TEXT_IT				"Quinto"

#define FILESYS_TEXT_IT						"FileSys"
#define WIFI_TEXT_IT					    "WIFI"
#define FAN_TEXT_IT							"Ventola"
#define ABOUT_TEXT_IT						"Circa"
#define BREAK_POINT_TEXT_IT					"Continua"
#define FILAMENT_TEXT_IT					"Filamento"
#define LANGUAGE_TEXT_IT					"Lingua"
#define MOTOR_OFF_TEXT_IT					"Motor off"
#define SHUTDOWN_TEXT_IT					"Spento"
#define MACHINE_PARA_IT                     "Config"
#define U_DISK_TEXT_IT						"USB"
#define SD_CARD_TEXT_IT						"SD"
#define WIFI_NAME_TEXT_IT					"WIFI: "
#define WIFI_KEY_TEXT_IT					"KEY: "
#define WIFI_IP_TEXT_IT						"IP: "
#define WIFI_AP_TEXT_IT						"Stato: AP"
#define WIFI_STA_TEXT_IT					"Stato: STA"
#define WIFI_CONNECTED_TEXT_IT				"Connesso"
#define WIFI_DISCONNECTED_TEXT_IT			"Disconnesso"
#define WIFI_EXCEPTION_TEXT_IT				"Eccezione"
#define WIFI_RECONNECT_TEXT_IT         "Reconnect"
#define CLOUD_TEXT_IT						"Cloud"
#define CLOUD_BIND_IT						"Legato"
#define CLOUD_UNBIND_IT						"Libero"
#define CLOUD_DISCONNECTED_IT				"Disconnesso"
#define CLOUD_UNBINDING_IT					"Libero"
#define CLOUD_UNBINDED_IT					"Sciolto"
#define CLOUD_BINDED_IT						"Legato"
#define CLOUD_DISABLE_IT					"Disable"

#define FAN_ADD_TEXT_IT						"Aumentare"
#define FAN_DEC_TEXT_IT						"Ridurre"
#define FAN_OPEN_TEXT_IT					"100%"
#define FAN_HALF_TEXT_IT					"50%"
#define FAN_CLOSE_TEXT_IT					"Spento"
#define FAN_TIPS1_TEXT_IT					"Ventola"
#define FAN_TIPS2_TEXT_IT					"Ventola\n0"

#define FILAMENT_IN_TEXT_IT					"Inser"
#define FILAMENT_OUT_TEXT_IT				"Estra"
#define FILAMENT_EXT0_TEXT_IT				"Estrude1"
#define FILAMENT_EXT1_TEXT_IT				"Estrude2"
#define FILAMENT_HEAT_TEXT_IT			    "Preriscaldamento"					
#define FILAMENT_STOP_TEXT_IT				"Stop"
#define FILAMENT_CHANGE_TEXT_IT				"Filamento"
#define FILAMENT_TIPS2_TEXT_IT				"T:"
#define FILAMENT_TIPS3_TEXT_IT				"Inserimento del filamento..."
#define FILAMENT_TIPS4_TEXT_IT				"Estrazione del filamento..."
#define FILAMENT_TIPS5_TEXT_IT				"Temp is too low to go,please heat"
#define FILAMENT_TIPS6_TEXT_IT				"Completato"

#if defined(TFT70)
  #define FILAMENT_REPLAYS_IDLE_TEXT_IT         "Please click <Estru> or <Ritra> \nto replace filament!"
  #define FILAMENT_CHANGE_TEXT_IT				"Please click <Estru> or <Ritra>,\nAfter pinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_IT		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_IT		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_IT           "Heat completed,please load filament to extruder,and click <Conferma> for start loading."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_IT           "Please load filament to extruder,and click <Conferma> for start loading."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_IT          "Heat completed,please click <Conferma> for start unloading.!"
  #define FILAMENT_DIALOG_LOADING_TIPS_IT                 "Is loading ,please wait!"
  #define FILAMENT_DIALOG_UNLOADING_TIPS_IT               "Is unloading,please wait!"
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_IT           "Load filament completed,click <Conferma> for return!"
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_IT         "Unload filament completed,click <Conferma> for return!"
#elif defined(TFT35)
  #define FILAMENT_CHANGE_TEXT_IT				"Please click <Load> \nor <unload>,After \npinter pause."
  #define FILAMENT_DIALOG_LOAD_HEAT_TIPS_IT		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_IT		"Heating up the nozzle,please wait..."
  #define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_IT           "Heat completed,please load filament \nto extruder,and click <confirm> \nfor start loading."
  #define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_IT           "Please load filament to extruder,\nand click <confirm> for start loading."
  #define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_IT          "Heat completed,please \nclick <confirm> for start unloading.!"
  #define FILAMENT_DIALOG_LOADING_TIPS_IT                 "Is loading ,please wait!"
  #define FILAMENT_DIALOG_UNLOADING_TIPS_IT               "Is unloading,please wait!"
  #define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_IT           "Load filament completed,\nclick <confirm> for return!"
  #define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_IT         "Unload filament completed,\nclick <confirm> for return!"
#endif

#define PRE_HEAT_EXT_TEXT_IT				"E"
#define PRE_HEAT_BED_TEXT_IT				"Piano"

#define FILE_LOADING_IT				        "Caricamento......"
#if defined(TFT70)
#define NO_FILE_AND_CHECK_IT                "Nessun file trovato! Inserisci la scheda SD o il disco U!"
#elif defined(TFT35)
#define NO_FILE_AND_CHECK_IT				"Nessun file,\n          per favore controllare di nuovo!"
#endif
#define NO_FILE_IT					        "Nessun file!"

#define EXTRUDER_TEMP_TEXT_IT				"Temper"
#define EXTRUDER_E_LENGTH1_TEXT_IT          "Estrude1"
#define EXTRUDER_E_LENGTH2_TEXT_IT          "Estrude2"
#define EXTRUDER_E_LENGTH3_TEXT_IT          "Estrude3"

#define ABOUT_TYPE_TEXT_IT					"Type: "
#define ABOUT_VERSION_TEXT_IT				"Firmware: "
#define ABOUT_WIFI_TEXT_IT					"WiFi: "

#define PRINTING_OPERATION_IT				"Opzioni"
#define PRINTING_PAUSE_IT					"Pause"
#define PRINTING_TEMP_IT					"Temp."
#define PRINTING_CHANGESPEED_IT				"Velocità"
#define PRINTING_RESUME_IT					"Recupero"
#define PRINTING_STOP_IT					"Stop"
#define PRINTING_MORE_IT					"Di più"
#define PRINTING_EXTRUDER_IT			    "Estrude"
#define PRINTING_MOVE_IT              "Muovi"

#define EXTRUDER_SPEED_IT					"Estrude"
#define MOVE_SPEED_IT						"Muovi"
#define EXTRUDER_SPEED_STATE_IT				"Estrusione"
#define MOVE_SPEED_STATE_IT					"Movimento"
#define STEP_1PERCENT_IT					"1%"
#define STEP_5PERCENT_IT					"5%"
#define STEP_10PERCENT_IT					"10%"

#define ZOFFSET_IT                          "Z Offset"
#define ZOFFSET_INC_IT                      "Add"
#define ZOFFSET_DEC_IT                      "Dec"

#define TITLE_READYPRINT_IT						"Pronto"
#define TITLE_PREHEAT_IT						"Preris"
#define TITLE_MOVE_IT					                "Muovi"
#define TITLE_HOME_IT							"Home"
#define TITLE_EXTRUDE_IT						"Estrude"
#define TITLE_LEVELING_IT						"Livella"
#define TITLE_SET_IT							"Impostare"
#define TITLE_MORE_IT							"Di più"
#define TITLE_CHOOSEFILE_IT						"File"
#define TITLE_PRINTING_IT						"Stampa"
#define TITLE_OPERATION_IT						"Opzioni"
#define TITLE_ADJUST_IT							"Regolare"
#define	TITLE_WIRELESS_IT						"Wireless"
#define	TITLE_FILAMENT_IT						"Filamento"
#define TITLE_ABOUT_IT							"Circa"
#define TITLE_FAN_IT							"Ventola"
#define TITLE_LANGUAGE_IT						"Lingua"
#define TITLE_PAUSE_IT							"Pausa"
#define TITLE_CHANGESPEED_IT				    "Velocità"
#define TITLE_CLOUD_TEXT_IT				        "Cloud"
#define TITLE_DIALOG_CONFIRM_IT				"Confirm"
#define TITLE_FILESYS_IT							"FileSys"
#define TITLE_ZOFFSET_IT                          "Z Offset"

#define AUTO_SHUTDOWN_IT					"Auto"
#define MANUAL_SHUTDOWN_IT					"Manuale"

#define DIALOG_CONFIRM_IT					"Conferma"
#define DIALOG_CANCLE_IT					"Cancella"
#define DIALOG_OK_IT						"OK"
#define DIALOG_RESET_IT						"Resettare"
#define DIALOG_RETRY_IT						"Riprovare"
#define DIALOG_DISABLE_IT					"Disable"
#define DIALOG_PRINT_MODEL_IT				"Gcode stampa?"
#define DIALOG_CANCEL_PRINT_IT				"Stop stampa?"
#define DIALOG_STOP_IT				"Stop"
#define DIALOG_REPRINT_FROM_BREAKPOINT_IT	"Continua a stampare dal \npunto di interruzione?"
#define DIALOG_UNBIND_PRINTER_IT		"Libero?"
#define DIALOG_ERROR_TIPS1_IT		        "Errore: nessun file,per favore controllare di nuovo."
#define DIALOG_ERROR_TIPS2_IT			"Errore: operazione non riuscita, \nsi prega di controllare se il baudrate del \ndisplay è lo stesso scheda madre"
#define DIALOG_ERROR_TIPS3_IT			"Errore: il nome del file o il \npercorso è troppo lungo!"
#define DIALOG_CLOSE_MACHINE_IT                 "Closing machine......"
#define DIALOG_UNBIND_PRINTER_IT                "Unbind the printer?"
#define DIALOG_WIFI_ENABLE_TIPS_IT "The wifi module is being configured,\nplease wait a moment....."
#define CALIBRATE_IT  "Calibrate"

/*****************************************/

#endif
