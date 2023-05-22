#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"

#define Led_Pin_12	GPIO_Pin_12	
#define Led_Pin_11	GPIO_Pin_11	
#define Led_Pin_10 	GPIO_Pin_10	

#define LED_R_PORT	GPIOH

#define LED_R_TOGGLE	{LED_R_PORT->ODR^=Led_Pin_12;}

void LED_proc(void);

#endif 
