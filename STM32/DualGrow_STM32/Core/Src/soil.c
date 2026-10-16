/*
 * soil.c
 *
 *  Created on: 2026. 10. 15.
 *      Author: user
 */

#include "soil.h"

extern ADC_HandleTypeDef hadc1;

uint16_t soil_read_raw(void)
{
	uint16_t value = 0U;

	HAL_ADC_Start(&hadc1);

	if(HAL_ADC_PollForConversion(&hadc1, 10U) == HAL_OK) {
		value = (uint16_t)HAL_ADC_GetValue(&hadc1);
	}

	HAL_ADC_Stop(&hadc1);

	return value;
}
