/*
 * led.c
 *
 *  Created on: 2026. 10. 11.
 *      Author: user
 */

#include "led.h"

void led_on(void)
{
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
}

void led_off(void)
{
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
}
