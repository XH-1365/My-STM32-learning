#ifndef _BSP_KEY_H

#include "stm32f4xx_gpio.h"

#define	_BSP_KEY_H

#define Key_Pin_0				GPIO_Pin_0
#define Key_GPIO_PORT		GPIOA


#define KEY_ON 		1
#define KEY_OFF 	0

void key_Proc(void);
uint8_t	Key_Scan(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);

#endif
