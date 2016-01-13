/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

//#define PSDR1 1
#define PSDR2 2

//#define PSDR_BOARD PSDR2

#ifdef PSDR1
#define STM32F415xx
#define HSE_VALUE=8000000 //did I do this right? Both of these were defined in the progect settings before in the several preprocessors

//#include "stm32f415xx.h"
#endif

#ifdef PSDR2
//#define HSE_VALUE 24000000


//#include "stm32f429xx.h"
#endif

//#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
//#include "stm32f4xx_hal_conf.h"
//#include "stm32f4xx_hal_def.h"
//#include "core_cmInstr.h"
#include <stdio.h>
#include "stddef.h"
#include "diag/Trace.h"
#include "hal.h"
#include "adc.h"
#include "dds.h"
#include "Timer.h"
#include "BlinkLed.h"
//#include "stm32f4xx_hal_rcc.h"
//#include "stm32f4xx_hal_gpio.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9340.h"

//#include "stm32f4xx_hal.h"

#include "string.h"
#include "math.h"
#include "arm_math.h"
//#include "stm32f4xx_hal_rtc.h"
//#include "stm32f4xx_hal_adc.h"
//#include "stm32f4xx_it.h"
//#include "stm32f4xx_hal_tim.h"
//#include "stm32f4xx_hal_cortex.h"
#include "misc.h"
//#include "stm32f4xx_hal_dac.h"

#include "images.h"
//#include "stm32f4xx_hal_dma.h"

//#include "stm32f4xx_hal_def.h"
//#include "stm32f4xx_hal_uart.h"
//#include "stm32f4xx_hal_usart.h"


TIM_HandleTypeDef    TimHandle;
TIM_HandleTypeDef    TimHandle4;

#define MASKRED    0b1111100000000000
#define MASKGREEN  0b0000011111100000
#define MASKBLUE   0b0000000000011111
#define MASKYELLOW 0b1111111111100000
#define MASKTEAL   0b0000011111111111
#define MASKWHITE  0b1111111111111111
#define MASKBLACK  0b0000000000000000

/* Definition for SPIx's DMA */
#define SPIx_TX_DMA_CHANNEL              DMA_CHANNEL_3
#define SPIx_TX_DMA_STREAM               DMA2_Stream5
#define SPIx_RX_DMA_CHANNEL              DMA_CHANNEL_3
#define SPIx_RX_DMA_STREAM               DMA2_Stream2

/* Definition for SPIx's NVIC */
#define SPIx_DMA_TX_IRQn                 DMA2_Stream3_IRQn
#define SPIx_DMA_RX_IRQn                 DMA2_Stream0_IRQn
#define SPIx_DMA_TX_IRQHandler           DMA2_Stream3_IRQHandler
#define SPIx_DMA_RX_IRQHandler           DMA2_Stream0_IRQHandler

SPI_HandleTypeDef SpiHandle;
UART_HandleTypeDef UartHandle;


////These are in stm32f4_hal_def.h but the compiler can't see them. Will this work for now?
//
///**
//  * @brief  HAL Status structures definition
//  */
//typedef enum
//{
//  HAL_OK       = 0x00,
//  HAL_ERROR    = 0x01,
//  HAL_BUSY     = 0x02,
//  HAL_TIMEOUT  = 0x03
//} HAL_StatusTypeDef;
//
///**
//  * @brief  HAL Lock structures definition
//  */
//typedef enum
//{
//  HAL_UNLOCKED = 0x00,
//  HAL_LOCKED   = 0x01
//} HAL_LockTypeDef;

#endif /* __MAIN_H */
