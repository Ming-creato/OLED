#include "stm32f10x.h"                  // Device header
#include "OLED.h" 

int main(void)
{
	
	
	  OLED_Init();
	
	  OLED_ShowChinese(20,0,"Ð»ºèí®");
	  OLED_ShowNum(0,20,6,1,OLED_8X16);
	  OLED_ShowNum(7,20,3,1,OLED_8X16);
	  OLED_ShowNum(14,20,2,1,OLED_8X16);
	  OLED_ShowNum(21,20,3,1,OLED_8X16);
	  OLED_ShowNum(28,20,0,1,OLED_8X16);
	  OLED_ShowNum(35,20,7,1,OLED_8X16);
	  OLED_ShowNum(42,20,0,1,OLED_8X16);
	  OLED_ShowNum(49,20,3,1,OLED_8X16);
	  OLED_ShowNum(56,20,0,1,OLED_8X16);
	  OLED_ShowNum(63,20,5,1,OLED_8X16);
	  OLED_ShowNum(70,20,2,1,OLED_8X16);
	  OLED_ShowNum(77,20,1,1,OLED_8X16);
	  OLED_Update();
	  while (1)
		{
		

			
		}
}
