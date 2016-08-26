#ifndef __FUNCTIONS_MNG_H__
#define __FUNCTIONS_MNG__H__
#include <platform.h>

#define FUNC_CONFIG_STATE_NUM 10

#define FUNC_CONFIG_STATE_INDEX 0
#define FUNC_CONFIG_STATE_INDEX 1
#define FUNC_CONFIG_STATE_INDEX 2
#define FUNC_CONFIG_STATE_INDEX 3
#define FUNC_CONFIG_STATE_INDEX 4
#define FUNC_CONFIG_STATE_INDEX 5
#define FUNC_CONFIG_STATE_INDEX 6
#define FUNC_CONFIG_STATE_INDEX 7
#define FUNC_CONFIG_STATE_INDEX 8
#define FUNC_CONFIG_STATE_INDEX 9


typedef struct func_config_state
{
	uint8_t func_state[FUNC_CONFIG_STATE_NUM];
}func_config_state_t,*func_config_state_p;

#define FUNC_CONFIG_ENABLE 1
#define FUNC_CONFIG_DISABLE 0

typedef struct uplink_lock_state
{
	uint16_t power_level;
	func_config_state_t func_state;
	uint8_t user_id[MAX_USER_ID_LEN];//用户ID
}uplink_lock_state_t,*_lock_state_p;

/*ai*/
int8_t func_config_set(uint8_t index,uint8_t state);
func_config_state_p Get_All_FuncStates(void);
uint8_t Get_FuncState(uint8_t index);
#endif
