#ifndef MBED_DUAL_DAC_H
#define MBED_DUAL_DAC_H
#include "mbed.h"


#define DACx_CHANNEL_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOA_CLK_ENABLE()


#define DACx_CLK_ENABLE()               __HAL_RCC_DAC_CLK_ENABLE()
#define DACx_FORCE_RESET()              __HAL_RCC_DAC_FORCE_RESET()
#define DACx_RELEASE_RESET()            __HAL_RCC_DAC_RELEASE_RESET()

/* Definition for DACx Channel Pin */
#define DACx_CHANNEL_PIN_I                GPIO_PIN_5
#define DACx_CHANNEL_PIN_Q                GPIO_PIN_4
#define DACx_CHANNEL_GPIO_PORT            GPIOA

/* Definition for DACx's Channel */
#define DACx_DMA_CHANNEL                	DMA_CHANNEL_7

#define DACx_CHANNEL_I                    	DAC_CHANNEL_2
#define DACx_CHANNEL_Q                    	DAC_CHANNEL_1

/* Definition for DACx's DMA_STREAM */
#define DACx_DMA_INSTANCE_I              	 DMA1_Stream6
#define DACx_DMA_INSTANCE_Q               	DMA1_Stream5

/* Definition for DACx's NVIC */
#define DACx_DMA_IRQn_I                  DMA1_Stream6_IRQn
#define DACx_DMA_IRQn_Q                  DMA1_Stream5_IRQn

#define DACx_DMA_IRQHandler_I             DMA1_Stream6_IRQHandler
#define DACx_DMA_IRQHandler_Q             DMA1_Stream5_IRQHandler


#define SYMBOLS_PERTRANSFER 100

  static void TIM6_Config(void);
  static void DAC_Ch1_EscalatorConfig(void);

 void InitDacShit();

 extern DigitalOut led1;
extern DigitalOut led2;
extern DigitalOut led3;

extern Serial pc;

#endif