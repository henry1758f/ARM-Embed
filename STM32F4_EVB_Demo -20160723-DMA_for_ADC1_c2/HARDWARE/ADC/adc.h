#ifndef __ADC_H
#define __ADC_H	
#include "sys.h" 

 							   
void Adc_Init(void); 				//ADC��l��
u16  Get_Adc(u8 cv); 				//���o ��DMA�����s��
u16 Get_Adc_Average(u8 cv,u8 times); //����
float Get_Temperature(void); //���oMCU�ū�
extern uint16_t ADC1ConvertedValue[]; //�~�]�Ȧs��
#endif 















