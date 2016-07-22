#ifndef __ADC_H
#define __ADC_H	
#include "sys.h" 

 							   
void Adc_Init(void); 				//ADC初始化
u16  Get_Adc(u8 cv); 				//取得 由DMA直接存取
u16 Get_Adc_Average(u8 cv,u8 times); //平均
float Get_Temperature(void); //取得MCU溫度
extern uint16_t ADC1ConvertedValue[]; //外設暫存器
#endif 















