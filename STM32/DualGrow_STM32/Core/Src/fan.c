/*
 * fan.c
 *
 *  Created on: 2026. 10. 9.
 *      Author: user
 */

#include "fan.h"

void fan_on(void)
{
	HAL_GPIO_WritePin(FAN_GPIO_Port, FAN_Pin, GPIO_PIN_SET);
}

void fan_off(void)
{
	HAL_GPIO_WritePin(FAN_GPIO_Port, FAN_Pin, GPIO_PIN_RESET);
}
