#include "sys.h"  


 void WFI_SET(void)
{
//	WFI;		  
}

void INTX_DISABLE(void)
{
//	CPSID   I
//	BX      LR	  
}

 void INTX_ENABLE(void)
{
//	CPSIE   I
//	BX      LR  
}

 void MSR_MSP(u32 addr) 
{
//	MSR MSP, r0 			//set Main Stack value
//	BX r14
}
















