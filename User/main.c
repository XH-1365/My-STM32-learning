#include "stm32f4xx.h"
#include "bsp_led.h"
#include "bsp.key.h"


int main(void)
{
	LED_proc();
	
	key_Proc();
	
	while(1)
	{
		if(Key_Scan(Key_GPIO_PORT,Key_Pin_0) == KEY_ON)
		{
			LED_R_TOGGLE;
		}
	}
}

