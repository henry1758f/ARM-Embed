/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/pwm.c
  * @author  UbeeWu
  * @version V1.0.0
  * @date    17-July(7)-2016
  * @brief   pwm program body
  ******************************************************************************
  * @attention
  ******************************************************************************
  */
#include "main.h"
#include "pwm.h"
void TIM14_PWM_Init(u32 arr,u32 psc)
{		 					 
	/*step1*///智能 TIM14 與 GPIO 時鐘源
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM14,ENABLE);  	//智能TIM14
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE); 	//智能GPIO時鐘，因為要用到PF9作為PWM輸出
	/*step2*///IO口復用映射至TIM14
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;           //GPIOF9
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;        //復用功能
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;	//100MHz
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;      //輸出模式
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;        //
	GPIO_Init(GPIOF,&GPIO_InitStructure);              //初始化IO(PF9)
	/*step3*///初始化IO口為復用功能
	GPIO_PinAFConfig(GPIOF,GPIO_PinSource9,GPIO_AF_TIM14); //GPIOF9復用映射至 TIM14
	/*step4*///初始化計時器
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Prescaler = psc;  //預分頻係數
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up; //上數
	TIM_TimeBaseStructure.TIM_Period = arr;   //自動裝載值
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //輸入捕獲用，這裡用不到
	TIM_TimeBaseInit(TIM14,&TIM_TimeBaseStructure);//初始化Tim14
	/*step5*///初始化輸出比較參數 timer 14 output channel
	TIM_OCInitTypeDef  TIM_OCInitStructure;
	TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1; //PWM模式1或模式2
 	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable; //輸出智能
	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low; //比較輸出比較極性低，比值小時，有效電頻為低電頻
	TIM_OCInitStructure.TIM_OutputState= TIM_OutputState_Enable; //
	TIM_OC1Init(TIM14, &TIM_OCInitStructure);  //通道初始化TIM14_OC1
	/*step6*///智能通道1的比較預裝載
	TIM_OC1PreloadConfig(TIM14, TIM_OCPreload_Enable); 
  /*step7*///智能自動重裝載預載寄存器
	TIM_ARRPreloadConfig(TIM14,ENABLE);  
	/*step8*///智能計時器
	TIM_Cmd(TIM14, ENABLE);  //TIM14

}  


