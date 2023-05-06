#include "stm32f4xx.h" 

#define PERIPH_BASE					((unsigned int)0X40000000)
#define AHB1PERIPH_BASE 		(PERIPH_BASE+0X00020000)
#define GPIOH_BASE 					(AHB1PERIPH_BASE+0x00001C00)

//#define GPIOH_MODER 				*(unsigned int *)(GPIOH_BASE+0X00)	
//#define GPIOH_ODR 					*(unsigned int *)(GPIOH_BASE+0X14)
//#define GPIOH_MODER 				*(unsigned int *)(GPIOH_BASE+0X00)
//#define GPIOH_OTYPER 				*(unsigned int *)(GPIOH_BASE+0X04)
//#define GPIOH_OSPEEDR				*(unsigned int *)(GPIOH_BASE+0X08)
//#define GPIOH_PUPDR 				*(unsigned int *)(GPIOH_BASE+0X0C)
//#define GPIOH_IDR 					*(unsigned int *)(GPIOH_BASE+0X10)
//#define GPIOH_ODR 					*(unsigned int *)(GPIOH_BASE+0X14)
//#define GPIOH_BSRR 					*(unsigned int *)(GPIOH_BASE+0X18)	
//#define GPIOH_LCKR 					*(unsigned int *)(GPIOH_BASE+0X1C)	
//#define GPIOH_AFRL 	 				*(unsigned int *)(GPIOH_BASE+0X20)	
//#define GPIOH_AFRH	 				*(unsigned int *)(GPIOH_BASE+0X24)	

typedef unsigned int uint32_t;
typedef	unsigned short uint16_t;

typedef struct
{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t ODR;
	uint16_t BSRRL;
	uint16_t BSRRH;	
	uint32_t LCKR;
	uint32_t AFR[2];
}GPIOH_TypeDef;

#define GPIOH 							((GPIOH_TypeDef *)GPIOH_BASE)
#define GPIOA 							((GPIOH_TypeDef *)GPIOH_BASE)

#define RCC_BASE						(AHB1PERIPH_BASE+0x00003800)
#define RCC_AHB1ENR					*(unsigned int *)(RCC_BASE+0X30)

int main()
{
	RCC_AHB1ENR |= (1<<7);
	
	GPIOH->MODER &= ~(3<<2*10);
	GPIOH->MODER |= (1<<2*10);
	
	GPIOH->OTYPER &= (1<<10);
	
	GPIOH->OSPEEDR &= ~(3<<2*10);
	GPIOH->OSPEEDR |= (1<<2*10);
	
	GPIOH->BSRRH |= (1<<10);
	
	while(1);
}

void SystemInit(void)
{
	
}

