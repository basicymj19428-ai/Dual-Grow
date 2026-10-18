/*
 * waterlevel.c
 *
 *  Created on: 2026. 10. 18.
 *      Author: user
 */

#include "waterlevel.h"
#include "adc_read.h"

uint16_t waterlevel_read_raw(void)
{
	return adc_read_channel(ADC_CHANNEL_1);  //PA1
}
