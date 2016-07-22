#include "adc.h"
#include "led.h"
#include "delay.h"		 
uint16_t ADC1ConvertedValue[] = {0,0};//Stores converted vals
//��l��ADC														   
void  Adc_Init(void)
{    
	
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_DMA2 | RCC_AHB1Periph_GPIOA, ENABLE);//����GPIOA����
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE); //����ADC1����
	
	/* DMA2 Stream0 channel0 configuration **************************************/
	DMA_InitTypeDef DMA_InitStruct;
	DMA_InitStruct.DMA_Channel = DMA_Channel_0;
	DMA_InitStruct.DMA_PeripheralBaseAddr = (uint32_t)&ADC1->DR;//ADC1's data register
	DMA_InitStruct.DMA_Memory0BaseAddr = (uint32_t)&ADC1ConvertedValue;
	DMA_InitStruct.DMA_DIR = DMA_DIR_PeripheralToMemory;
	DMA_InitStruct.DMA_BufferSize = 2; //�~�]�Ȧs���j�p
	DMA_InitStruct.DMA_PeripheralInc = DMA_PeripheralInc_Disable;//�~�]�����W
	DMA_InitStruct.DMA_MemoryInc = DMA_MemoryInc_Enable;//���s���W (0~1)
	DMA_InitStruct.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;//Reads 16 bit values
	DMA_InitStruct.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;//Stores 16 bit values
	DMA_InitStruct.DMA_Mode = DMA_Mode_Circular;
	DMA_InitStruct.DMA_Priority = DMA_Priority_High;
	DMA_InitStruct.DMA_FIFOMode = DMA_FIFOMode_Disable;
	DMA_InitStruct.DMA_FIFOThreshold = DMA_FIFOThreshold_HalfFull;
	DMA_InitStruct.DMA_MemoryBurst = DMA_MemoryBurst_Single;
	DMA_InitStruct.DMA_PeripheralBurst = DMA_PeripheralBurst_Single;
	DMA_Init(DMA2_Stream0, &DMA_InitStruct);
	DMA_Cmd(DMA2_Stream0, ENABLE);
	
	/* Configure GPIO pins ******************************************************/
	GPIO_InitTypeDef  GPIO_InitStructure;
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;//PA5 �q�D5
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;//������J
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL ;//We don't need any pull up or pull down
  GPIO_Init(GPIOA, &GPIO_InitStructure);
 
  /* Inner Temperature Init **********************************************************/
	ADC_TempSensorVrefintCmd(ENABLE);//�ϥΤ����ū׭p
	/* ADC Common Init **********************************************************/
	ADC_CommonInitTypeDef ADC_CommonInitStructure;
  ADC_CommonInitStructure.ADC_Mode = ADC_Mode_Independent;//�W�߼Ҧ�
  ADC_CommonInitStructure.ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_5Cycles;//��ӱļ˶��q�������𤭭Ӯ���
  ADC_CommonInitStructure.ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled; //DMA����
  ADC_CommonInitStructure.ADC_Prescaler = ADC_Prescaler_Div4;//�w���W=4���AADCCLK=PCLK2/4=84/4=21Mhz,ADC�����̦n���n�W�L36Mhz 
  ADC_CommonInit(&ADC_CommonInitStructure);
	/* ADC1 Init ****************************************************************/
	ADC_InitTypeDef       ADC_InitStructure;
  ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;//12��Ҧ�
  ADC_InitStructure.ADC_ScanConvMode = ENABLE;//���y�Ҧ�
  ADC_InitStructure.ADC_ContinuousConvMode = ENABLE;//�s�u�ഫ
	ADC_InitStructure.ADC_ExternalTrigConv = 0;
  ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;//�T��Ĳ�o�˴��A�ϥγn��Ĳ�o
  ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;//�k���
  ADC_InitStructure.ADC_NbrOfConversion = 2; //2���ഫ�b�W�h�ǦC���A�]�N�O�ഫ�W�h�ǦC1�B2
  ADC_Init(ADC1, &ADC_InitStructure);
	/* Select the channels to be read from **************************************/
	ADC_RegularChannelConfig(ADC1, ADC_Channel_5 , 1, ADC_SampleTime_480Cycles );  //�C��
	ADC_RegularChannelConfig(ADC1,ADC_Channel_TempSensor, 2, ADC_SampleTime_480Cycles );//�C��
	/* Enable DMA request after last transfer (Single-ADC mode) */
	ADC_DMARequestAfterLastTransferCmd(ADC1, ENABLE);
	/* Enable ADC1 DMA */
	ADC_DMACmd(ADC1, ENABLE);
	/* Enable ADC1 */
	ADC_Cmd(ADC1, ENABLE);//�}�_ADC1�ഫ��
}				  

//��oADC��
//cv �~�]�Ȧs�����Ӧ�
u16 Get_Adc(u8 cv)   
{
  ADC_DMACmd(ADC1, ENABLE);
	ADC_SoftwareStartConv(ADC1);
	return ADC1ConvertedValue[cv];
}

//��������
u16 Get_Adc_Average(u8 cv,u8 times)
{
	u32 temp_val=0;
	u8 t;
	for(t=0;t<times;t++)
	{
		temp_val+=Get_Adc(cv);
		delay_ms(5);
	}
	return temp_val/times;
} 
	 

//�o��ū׭�
//���٭�:�ū׭�(�Ťj��100��)
float Get_Temperature(void)
{
	u32 adcx;
 	double temperate;
	adcx=Get_Adc_Average(1,10);	//Ū���q�D16���ū׭�,10������
	temperate=(float)adcx*(3.3/4096);		//�q����
	temperate=(temperate-0.76)/0.0025 + 25; //�ഫ�ū� 
	return temperate;
}







