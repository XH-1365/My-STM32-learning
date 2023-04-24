#include "stm32f4xx.h"

int main()
{
	/*选择PH10的端口进行IO控制*/
	RCC_AHB1RSTR |= (1<<7);
	
	/*选择PH10的端口进行IO控制*/
	GPIOH_MODER  |= (1<<(2*12));
	GPIOH_MODER  |= (1<<(2*11));
	GPIOH_MODER  |= (1<<(2*10));
	/*选择LED PH10输出低电平*/
	
	
	
	GPIOH_ODR |= (1<<12);
	GPIOH_ODR |= (1<<11);
	GPIOH_ODR |= (1<<10);
	
	GPIOH_ODR &= ~(1<<10);
	while(1);
}

void SystemInit(void)
{
	
}

