#include "led.h"
void led_init(void)
	{
		GPIO_InitTypeDef gpio_init_struct;
		gpio_init_struct.Mode=GPIO_MODE_OUTPUT_PP;
		gpio_init_struct.Pin=GPIO_PIN_5;
		gpio_init_struct.Pull=GPIO_NOPULL;
		gpio_init_struct.Speed=GPIO_SPEED_FREQ_LOW;
		__HAL_RCC_GPIOB_CLK_ENABLE();
		HAL_GPIO_Init(GPIOB,&gpio_init_struct);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET);
	}
	
