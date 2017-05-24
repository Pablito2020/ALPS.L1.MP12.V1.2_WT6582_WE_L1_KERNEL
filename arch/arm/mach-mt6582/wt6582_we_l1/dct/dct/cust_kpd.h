/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6582. Copyright MediaTek Inc. (C) 2013.
 * Wed May 24 17:42:05 2017
 * Do Not Modify the File.
 */

#ifndef _CUST_KPD_H_
#define _CUST_KPD_H_
#include <linux/input.h>
#include <cust_eint.h>
#define KPD_YES		1
#define KPD_NO		0
/* available keys (Linux keycodes) */
#define KEY_CALL	KEY_SEND
#define KEY_ENDCALL	KEY_END
#undef KEY_OK
#define KEY_OK		KEY_REPLY	/* DPAD_CENTER */
#define KEY_FOCUS	KEY_HP
#define KEY_AT		KEY_EMAIL
#define KEY_POUND	228	//KEY_KBDILLUMTOGGLE
#define KEY_STAR	227	//KEY_SWITCHVIDEOMODE
#define KEY_DEL 	KEY_BACKSPACE
#define KEY_SYM		KEY_COMPOSE
/* KEY_HOME */
/* KEY_BACK */
/* KEY_VOLUMEDOWN */
/* KEY_VOLUMEUP */
/* KEY_MUTE */
/* KEY_MENU */
/* KEY_UP */
/* KEY_DOWN */
/* KEY_LEFT */
/* KEY_RIGHT */
/* KEY_CAMERA */
/* KEY_POWER */
/* KEY_TAB */
/* KEY_ENTER */
/* KEY_LEFTSHIFT */
/* KEY_COMMA */
/* KEY_DOT */		/* PERIOD */
/* KEY_SLASH */
/* KEY_LEFTALT */
/* KEY_RIGHTALT */
/* KEY_SPACE */
/* KEY_SEARCH */
/* KEY_0 ~ KEY_9 */
/* KEY_A ~ KEY_Z */
/*
* Power key's HW keycodes are 8, 17, 26, 35, 44, 53, 62, 71.  Only [8] works
* for Power key in Keypad driver, so we set KEY_ENDCALL in [8] because
* EndCall key is Power key in Android.  If KPD_PWRKEY_USE_EINT is YES, these
* eight keycodes will not work for Power key.
*/


#define KPD_KEY_DEBOUNCE  1024      /* (val / 32) ms */
#define KPD_PWRKEY_MAP    KEY_POWER
#define MTK_PMIC_PWR_KEY    8

/* HW keycode [0 ~ 71] -> Linux keycode */
#define KPD_INIT_KEYMAP()	\
{	\
	[0] = KEY_VOLUMEUP,		\
	[1] = KEY_VOLUMEDOWN,		\
}	 
/*****************************************************************/
/*******************Preload Customation***************************/
/*****************************************************************/
#define KPD_PWRKEY_EINT_GPIO  GPIO0

#define KPD_PWRKEY_GPIO_DIN  0

#define  KPD_DL_KEY1  0    /* KEY_VOLUMEUP */
#define  KPD_DL_KEY2  1    /* KEY_VOLUMEDOWN */
#define  KPD_DL_KEY3  8    /* KEY_POWER */
/*****************************************************************/
/*******************Uboot Customation***************************/
/*****************************************************************/
#define MT65XX_RECOVERY_KEY  0    /* KEY_VOLUMEUP */
#define MT65XX_FACTORY_KEY  1    /* KEY_VOLUMEDOWN */
/*****************************************************************/
/*******************factory Customation***************************/
/*****************************************************************/
#define KEYS_PWRKEY_MAP		{ KEY_POWER, "Power" }
#define DEFINE_KEYS_KEYMAP(x)		\
 struct key x[] = {     	\
 	KEYS_PWRKEY_MAP,		\
  { KEY_VOLUMEUP,   "VLUp"  }, \
  { KEY_VOLUMEDOWN,   "VLDown"  }, \
}
#define CUST_KEY_UP  KEY_VOLUMEUP   
#define CUST_KEY_VOLUP  KEY_VOLUMEUP   
#define CUST_KEY_DOWN  KEY_VOLUMEDOWN   
#define CUST_KEY_VOLDOWN  KEY_VOLUMEDOWN   
/*****************************************************************/
/*******************recovery Customation****************************/
/*****************************************************************/



#endif

