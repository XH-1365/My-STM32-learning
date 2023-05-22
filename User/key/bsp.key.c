#include "bsp.key.h"

void key_Proc(void)
{
	RCC_AHB1PeriphClockCmd(RCC_AHB1ENR_GPIOAEN,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStruct;  
	
	GPIO_InitStruct.GPIO_Pin = Key_Pin_0;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;
	
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_DOWN;

	GPIO_Init(GPIOA,&GPIO_InitStruct);
}


uint8_t	Key_Scan(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)
{
	if	((GPIO_ReadInputDataBit(GPIOx,GPIO_Pin)) ==  KEY_ON)
	{
			while((GPIO_ReadInputDataBit(GPIOx,GPIO_Pin)) ==  KEY_ON);
			return	KEY_ON;
	}
	else 
		return	KEY_OFF;	
}

