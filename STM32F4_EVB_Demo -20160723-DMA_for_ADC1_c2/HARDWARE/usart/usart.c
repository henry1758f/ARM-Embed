/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/usart.c
  * @author  UbeeWu
  * @version V1.0.0
  * @date    15-July(7)-2016
  * @brief   usart program body
  ******************************************************************************
  * @attention
	*�p�G�ϥ�ucos,�i�]�A�U�C���Y��
	*#if SYSTEM_SUPPORT_OS
	*#include "includes.h"					  
	*#endif
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "usart.h"	

#if 1
#pragma import(__use_no_semihosting)             
//�зǮw����������               
struct __FILE 
{ 
	int handle; 
}; 

FILE __stdout;       
//Define _sys_exit() �קK�b�D����   
void _sys_exit(int x) 
{ 
	x = x; 
} 
//���s�w�qfputc��� �ثe�w�q��USART1�ϥ�
int fputc(int ch, FILE *f)
{ 	
	while((USART1->SR&0X40)==0);//�`���o�e�A����o�e����  
	USART1->DR = (u8) ch;      
	return ch;
}
#endif
 
#if EN_USART1_RX   //�p�G����F����
//USART1���_�A�ȵ{��
//�ϥ�USARTx->SR ���קK���W�䧮�����~
uint8_t USART_RX_BUF[USART_REC_LEN];     //�����w��
//�������A
//bit15 ���������лx
//bit14 ������0x0D
//bit13~0 �����즳�Ħr����ƥ�
u16 USART_RX_STA=0;       //�������A�аO
//��l��IO -> USART1
void uart_init(u32 bound){
   //set GPIO
  GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE); //�ϥ�GPIOA����
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1,ENABLE);//�ϥ�USART1����
 
	//GPIO�_�άM�g
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource9,GPIO_AF_USART1); //GPIOA9�_�ά�USART1
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource10,GPIO_AF_USART1); //GPIOA10�_�ά�USART1
	
	//USART1�ݤf�t�m
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10; //GPIOA9�PGPIOA10
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;//�_�Υ\��
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;	//�t��50Hz
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP; //���ߴ_�ο�X
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP; //�W��
	GPIO_Init(GPIOA,&GPIO_InitStructure); //��l��PA9�APA10

   //USART1 ��l�Ƴ]�m
	USART_InitStructure.USART_BaudRate = bound;//�i�S�߳]�m
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;//�r����8bit�ƾڮ榡
	USART_InitStructure.USART_StopBits = USART_StopBits_1;//�@�Ӱ����
	USART_InitStructure.USART_Parity = USART_Parity_No;//�L�_�����ե�
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;//�L�w��ƾڬy����
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//���o�Ҧ�
  USART_Init(USART1, &USART_InitStructure); //��l��USART1
	
  USART_Cmd(USART1, ENABLE);  //����USART1
	//USART_ClearFlag(USART1, USART_FLAG_TC);
	
#if EN_USART1_RX	
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);//�}�Ҭ������_
	//USART1 NVIC �t�m
  NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;//USART1���_�q�D
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=3;//�m���u������3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority =3;		//�l�u����3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQ�q�D����
	NVIC_Init(&NVIC_InitStructure);	//�ھګ��w�Ѽƪ�l��VIC�H�s��
#endif
}


void USART1_IRQHandler(void)      //USART1���_�A�ȵ{��
{
	u8 Res;
#if SYSTEM_SUPPORT_OS 		//�YSYSTEM_SUPPORT_OS���u�A�h�ݭn���OS.
	OSIntEnter();    
#endif
	
	if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)  //�������_(�����쪺�ƾڥ����O0x0D 0x0A����)
	{
		Res =USART_ReceiveData(USART1);//(USART1->DR);	//Ū�������쪺�ƾ�
		
		if((USART_RX_STA&0x8000)==0)//����������
		{
			if(USART_RX_STA&0x4000)//������F0x0D
			{
				if(Res!=0x0a)USART_RX_STA=0;//�������~�A���s�}�l
				else USART_RX_STA|=0x8000;	//��������
			}
			else //������0X0D
			{	
				if(Res==0x0d)USART_RX_STA|=0x4000;
				else
				{
					USART_RX_BUF[USART_RX_STA&0X3FFF]=Res ;
					USART_RX_STA++;
					if(USART_RX_STA>(USART_REC_LEN-1))USART_RX_STA=0;//�����ƾڿ��~�A���s�}�l����
				}		 
			}
		}   		 
  } 
#if SYSTEM_SUPPORT_OS 	
	OSIntExit();  											 
#endif
} 
#endif	

 



