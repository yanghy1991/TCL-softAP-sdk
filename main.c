#include <stdio.h>
#include <string.h>
#include "wifi_sdk_if.h"

static void smartCfgTask(void *param);

int main(int argc,char *argv[])
{
	printf("[%s] [%d] [111]",__func__,__LINE__);
	smartCfgTask(NULL);
	printf("[%s] [%d] [222]",__func__,__LINE__);
	
	return 0;
}


static void smartCfgTask(void *param)
{
	//T_MSG msg;
	T_cfgRetInfo info;
	//memset(&msg, 0, sizeof(msg));
	memset(&info, 0, sizeof(info));
	tcl_smartcfg_init(smartcfg_startSoftAP);
	if(tcl_smartcfg_process(&info) == RET_OK)
	{
		sdk_printf("info.ssid = %s, info.pwd = %s\n", info.ssid, info.pwd);
	}
}