#include "adc.h"
#include "led.h"
#include "delay.h"		 
uint16_t ADC1ConvertedValue[] = {0,0};//Stores converted vals
//初始化ADC														   
void  Adc_Init(void)
{    
	
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_DMA2 | RCC_AHB1Periph_GPIOA, ENABLE);//智能GPIOA時鐘
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE); //智能ADC1時鐘
	
	/* DMA2 Stream0 channel0 configuration **************************************/
	DMA_InitTypeDef DMA_InitStruct;
	DMA_InitStruct.DMA_Channel = DMA_Channel_0;
	DMA_InitStruct.DMA_PeripheralBaseAddr = (uint32_t)&ADC1->DR;//ADC1's data register
	DMA_InitStruct.DMA_Memory0BaseAddr = (uint32_t)&ADC1ConvertedValue;
	DMA_InitStruct.DMA_DIR = DMA_DIR_PeripheralToMemory;
	DMA_InitStruct.DMA_BufferSize = 2; //外設暫存器大小
	DMA_InitStruct.DMA_PeripheralInc = DMA_PeripheralInc_Disable;//外設不遞增
	DMA_InitStruct.DMA_MemoryInc = DMA_MemoryInc_Enable;//內存遞增 (0~1)
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
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;//PA5 通道5
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;//模擬輸入
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL ;//We don't need any pull up or pull down
  GPIO_Init(GPIOA, &GPIO_InitStructure);
 
  /* Inner Temperature Init **********************************************************/
	ADC_TempSensorVrefintCmd(ENABLE);//使用內部溫度計
	/* ADC Common Init **********************************************************/
	ADC_CommonInitTypeDef ADC_CommonInitStructure;
  ADC_CommonInitStructure.ADC_Mode = ADC_Mode_Independent;//獨立模式
  ADC_CommonInitStructure.ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_5Cycles;//兩個採樣階段之間延遲五個時鐘
  ADC_CommonInitStructure.ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled; //DMA失能
  ADC_CommonInitStructure.ADC_Prescaler = ADC_Prescaler_Div4;//預分頻=4分，ADCCLK=PCLK2/4=84/4=21Mhz,ADC時鐘最好不要超過36Mhz 
  ADC_CommonInit(&ADC_CommonInitStructure);
	/* ADC1 Init ****************************************************************/
	ADC_InitTypeDef       ADC_InitStructure;
  ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;//12位模式
  ADC_InitStructure.ADC_ScanConvMode = ENABLE;//掃描模式
  ADC_InitStructure.ADC_ContinuousConvMode = ENABLE;//連線轉換
	ADC_InitStructure.ADC_ExternalTrigConv = 0;
  ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;//禁止觸發檢測，使用軟件觸發
  ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;//右對齊
  ADC_InitStructure.ADC_NbrOfConversion = 2; //2個轉換在規則序列中，也就是轉換規則序列1、2
  ADC_Init(ADC1, &ADC_InitStructure);
	/* Select the channels to be read from **************************************/
	ADC_RegularChannelConfig(ADC1, ADC_Channel_5 , 1, ADC_SampleTime_480Cycles );  //列隊
	ADC_RegularChannelConfig(ADC1,ADC_Channel_TempSensor, 2, ADC_SampleTime_480Cycles );//列隊
	/* Enable DMA request after last transfer (Single-ADC mode) */
	ADC_DMARequestAfterLastTransferCmd(ADC1, ENABLE);
	/* Enable ADC1 DMA */
	ADC_DMACmd(ADC1, ENABLE);
	/* Enable ADC1 */
	ADC_Cmd(ADC1, ENABLE);//開起ADC1轉換器
}				  

//獲得ADC值
//cv 外設暫存的哪個位
u16 Get_Adc(u8 cv)   
{
  ADC_DMACmd(ADC1, ENABLE);
	ADC_SoftwareStartConv(ADC1);
	return ADC1ConvertedValue[cv];
}

//平均公式
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
	 

//得到溫度值
//返還值:溫度值(空大為100倍)
float Get_Temperature(void)
{
	u32 adcx;
 	double temperate;
	adcx=Get_Adc_Average(1,10);	//讀取通道16內溫度值,10次平均
	temperate=(float)adcx*(3.3/4096);		//電壓值
	temperate=(temperate-0.76)/0.0025 + 25; //轉換溫度 
	return temperate;
}







