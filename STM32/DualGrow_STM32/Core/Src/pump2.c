/*
 * pump2.c
 *
 *  Created on: 2026. 10. 5.
 *      Author: user
 */

#include "pump2.h"

void pump2_on(void)
{
	//Active LOW 릴레이(LOW : 켜짐)
	HAL_GPIO_WritePin(PUMP2_GPIO_Port, PUMP2_Pin, GPIO_PIN_RESET);
}

void pump2_off(void)
{
	//Active Low 릴레이(HIGH : 꺼짐)
	HAL_GPIO_WritePin(PUMP2_GPIO_Port, PUMP2_Pin, GPIO_PIN_SET);
}

