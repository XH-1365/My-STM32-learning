#include "stm32f4xx.h"
#include "bsp_led.h"
#include "bsp.key.h"

void Delay500us()		//@11.0592MHz
{
	unsigned char i;

	i = 227;
	while (--i);
}

int main(void)
{
	LED_proc();
	
	key_Proc();
	
	while(1)
	{
		if(Key_Scan(Key_GPIO_PORT,Key_Pin_0) == KEY_ON)
		{
			Delay500us();
			LED_R_TOGGLE;
		}
	}
}
