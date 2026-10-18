/*
 * adc_read.c
 *
 *  Created on: 2026. 10. 18.
 *      Author: user
 */

#include "adc_read.h"

extern ADC_HandleTypeDef hadc1;

uint16_t adc_read_channel(uint32_t channel)
{
	ADC_ChannelConfTypeDef cfg = {0};
	uint16_t value = 0U;

	cfg.Channel = channel;
	cfg.Rank = 1U;
	cfg.SamplingTime = ADC_SAMPLETIME_84CYCLES;

	if(HAL_ADC_ConfigChannel(&hadc1, &cfg) != HAL_OK) {
		return 0U;
	}

	HAL_ADC_Start(&hadc1);

	if(HAL_ADC_PollForConversion(&hadc1, 10U) == HAL_OK) {
		value = (uint16_t)HAL_ADC_GetValue(&hadc1);
	}

	HAL_ADC_Stop(&hadc1);

	return value;
}
