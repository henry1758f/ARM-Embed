/**
  ******************************************************************************
  * @file    Project/STM32F4_EVB_Demo/usart.c
  * @author  UbeeWu
  * @version V1.0.0
  * @date    15-July(7)-2016
  * @brief   usart program body
  ******************************************************************************
  * @attention
	*如果使用ucos,可包括下列標頭檔
	*#if SYSTEM_SUPPORT_OS
	*#include "includes.h"					  
	*#endif
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "usart.h"	

#if 1
#pragma import(__use_no_semihosting)             
//標準庫內支持的函數               
struct __FILE 
{ 
	int handle; 
}; 

FILE __stdout;       
//Define _sys_exit() 避免半主機式   
void _sys_exit(int x) 
{ 
	x = x; 
} 
//重新定義fputc函數 目前定義給USART1使用
int fputc(int ch, FILE *f)
{ 	
	while((USART1->SR&0X40)==0);//循環發送，直到發送完畢  
	USART1->DR = (u8) ch;      
	return ch;
}
#endif
 
#if EN_USART1_RX   //如果智能了接收
//USART1中斷服務程序
//使用USARTx->SR 能避免莫名其妙的錯誤
uint8_t USART_RX_BUF[USART_REC_LEN];     //接收緩衝
//接收狀態
//bit15 接收完成標誌
//bit14 接收到0x0D
//bit13~0 接收到有效字元樹數目
u16 USART_RX_STA=0;       //接收狀態標記
//初始化IO -> USART1
void uart_init(u32 bound){
   //set GPIO
  GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE); //使用GPIOA時鐘
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1,ENABLE);//使用USART1時鐘
 
	//GPIO復用映射
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource9,GPIO_AF_USART1); //GPIOA9復用為USART1
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource10,GPIO_AF_USART1); //GPIOA10復用為USART1
	
	//USART1端口配置
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10; //GPIOA9與GPIOA10
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;//復用功能
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;	//速度50Hz
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP; //推晚復用輸出
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP; //上拉
	GPIO_Init(GPIOA,&GPIO_InitStructure); //初始化PA9，PA10

   //USART1 初始化設置
	USART_InitStructure.USART_BaudRate = bound;//波特律設置
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;//字長為8bit數據格式
	USART_InitStructure.USART_StopBits = USART_StopBits_1;//一個停止位
	USART_InitStructure.USART_Parity = USART_Parity_No;//無奇偶孝校正
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;//無硬件數據流控制
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//收發模式
  USART_Init(USART1, &USART_InitStructure); //初始化USART1
	
  USART_Cmd(USART1, ENABLE);  //智能USART1
	//USART_ClearFlag(USART1, USART_FLAG_TC);
	
#if EN_USART1_RX	
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);//開啟相關中斷
	//USART1 NVIC 配置
  NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;//USART1中斷通道
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=3;//搶佔優先等級3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority =3;		//子優先級3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQ通道智能
	NVIC_Init(&NVIC_InitStructure);	//根據指定參數初始化VIC寄存器
#endif
}


void USART1_IRQHandler(void)      //USART1中斷服務程序
{
	u8 Res;
#if SYSTEM_SUPPORT_OS 		//若SYSTEM_SUPPORT_OS為真，則需要支持OS.
	OSIntEnter();    
#endif
	
	if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)  //接收中斷(接收到的數據必須是0x0D 0x0A結尾)
	{
		Res =USART_ReceiveData(USART1);//(USART1->DR);	//讀取接收到的數據
		
		if((USART_RX_STA&0x8000)==0)//接收未完成
		{
			if(USART_RX_STA&0x4000)//接收到了0x0D
			{
				if(Res!=0x0a)USART_RX_STA=0;//接收錯誤，重新開始
				else USART_RX_STA|=0x8000;	//接收完成
			}
			else //未收到0X0D
			{	
				if(Res==0x0d)USART_RX_STA|=0x4000;
				else
				{
					USART_RX_BUF[USART_RX_STA&0X3FFF]=Res ;
					USART_RX_STA++;
					if(USART_RX_STA>(USART_REC_LEN-1))USART_RX_STA=0;//接收數據錯誤，重新開始接收
				}		 
			}
		}   		 
  } 
#if SYSTEM_SUPPORT_OS 	
	OSIntExit();  											 
#endif
} 
#endif	

 



