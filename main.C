#include "stm32f4xx_gpio.h" 

int main()
{
	RCC_AHB1ENR |= (1<<7);
	
	GPIOH->MODER &= ~(3<<2*10);
	GPIOH->MODER |= (1<<2*11);
	 
	GPIOH->OTYPER &= (1<<10);
	
	GPIOH->OSPEEDR &= ~(3<<2*11);
	GPIOH->OSPEEDR |= (1<<2*11);
	
	SetBits_Proc(GPIOH,GPIO_Pin_11);
	ResetBits_Proc(GPIOH,GPIO_Pin_11);
	
	while(1);
}
 
void SystemInit(void)
{
	
}


