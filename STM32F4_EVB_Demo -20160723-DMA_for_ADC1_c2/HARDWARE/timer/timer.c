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
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);  //����������..step1
	
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure;
	TIM_TimeBaseInitStructure.TIM_Period = arr; 	//�۰ʸ˸���
	TIM_TimeBaseInitStructure.TIM_Prescaler=psc;  //�w���W�Y��
	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up; //�W�ƼҦ�
	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1; //��J�����
	TIM_TimeBaseInit(TIM3,&TIM_TimeBaseInitStructure);//��l��Tim3..step2
	
	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE); //���_����   (�p�ɾ�3,��s���_,����)..step3
	
	NVIC_InitTypeDef NVIC_InitStructure;
	NVIC_InitStructure.NVIC_IRQChannel=TIM3_IRQn; //�w�ɾ�3���_
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=0x01; //�m�e�u����1
	NVIC_InitStructure.NVIC_IRQChannelSubPriority=0x03; //�l�u����3
	NVIC_InitStructure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Init(&NVIC_InitStructure);//�}�Ҥ��_..step4
	
	TIM_Cmd(TIM3,ENABLE); //�w�ɾ�����..step5
	
}

//���_�A�Ȩ��
void TIM3_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM3,TIM_IT_Update)==SET) //�Y�OTIM3Ĳ�o���_
	{
		tim3_test_count++;
	}
	TIM_ClearITPendingBit(TIM3,TIM_IT_Update);  //���k���_�лx
}
