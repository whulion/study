#ifndef __HAL_RTC_H__
#define __HAL_RTC_H__
#include <platform.h>

typedef struct  Clock
{
	uint16_t year;
	uint8_t month;
	uint8_t day;
	uint8_t hour;
	uint8_t minute;
	uint8_t second;
}clock_t,*clock_p;
int8_t Set_RtcClock(clock_t  clk);
#endif
