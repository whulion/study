#ifndef __LOCK_CMD_H__
#define __LOCK_CMD_H__
#include <platform.h>

#define UNLOCK_CMD_INDEX 1

typedef struct unlock_data
{
	uint8_t ble_mac[BLE_MAC_LEN];
	uint8_t user_id[MAX_USER_ID_LEN];//用户ID
	uint8_t user_misc[MAX_USER_MISC_LEN];//类似私有信息，包括手机号码，系统版本等,这些信息更换了就会请求输入user_token

}unlock_data_t,*unlock_data_p;

/*使用BLE开锁*/
int32_t Unlock_ByBle(unlock_data_p unlock_data);
/*使用密码手动开锁*/
int32_t Unlock_ByManual(uint8 * pwd);
/*解锁机械*/
int32_t unlockOp(void);

#define LOCK_STATE_OPEN 1
#define LOCK_STATE_CLOSED 2
#define LOCK_STATE_UNKNOWN 3
int32_t Get_LockState(void);
#endif
