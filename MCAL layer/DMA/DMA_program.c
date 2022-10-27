/********************************************************************/
/****************  Name     : Mohamed Adel Ramadan  *****************/
/****************  Date     : 15/2/2021             *****************/
/****************  Version  : 1.0v                  *****************/
/****************  SWC      : DMA                   *****************/    
/********************************************************************/

#include "DATA_TYPE.h"
#include "STM32f103XX.h"


#include "DMA_interface.h"


void DMA_voidInit(const Channel_Config * copy_strChConfig)
{
  if(copy_strChConfig->Mom_To_Mom == Memory_To_Memory_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<14);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<14);
  }
  
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (3<<12);
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (copy_strChConfig->Ch_Pr<<12);

  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (3<<10);
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (copy_strChConfig->Mom_Size<<10);
 
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (3<<8);
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (copy_strChConfig->Pri_Size<<8);

  
  if(copy_strChConfig->Mom_Inc == MEMORY_INC_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<7);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<7);
  }
  
  if(copy_strChConfig->Pri_Inc == PERIPHERAL_INC_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<6);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<6);
  }
  
  if(copy_strChConfig->Circ == CIRCULAR_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<5);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<5);
  }  
    
  if(copy_strChConfig->DATA_TX == MEMORY)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<4);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<4);
  }
  
  if(copy_strChConfig->TREI == TEI_EN)
  {	  
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<3);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<3);
  }  
  
  if(copy_strChConfig->HTI == HTI_EN)
  {	                                                                         
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<2);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<2);
  }   
  
  if(copy_strChConfig->CTI == CTI_EN)
  {	                                                                         
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<1);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<1);
  }  
  if(copy_strChConfig->Ch_St == Channel_EN)
  {	                                                                         
  DMA->channel[copy_strChConfig->Ch_Num].CCR |= (1<<0);
  }
  else 
  {
  DMA->channel[copy_strChConfig->Ch_Num].CCR &=~ (1<<0);
  } 
  
}


void  DMA_voidChannelStart(u8 copy_u8chNum,u32 *copy_u32AddressDestintion,u32 *copy_u32AddressSource,u16 copy_u16NumDataTx)
{
	
	DMA->channel[copy_u8chNum].CPAR = &copy_u32AddressSource;
	DMA->channel[copy_u8chNum].CMAR = &copy_u32AddressDestintion;
    DMA->channel[copy_u8chNum].CNDTR = copy_u16NumDataTx;
}
