#include "bsp_led.h"

void LED_proc(void)
{
	RCC_AHB1PeriphClockCmd(RCC_AHB1ENR_GPIOHEN,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStruct;
	
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_12;					//选择端口
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;			//选择端口输入还是输出
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;			//选择推挽还是开漏
	
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;				//选择上拉还是下拉

	GPIO_InitStruct.GPIO_Speed = GPIO_Fast_Speed;		//传输速度Hz
	
	GPIO_Init(LED_R_PORT,& GPIO_InitStruct);

}

