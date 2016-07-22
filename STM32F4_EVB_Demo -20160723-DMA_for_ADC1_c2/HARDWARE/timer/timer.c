/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/timer.c
  * @author  UbeeWu
  * @version V1.0.0
  * @date    16-July(7)-2016
  * @brief   timer program body
  ******************************************************************************
  * @attention
  ******************************************************************************
  */
#include "main.h"
#include "timer.h"

uint16_t tim3_test_count=0;
void TIM3_Int_Init(u16 arr,u16 psc)
{
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);  //時鐘源智能..step1
	
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure;
	TIM_TimeBaseInitStructure.TIM_Period = arr; 	//自動裝載值
	TIM_TimeBaseInitStructure.TIM_Prescaler=psc;  //預分頻係數
	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up; //上數模式
	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1; //輸入捕獲用
	TIM_TimeBaseInit(TIM3,&TIM_TimeBaseInitStructure);//初始化Tim3..step2
	
	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE); //中斷智能   (計時器3,更新中斷,智能)..step3
	
	NVIC_InitTypeDef NVIC_InitStructure;
	NVIC_InitStructure.NVIC_IRQChannel=TIM3_IRQn; //定時器3中斷
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=0x01; //搶占優先級1
	NVIC_InitStructure.NVIC_IRQChannelSubPriority=0x03; //子優先級3
	NVIC_InitStructure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Init(&NVIC_InitStructure);//開啟中斷..step4
	
	TIM_Cmd(TIM3,ENABLE); //定時器智能..step5
	
}

//中斷服務函數
void TIM3_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM3,TIM_IT_Update)==SET) //若是TIM3觸發中斷
	{
		tim3_test_count++;
	}
	TIM_ClearITPendingBit(TIM3,TIM_IT_Update);  //賦歸中斷標誌
}
