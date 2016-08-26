#ifndef __USER_KEY_ITEM_H__
#define __USER_KEY_ITEM_H__
#include <platform.h>

#define MAX_USER_KEY_ITEM_NUM 10
#define BLE_MAC_LEN 23
#define MAX_USER_TOKEN_LEN 23
#define MAX_USER_ID_LEN 23
#define MAX_USER_MISC_LEN 23
//不同存储内容采用不同的key加密，十能状态一个key，钥匙一个key，通信加密一个key
typedef struct user_key_item
{
	uint32_t magic_head;//
	uint32_t valid;
	uint8_t ble_mac[BLE_MAC_LEN];//蓝牙手机的mac地址
	uint8_t user_token[MAX_USER_TOKEN_LEN];//用户输入的一个备份密码；
	uint8_t user_id[MAX_USER_ID_LEN];//用户ID
	uint8_t user_misc[MAX_USER_MISC_LEN];//类似私有信息，包括手机号码，系统版本等,这些信息更换了就会请求输入user_token
	uint32_t magic_end;//

}user_key_item_t,*user_key_item_p;

/*增加用户钥匙*/
/*成功，返回0,失败返回错误码*/
int32_t UK_Write_User_Key(uint8_t index,user_key_item_p user_key);//write lash and update mem cache
int32_t UK_Read_User_Key(uint8_t index,user_key_item_p user_key);
uint8_t UK_Get_Free_UK_Item_Index(void);
uint8_t UK_Init_User_Key_Area(void);
uint8_t UK_Reset_User_Key_Area(void);
#endif
