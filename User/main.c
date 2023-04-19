
#include "gpioweidai.h"
#include "LED.h"
void delay(u32 i)
{
while(i--);
}

int main()
{
	LED_Init(); 
	
	while(1)
	{
		 led1=0;
		 led2=1;
         delay(6000000);
         led1=1;
		 led2=0;
         delay(6000000);		
	}
} 

