#include <stdint.h>

#define SRAM_START  0x20000000UL
#define SRAM_SIZE   20 * 1024     

#define  SRAM_END   ((SRAM_START)+ (SRAM_SIZE))

#define STACK_START    SRAM_END


void main(void); 
void Reset_Handler(void);


void NMI_Handler                (void)              __attribute__((weak, alias("DefaultHandler")));
void HardFault_Handler          (void)              __attribute__((weak, alias("DefaultHandler")));
void MemManage_Handler          (void)              __attribute__((weak, alias("DefaultHandler")));
void BusFault_Handler           (void)              __attribute__((weak, alias("DefaultHandler")));
void UsageFault_Handler         (void)              __attribute__((weak, alias("DefaultHandler")));

void SVC_Handler                (void)              __attribute__((weak, alias("DefaultHandler")));
void DebugMon_Handler           (void)              __attribute__((weak, alias("DefaultHandler")));

void PendSV_Handler             (void)              __attribute__((weak, alias("DefaultHandler")));
void SysTick_Handler            (void)              __attribute__((weak, alias("DefaultHandler")));
void WWDG_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void PVD_IRQHandler            	(void)              __attribute__((weak, alias("DefaultHandler")));
void TAMPER_IRQHandler         	(void)              __attribute__((weak, alias("DefaultHandler")));
void RTC_IRQHandler            	(void)              __attribute__((weak, alias("DefaultHandler")));
void FLASH_IRQHandler          	(void)              __attribute__((weak, alias("DefaultHandler")));
void RCC_IRQHandler            	(void)              __attribute__((weak, alias("DefaultHandler")));
void EXTI0_IRQHandler          	(void)              __attribute__((weak, alias("DefaultHandler")));
void EXTI1_IRQHandler          	(void)              __attribute__((weak, alias("DefaultHandler")));
void EXTI2_IRQHandler          	(void)              __attribute__((weak, alias("DefaultHandler")));
void EXTI3_IRQHandler          	(void)              __attribute__((weak, alias("DefaultHandler")));
void EXTI4_IRQHandler          	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA1_Channel1_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA1_Channel2_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA1_Channel3_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA1_Channel4_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA1_Channel5_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA1_Channel6_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA1_Channel7_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void ADC1_2_IRQHandler         	(void)              __attribute__((weak, alias("DefaultHandler")));
void USB_HP_CAN_TX_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void USB_LP_CAN_RX0_IRQHandler 	(void)              __attribute__((weak, alias("DefaultHandler")));
void CAN_RX1_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void CAN_SCE_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void EXTI9_5_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM1_BRK_IRQHandler       	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM1_UP_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM1_TRG_COM_IRQHandler   	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM1_CC_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM2_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM3_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM4_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void I2C1_EV_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void I2C1_ER_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void I2C2_EV_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void I2C2_ER_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void SPI1_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void SPI2_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void USART1_IRQHandler         	(void)              __attribute__((weak, alias("DefaultHandler")));
void USART2_IRQHandler         	(void)              __attribute__((weak, alias("DefaultHandler")));
void USART3_IRQHandler         	(void)              __attribute__((weak, alias("DefaultHandler")));
void EXTI15_10_IRQHandler      	(void)              __attribute__((weak, alias("DefaultHandler")));
void RTCAlarm_IRQHandler       	(void)              __attribute__((weak, alias("DefaultHandler")));

void TIM8_BRK_IRQHandler       	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM8_UP_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM8_TRG_COM_IRQHandler   	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM8_CC_IRQHandler        	(void)              __attribute__((weak, alias("DefaultHandler")));
void ADC3_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void FSMC_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void SDIO_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM5_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void SPI3_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void UART4_IRQHandler          	(void)              __attribute__((weak, alias("DefaultHandler")));
void UART5_IRQHandler          	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM6_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void TIM7_IRQHandler           	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA2_Channel1_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA2_Channel2_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA2_Channel3_IRQHandler  	(void)              __attribute__((weak, alias("DefaultHandler")));
void DMA2_Channel4_5_IRQHandler	(void)              __attribute__((weak, alias("DefaultHandler")));







