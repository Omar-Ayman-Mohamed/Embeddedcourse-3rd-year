#include<stdint.h>
#include "stm32f4xx.h"
#include "gpio.h"


int main(void)
{
	// Set Mode to output  of pin 5 GPIOB
	GPIO_Init(GPIOB,5,1,1);
	// Set Mode to output  of pin 6 GPIOB
	GPIO_Init(GPIOB,6,1,1);
	// Set Mode to output  of pin 7 GPIOB
	GPIO_Init(GPIOB,7,1,1);
	// Set Mode to input  of pin 3 GPIOB
	GPIO_Init(GPIOB,3,0,1);
	//set input pin 3 into pull up
	GPIOB ->PUPDR |=(1<<6);
	GPIOB ->PUPDR &=~(1<<7);
	// super loop
	int i = 0 ;
	int k = 0 ;
	while(1)
	{
		if(GPIO_READPIN(GPIOB,3)== 0){k = 0;}
		if(GPIO_READPIN(GPIOB,3)== 1){if(k == 0){

			switch(i){

			case 0 :
				GPIO_Write(GPIOB,5,0);
				GPIO_Write(GPIOB,6,0);
				GPIO_Write(GPIOB,7,0);
				i ++ ;
				break ;
			case 1 :
				GPIO_Write(GPIOB,5,1);
				GPIO_Write(GPIOB,6,0);
				GPIO_Write(GPIOB,7,0);
				i ++ ;
				break ;
			case 2 :
				GPIO_Write(GPIOB,5,0);
				GPIO_Write(GPIOB,6,1);
				GPIO_Write(GPIOB,7,0);
				i ++ ;
				break ;
			case 3 :
				GPIO_Write(GPIOB,5,1);
				GPIO_Write(GPIOB,6,1);
				GPIO_Write(GPIOB,7,0);
				i ++ ;
				break ;
			case 4 :
				GPIO_Write(GPIOB,5,0);
				GPIO_Write(GPIOB,6,0);
				GPIO_Write(GPIOB,7,1);
				i ++ ;
				break ;
			case 5 :
				GPIO_Write(GPIOB,5,1);
				GPIO_Write(GPIOB,6,0);
				GPIO_Write(GPIOB,7,1);
				i ++ ;
				break ;
			case 6 :
				GPIO_Write(GPIOB,5,0);
				GPIO_Write(GPIOB,6,1);
				GPIO_Write(GPIOB,7,1);
				i ++ ;
				break ;
			case 7 :
				GPIO_Write(GPIOB,5,1);
				GPIO_Write(GPIOB,6,1);
				GPIO_Write(GPIOB,7,1);
				i = 0 ;
				break ;
			}
			k = 1 ;
			}

		}




		}



	}


