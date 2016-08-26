#ifndef __PLATFORM_H__
#define __PLATFORM_H__
#include <error.h>
/*定义板型*/
#define BOARD_TYPE_CC254X_EVB 

#ifdef  BOARD_TYPE_CC254X_EVB 
#include <platform_cc254x_evb.h>
#endif

#endif
