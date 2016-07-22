/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/timer.h
  * @author  UbeeWu
  * @version V1.0.0
  * @date    16-July(7)-2016
  * @brief   This file contains the headers of the timer interrupt handlers.
  ******************************************************************************
  * @attention
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#ifndef _TIMER_H
#define _TIMER_H

#include "main.h"
void TIM3_Int_Init(u16 arr,u16 psc);
extern uint16_t tim3_test_count;
#endif
