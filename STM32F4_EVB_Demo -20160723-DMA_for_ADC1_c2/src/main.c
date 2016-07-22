/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/main.c
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    16-March-2016
  * @brief   Main program body
  ******************************************************************************
  * @attention
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "stm32f4xx_it.h"
#include "stm32f4xx_tim.h"
#include "timer.h"
#include "pwm.h"
#include "sys.h"
#include "usart.h"
#include "led.h"
#include "delay.h"
#include "adc.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define SYSTEMTICK_PERIOD_MS 	1
//#define AUDIO_FILE_SZE			990000
//#define AUIDO_START_ADDRESS		58 /* Offset relative to audio file header size */


/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
extern uint32_t cid, revid;
//USB_OTG_CORE_HANDLE	USB_OTG_dev;
__IO uint32_t LocalTime = 0; /* this variable is used to create a time reference incremented by 10ms */
__IO uint32_t uwVolume = 70;
static __IO uint32_t uwTimingDelay;
uint32_t testdata[sEE_PAGESIZE / 4], readdata[sEE_PAGESIZE / 4];
uint16_t uhNumDataRead;
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
void TIM3_Int_Init(u16 arr,u16 psc);
void TIM14_PWM_Init(u32 arr,u32 psc);
/**
  * @brief   Main program
  * @param  None
  * @retval None
  */
int main(void)
{
	/* Initialize the USART1 **************************************************/
	//uart_init(115200);
	/* Display message on LCD *************************************************/
	TIM3_Int_Init(10000-1,8400-1);//(重裝載係數,預分頻係數)->(arr+1)*[(psc+1)/CK_PSC] =(10000+1)*[(8399+1)/84M]= 10000次*0.1ms = 1s
	TIM14_PWM_Init(500-1,84-1);
	/* Initialize the SRAM ****************************************************/
	PSRAM_Init();
	/* Initialize the LCD and display message *********************************/
	char aa[50];
	LCD_Init(LCD_DIR_HORIZONTAL); //USE_H使用橫屏 USE_V使用豎屏
	LCD_Clear(LCD_COLOR_WHITE);
	LCD_SetColors(LCD_COLOR_BLUE,LCD_COLOR_WHITE);
	if(LCD_DIR_HORIZONTAL){ // LCD_DIR_VERTICAL / LCD_DIR_HORIZONTAL
		sprintf(aa,"  STM32F407xx  ");
		LCD_DisplayStringLine(LCD_LINE_0, (uint8_t *)aa);
		sprintf(aa,"Device  running");
		LCD_DisplayStringLine(LCD_LINE_1, (uint8_t *)aa);
		sprintf(aa,"  STM32F4-EVB  ");
		LCD_DisplayStringLine(LCD_LINE_2, (uint8_t *)aa);
	}
	else{
		sprintf(aa,"  STM32F407xx  ");
		LCD_DisplayStringLine(LCD_LINE_0, (uint8_t *)aa);
		sprintf(aa,"Device__running");
		LCD_DisplayStringLine(LCD_LINE_1, (uint8_t *)aa);
		sprintf(aa,"  STM32F4-EVB  ");
		LCD_DisplayStringLine(LCD_LINE_2, (uint8_t *)aa);
	}
	/* Initialize the LED *****************************************************/
	LED_Init();
	/* Initialize the ADC *****************************************************/
	Adc_Init();  
	/* Display message on LCD *************************************************/

	delay_init(168);
	PFout(7)=1;
	delay_ms(100);
	PFout(7)=0;
	delay_ms(100);
	PFout(7)=1;
	delay_ms(100);
	PFout(7)=0;
	delay_ms(100);
	
	u16 adcx;
	float temp;
	float temperature;
	/* Add your application code here */
	while (1)
	{
		/*序列0讀取值*/
		adcx=Get_Adc_Average(0,20);
		sprintf(aa,"ADC_CV0: %d ",adcx);
		LCD_DisplayStringLine(Line5, (uint8_t *)aa);
		/*轉換電壓值*/
		temp=(float)adcx*(3.3/4096);
		sprintf(aa,"Vot:%f ",temp);
		LCD_DisplayStringLine(Line8, (uint8_t *)aa);
		
		/*序列1讀取值*/
		adcx=Get_Adc_Average(1,20);
		sprintf(aa,"ADC_CV1: %d ",adcx);
		LCD_DisplayStringLine(Line6, (uint8_t *)aa);
		/*轉換溫度值*/
		temperature=Get_Temperature();	//溫度
		sprintf(aa,"Temp:%fC ",temperature);
		LCD_DisplayStringLine(Line9, (uint8_t *)aa);

	}
}


#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while (1)
	{
	}
}
#endif

/**
  * 
  */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
