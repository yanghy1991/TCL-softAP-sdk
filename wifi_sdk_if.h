/********************************************************************************
***
*** Filename:   wifi_sdk_if.h
***
*** Description:
***     
***
*** History:
***
*** Modify Reason       Author          Date        Search Flag(Option)
*** ----------------------------------------------------------------------------
*** File Creation                      
*******************************************************************************/
#ifndef __TCL_WIFISDK_H__
#define	__TCL_WIFISDK_H__
//#define  __DEBUG_VERSION__				//kaungcq/20160721

#define sdk_printf(__x...)    printf(__x)

/*******************************************************************************
 * Constants and #defines
 *******************************************************************************/
typedef enum
{
	RET_ERR = -1,
	RET_OK = 0
	
}E_SDK_RET_CODE;

/***************************************
smartcfg function data defined
*/
//#define SSID_MAX_LEN 32+1
//#define PWD_MAX_LEN 32+1
#define SSID_MAX_LEN 32+4
#define PWD_MAX_LEN 32+4			//结构体 数组对齐

typedef struct
{
	char ssid[SSID_MAX_LEN];
	char pwd[PWD_MAX_LEN];
}T_cfgRetInfo;

typedef int (*func_softAP)();

/*******************************************************************************
* function defined
*******************************************************************************/

/********************************************************
smartcfg functions defined
*********************************************************/
int tcl_smartcfg_init(func_softAP startSoftAp);
int tcl_smartcfg_process(T_cfgRetInfo *ret_info);


#endif

