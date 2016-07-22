/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/usart.h
  * @author  UbeeWu
  * @version V1.0.0
  * @date    15-July(7)-2016
  * @brief   This file contains the headers of the USART interrupt handlers.
  ******************************************************************************
  * @attention
  *如果使用ucos,可包括下列標頭檔
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

#define USART_REC_LEN  			200  	//定義最大接收字元數
#define EN_USART1_RX 			1		// Enable USART1 RX
	  	
extern uint8_t  USART_RX_BUF[USART_REC_LEN]; //接收緩衝 
extern uint16_t USART_RX_STA;         		//接收狀態旗標	
//若使用中斷接收，請勿註釋下列定義
void uart_init(u32 bound);
#endif


