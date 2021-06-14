#include "stm32f1xx_hal.h"
#include "lcd.h" 

tft_lcd_type curr_tft_lcd = tft43_lcd;
u16 lcd_id = 0x00;	 

unsigned int  POINT_COLOR=RED;
unsigned int  BACK_COLOR=0XFFFF;



void lcd_rst(void)
{
	LCD_RESET_LOW();
	HAL_Delay(10);
	HAL_Delay(10);
	HAL_Delay(10);
	HAL_Delay(10);
	HAL_Delay(10);
    LCD_RESET_HIGH();	
}

void lcd_wr_reg(unsigned int index)
{
	*(__IO uint16_t *) (Bank1_LCD_C)= index;

}

void lcd_wr_cmd(unsigned int index)
{
	*(__IO uint16_t *) (Bank1_LCD_C)= index;

}



void lcd_wr_reg_value(u16 LCD_Reg, u16 LCD_RegValue)
{	
	*(__IO uint16_t *) (Bank1_LCD_C)= LCD_Reg;	
	*(__IO uint16_t *) (Bank1_LCD_D)= LCD_RegValue;
}


unsigned int lcd_rd_data(void)
{
	unsigned int a=0;
	//a=(*(__IO uint16_t *) (Bank1_LCD_D)); 	//Dummy
	//a= *(__IO uint16_t *) (Bank1_LCD_D);  	//H
	//a=a<<8;
	a=*(__IO uint16_t *) (Bank1_LCD_D); //L

	return(a);	
}

void lcd_wr_data(unsigned int val)
{   
	*(__IO uint16_t *) (Bank1_LCD_D)= val; 	
}

void lcd_wr_data_8(unsigned int val)
{
	*(__IO uint16_t *) (Bank1_LCD_D)= val;
}

u32 mn(u8 m,u8 n)
{
	u32 result=1;	 
	while(n--)result*=m;    
	return result;
}

//m ^n function
u32 mypow (u8 m, u8 n)
{
	u32 result=1;	 
	while (n--) result*=m;    
	return result;
}	


uint16_t LCD_RGB2Pixel565(uint8_t r, uint8_t g, uint8_t b)
{
	/* RGB2PIXEL565 from a Macro in Greg Haerr's Nano-X, MPL license */
	return ((((r) & 0xf8) << 8) | (((g) & 0xfc) << 3) | (((b) & 0xf8) >> 3));
}



