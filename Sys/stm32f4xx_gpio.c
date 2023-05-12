#include "stm32f4xx.h" 

void SetBits_Proc(GPIOH_TypeDef *GPIOx,uint16_t GPIO_Pin)
{
	GPIOH->BSRRH |= (1<<GPIO_Pin);
}

void ResetBits_Proc(GPIOH_TypeDef *GPIOx,uint16_t GPIO_Pin)
{
	GPIOH->BSRRL |= (1<<GPIO_Pin);
}