uint32_t vectors[] __attribute__((section(".isr_vector"))) = 
{
	 STACK_START,
	(uint32_t)&Reset_Handler,
    (uint32_t)&NMI_Handler                       ,
    (uint32_t)&HardFault_Handler                 ,
    (uint32_t)&MemManage_Handler                 ,
    (uint32_t)&BusFault_Handler                  ,
    (uint32_t)&UsageFault_Handler                ,
    (uint32_t) 0                                 ,
    (uint32_t) 0                                 ,
    (uint32_t) 0                                 ,
    (uint32_t) 0                                 ,
    (uint32_t)&SVC_Handler                       ,
    (uint32_t)&DebugMon_Handler                  ,
    (uint32_t) 0                                 ,
    (uint32_t)&PendSV_Handler                    ,
    (uint32_t)&SysTick_Handler                   ,
    (uint32_t)&WWDG_IRQHandler           	     ,
    (uint32_t)&PVD_IRQHandler            	     ,
    (uint32_t)&TAMPER_IRQHandler         	     ,
    (uint32_t)&RTC_IRQHandler            	     ,
    (uint32_t)&FLASH_IRQHandler          	     ,
    (uint32_t)&RCC_IRQHandler            	     ,
    (uint32_t)&EXTI0_IRQHandler          	     ,
    (uint32_t)&EXTI1_IRQHandler          	     ,
    (uint32_t)&EXTI2_IRQHandler          	     ,
    (uint32_t)&EXTI3_IRQHandler          	     ,
    (uint32_t)&EXTI4_IRQHandler          	     ,
    (uint32_t)&DMA1_Channel1_IRQHandler  	     ,
    (uint32_t)&DMA1_Channel2_IRQHandler  	     ,
    (uint32_t)&DMA1_Channel3_IRQHandler  	     ,
    (uint32_t)&DMA1_Channel4_IRQHandler  	     ,
    (uint32_t)&DMA1_Channel5_IRQHandler  	     ,
    (uint32_t)&DMA1_Channel6_IRQHandler  	     ,
    (uint32_t)&DMA1_Channel7_IRQHandler  	     ,
    (uint32_t)&ADC1_2_IRQHandler         	     ,
    (uint32_t)&USB_HP_CAN_TX_IRQHandler  	     ,
    (uint32_t)&USB_LP_CAN_RX0_IRQHandler  	     ,
    (uint32_t)&CAN_RX1_IRQHandler        	     ,
    (uint32_t)&CAN_SCE_IRQHandler        	     ,
    (uint32_t)&EXTI9_5_IRQHandler        	     ,
    (uint32_t)&TIM1_BRK_IRQHandler       	     ,
    (uint32_t)&TIM1_UP_IRQHandler        	     ,
    (uint32_t)&TIM1_TRG_COM_IRQHandler   	     ,
    (uint32_t)&TIM1_CC_IRQHandler        	     ,
    (uint32_t)&TIM2_IRQHandler           	     ,
    (uint32_t)&TIM3_IRQHandler           	     ,
    (uint32_t)&TIM4_IRQHandler           	     ,
    (uint32_t)&I2C1_EV_IRQHandler        	     ,
    (uint32_t)&I2C1_ER_IRQHandler        	     ,
    (uint32_t)&I2C2_EV_IRQHandler        	     ,
    (uint32_t)&I2C2_ER_IRQHandler        	     ,
    (uint32_t)&SPI1_IRQHandler           	     ,
    (uint32_t)&SPI2_IRQHandler           	     ,
    (uint32_t)&USART1_IRQHandler         	     ,
    (uint32_t)&USART2_IRQHandler         	     ,
    (uint32_t)&USART3_IRQHandler         	     ,
    (uint32_t)&EXTI15_10_IRQHandler      	     ,
    (uint32_t)&RTCAlarm_IRQHandler       	     ,
    (uint32_t)0                         	     ,
    (uint32_t)&TIM8_BRK_IRQHandler       	     ,
    (uint32_t)&TIM8_UP_IRQHandler        	     ,
    (uint32_t)&TIM8_TRG_COM_IRQHandler   	     ,
    (uint32_t)&TIM8_CC_IRQHandler        	     ,
    (uint32_t)&ADC3_IRQHandler           	     ,
    (uint32_t)&FSMC_IRQHandler           	     ,
    (uint32_t)&SDIO_IRQHandler           	     ,
    (uint32_t)&TIM5_IRQHandler           	     ,
    (uint32_t)&SPI3_IRQHandler           	     ,
    (uint32_t)&UART4_IRQHandler          	     ,
    (uint32_t)&UART5_IRQHandler          	     ,
    (uint32_t)&TIM6_IRQHandler           	     ,
    (uint32_t)&TIM7_IRQHandler           	     ,
    (uint32_t)&DMA2_Channel1_IRQHandler  	     ,
    (uint32_t)&DMA2_Channel2_IRQHandler  	     ,
    (uint32_t)&DMA2_Channel3_IRQHandler  	     ,
    (uint32_t)&DMA2_Channel4_5_IRQHandler      	    
	
	
};


void Reset_Handler(void)
{
	extern uint32_t  _etext;
	extern uint32_t  _sdata;
   	extern uint32_t  _edata;
	extern uint32_t  _sbss;
	extern uint32_t  _ebss;
	/*copy .data from flash(src) to sram (desstination )*/
    uint32_t local_u32size =(uint32_t*)&_edata - (uint32_t*)&_sdata;
    uint32_t local_u32coun ;  
    uint8_t * local_pu8src = (uint8_t*)&_etext;
	uint8_t * local_pu8des = (uint8_t*)&_sdata;
	for(local_u32coun = 0;local_u32coun <local_u32size; local_u32coun++)
	{
	local_pu8des[local_u32coun] =local_pu8src[local_u32coun]; 

	}
	/*2- Initialize .bss section with zeros*/
    local_u32size =  (uint32_t*)&_ebss - (uint32_t*)&_sbss;
  	local_pu8des = (uint8_t*)&_sbss;
	for(local_u32coun = 0;local_u32coun <local_u32size; local_u32coun++)
	{
		local_pu8des[local_u32coun]=0;
	}
	/*3- call main */
	main();
	
	while(1);
}
void DefaultHandler(void)
{
	while(1);
}