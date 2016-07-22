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
	/*step1*///���� TIM14 �P GPIO ������
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM14,ENABLE);  	//����TIM14
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE); 	//����GPIO�����A�]���n�Ψ�PF9�@��PWM��X
	/*step2*///IO�f�_�άM�g��TIM14
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;           //GPIOF9
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;        //�_�Υ\��
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;	//100MHz
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;      //��X�Ҧ�
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;        //
	GPIO_Init(GPIOF,&GPIO_InitStructure);              //��l��IO(PF9)
	/*step3*///��l��IO�f���_�Υ\��
	GPIO_PinAFConfig(GPIOF,GPIO_PinSource9,GPIO_AF_TIM14); //GPIOF9�_�άM�g�� TIM14
	/*step4*///��l�ƭp�ɾ�
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Prescaler = psc;  //�w���W�Y��
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up; //�W��
	TIM_TimeBaseStructure.TIM_Period = arr;   //�۰ʸ˸���
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //��J����ΡA�o�̥Τ���
	TIM_TimeBaseInit(TIM14,&TIM_TimeBaseStructure);//��l��Tim14
	/*step5*///��l�ƿ�X����Ѽ� timer 14 output channel
	TIM_OCInitTypeDef  TIM_OCInitStructure;
	TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1; //PWM�Ҧ�1�μҦ�2
 	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable; //��X����
	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low; //�����X������ʧC�A��Ȥp�ɡA���Ĺq�W���C�q�W
	TIM_OCInitStructure.TIM_OutputState= TIM_OutputState_Enable; //
	TIM_OC1Init(TIM14, &TIM_OCInitStructure);  //�q�D��l��TIM14_OC1
	/*step6*///����q�D1������w�˸�
	TIM_OC1PreloadConfig(TIM14, TIM_OCPreload_Enable); 
  /*step7*///����۰ʭ��˸��w���H�s��
	TIM_ARRPreloadConfig(TIM14,ENABLE);  
	/*step8*///����p�ɾ�
	TIM_Cmd(TIM14, ENABLE);  //TIM14

}  


