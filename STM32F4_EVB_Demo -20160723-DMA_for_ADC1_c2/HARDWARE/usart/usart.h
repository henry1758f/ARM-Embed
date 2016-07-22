/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/usart.h
  * @author  UbeeWu
  * @version V1.0.0
  * @date    15-July(7)-2016
  * @brief   This file contains the headers of the USART interrupt handlers.
  ******************************************************************************
  * @attention
  *�p�G�ϥ�ucos,�i�]�A�U�C���Y��
  *#if SYSTEM_SUPPORT_OS
  *#include "includes.h"					  
  *#endif
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "stm32f4xx_conf.h"

#define USART_REC_LEN  			200  	//�w�q�̤j�����r����
#define EN_USART1_RX 			1		// Enable USART1 RX
	  	
extern uint8_t  USART_RX_BUF[USART_REC_LEN]; //�����w�� 
extern uint16_t USART_RX_STA;         		//�������A�X��	
//�Y�ϥΤ��_�����A�Фŵ����U�C�w�q
void uart_init(u32 bound);
#endif


