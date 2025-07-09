/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ADC1_INT10_PC0_Pin GPIO_PIN_0
#define ADC1_INT10_PC0_GPIO_Port GPIOC
#define ADC_IN11_PC1_Pin GPIO_PIN_1
#define ADC_IN11_PC1_GPIO_Port GPIOC
#define ADC1_IN1_PA1_Pin GPIO_PIN_1
#define ADC1_IN1_PA1_GPIO_Port GPIOA
#define USART2_TX_PA2_Pin GPIO_PIN_2
#define USART2_TX_PA2_GPIO_Port GPIOA
#define USART2_RX_PA3_Pin GPIO_PIN_3
#define USART2_RX_PA3_GPIO_Port GPIOA
#define USART2_CK_PA4_Pin GPIO_PIN_4
#define USART2_CK_PA4_GPIO_Port GPIOA
#define ADC1_IN5_PA5_Pin GPIO_PIN_5
#define ADC1_IN5_PA5_GPIO_Port GPIOA
#define ADC1_IN6_PA6_Pin GPIO_PIN_6
#define ADC1_IN6_PA6_GPIO_Port GPIOA
#define VBATT_PA7_Pin GPIO_PIN_7
#define VBATT_PA7_GPIO_Port GPIOA
#define ADC1_IN14_PC4_Pin GPIO_PIN_4
#define ADC1_IN14_PC4_GPIO_Port GPIOC
#define ADC1_IN15_PC5_Pin GPIO_PIN_5
#define ADC1_IN15_PC5_GPIO_Port GPIOC
#define DBG_LEED1_BLUE_PE8_Pin GPIO_PIN_8
#define DBG_LEED1_BLUE_PE8_GPIO_Port GPIOE
#define DBG_LED1_GREEN_PE9_Pin GPIO_PIN_9
#define DBG_LED1_GREEN_PE9_GPIO_Port GPIOE
#define DBG_LED1_RED_PE10_Pin GPIO_PIN_10
#define DBG_LED1_RED_PE10_GPIO_Port GPIOE
#define RR_WHEEL_S_PD0_Pin GPIO_PIN_0
#define RR_WHEEL_S_PD0_GPIO_Port GPIOD
#define RL_WHEEL_S_PD1_Pin GPIO_PIN_1
#define RL_WHEEL_S_PD1_GPIO_Port GPIOD
#define FR_WHEEL_S_PD3_Pin GPIO_PIN_3
#define FR_WHEEL_S_PD3_GPIO_Port GPIOD
#define FL_WHEEL_S_PD4_Pin GPIO_PIN_4
#define FL_WHEEL_S_PD4_GPIO_Port GPIOD
#define CAN2_RX_PB5_Pin GPIO_PIN_5
#define CAN2_RX_PB5_GPIO_Port GPIOB
#define CAN2_TX_PB6_Pin GPIO_PIN_6
#define CAN2_TX_PB6_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
