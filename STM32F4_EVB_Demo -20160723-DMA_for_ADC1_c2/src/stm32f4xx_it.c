/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/stm32f4xx_it.c
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-March-2013
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and
  *          peripherals interrupt service routine.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2013 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_it.h"


#if defined (USE_STM322xG_EVAL)
	#include "stm322xg_eval.h"
	#include "stm322xg_eval_ioe.h"
#elif defined(USE_STM324xG_EVAL)
	#include "stm324xg_eval.h"
	#include "stm324xg_eval_ioe.h"
#elif defined (USE_STM3210C_EVAL)
	#include "stm3210c_eval.h"
	#include "stm3210c_eval_ioe.h"
#elif defined (USE_STM32F4_EVB)
	#include "stm32f4_evb.h"
#else
	#error "Missing define: Evaluation board (ie. USE_STM322xG_EVAL)"
#endif
#include "lcd_log.h"



/** @addtogroup Template_Project
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
//extern __IO uint8_t EthLinkStatus;
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
//extern USB_OTG_CORE_HANDLE				USB_OTG_dev;
//extern uint32_t USBD_OTG_ISR_Handler	(USB_OTG_CORE_HANDLE *pdev);

//#ifdef USB_OTG_HS_DEDICATED_EP1_ENABLED
//extern uint32_t USBD_OTG_EP1IN_ISR_Handler	(USB_OTG_CORE_HANDLE *pdev);
//extern uint32_t USBD_OTG_EP1OUT_ISR_Handler	(USB_OTG_CORE_HANDLE *pdev);
//#endif

/******************************************************************************/
/*            Cortex-M4 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief   This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
	while (1)
	{
	}
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
	while (1)
	{
	}
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
	while (1)
	{
	}
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
	while (1)
	{
	}
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles PendSVC exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
//void SysTick_Handler(void)
//{
//	TimingDelay_Decrement();
//	/* Update the LocalTime by adding SYSTEMTICK_PERIOD_MS each SysTick interrupt */
//	Time_Update();
//}


//#ifdef USE_USB_OTG_FS
//void OTG_FS_WKUP_IRQHandler(void)
//{
//  if(USB_OTG_dev.cfg.low_power)
//  {
//    *(uint32_t *)(0xE000ED10) &= 0xFFFFFFF9 ;
//    SystemInit();
//    USB_OTG_UngateClock(&USB_OTG_dev);
//  }
//  EXTI_ClearITPendingBit(EXTI_Line18);
//}
//#endif
//
///**
//  * @brief  This function handles EXTI15_10_IRQ Handler.
//  * @param  None
//  * @retval None
//  */
//#ifdef USE_USB_OTG_HS
//void OTG_HS_WKUP_IRQHandler(void)
//{
//	if (USB_OTG_dev.cfg.low_power)
//	{
//		*(uint32_t *)(0xE000ED10) &= 0xFFFFFFF9 ;
//		SystemInit();
//		USB_OTG_UngateClock(&USB_OTG_dev);
//	}
//	EXTI_ClearITPendingBit(EXTI_Line20);
//}
//#endif

/**
  * @brief  This function handles OTG_HS Handler.
  * @param  None
  * @retval None
  */
//#ifdef USE_USB_OTG_HS
//void OTG_HS_IRQHandler(void)
//#else
//void OTG_FS_IRQHandler(void)
//#endif
//{
//	USBD_OTG_ISR_Handler(&USB_OTG_dev);
//}

#ifdef USB_OTG_HS_DEDICATED_EP1_ENABLED
/**
  * @brief  This function handles EP1_IN Handler.
  * @param  None
  * @retval None
  */
//void OTG_HS_EP1_IN_IRQHandler(void)
//{
//	USBD_OTG_EP1IN_ISR_Handler(&USB_OTG_dev);
//}

/**
  * @brief  This function handles EP1_OUT Handler.
  * @param  None
  * @retval None
  */
//void OTG_HS_EP1_OUT_IRQHandler(void)
//{
//	USBD_OTG_EP1OUT_ISR_Handler(&USB_OTG_dev);
//}
#endif

/**
  * @brief  This function handles External line 2 interrupt request.
  * @param  None
  * @retval None
  */
//void EXTI2_IRQHandler(void)
//{
//    EXTI_ClearITPendingBit(EXTI_Line2);
//	STM_EVAL_LEDToggle(LED2);
//}
//
//void EXTI15_10_IRQHandler(void) 
//{
//	if (EXTI_GetITStatus(EXTI_Line15) != RESET)
//	{
//		if (EthLinkStatus == 0)
//		{
//			/*connect to tcp server */ 
//			tcp_echoclient_connect();
//		}
//		/* Clear the EXTI line  pending bit */
//		EXTI_ClearITPendingBit(KEY_BUTTON_EXTI_LINE);
//	}
//	if (EXTI_GetITStatus(ETH_LINK_EXTI_LINE) != RESET)
//	{
//		Eth_Link_ITHandler(DP83848_PHY_ADDRESS);
//		/* Clear interrupt pending bit */
//		EXTI_ClearITPendingBit(ETH_LINK_EXTI_LINE);
//	}
//}

/******************************************************************************/
/*                 STM32F4xx Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f40xx.s/startup_stm32f427x.s).                         */
/******************************************************************************/

/**
  * @brief  This function handles PPP interrupt request.
  * @param  None
  * @retval None
  */
/*void PPP_IRQHandler(void)
{
}*/

/**
  * @}
  */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
