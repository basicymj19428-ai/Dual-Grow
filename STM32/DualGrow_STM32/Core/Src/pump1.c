/*
 * pump1.c
 *
 *  Created on: 2026. 9. 27.
 *      Author: user
 */

#include "pump1.h"

void pump1_on(void)
{
	//Active-Low 릴제이 : LOW(켜짐)
	HAL_GPIO_WritePin(PUMP1_GPIO_Port, PUMP1_Pin, GPIO_PIN_RESET);
}

void pump1_off(void)
{
	//Active-High 릴레이 : HIGH(꺼짐)
	HAL_GPIO_WritePin(PUMP1_GPIO_Port, PUMP1_Pin, GPIO_PIN_SET);
}
