/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, ADC1_INT10_PC0_Pin|ADC_IN11_PC1_Pin|ADC1_IN14_PC4_Pin|ADC1_IN15_PC5_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, ADC1_IN1_PA1_Pin|USART2_TX_PA2_Pin|USART2_RX_PA3_Pin|USART2_CK_PA4_Pin
                          |ADC1_IN5_PA5_Pin|ADC1_IN6_PA6_Pin|VBATT_PA7_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, DBG_LED1_GREEN_PE9_Pin|DBG_LED1_RED_PE10_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, RR_WHEEL_S_PD0_Pin|RL_WHEEL_S_PD1_Pin|FR_WHEEL_S_PD3_Pin|FL_WHEEL_S_PD4_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, CAN2_RX_PB5_Pin|CAN2_TX_PB6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : ADC1_INT10_PC0_Pin ADC_IN11_PC1_Pin ADC1_IN14_PC4_Pin ADC1_IN15_PC5_Pin */
  GPIO_InitStruct.Pin = ADC1_INT10_PC0_Pin|ADC_IN11_PC1_Pin|ADC1_IN14_PC4_Pin|ADC1_IN15_PC5_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : ADC1_IN1_PA1_Pin USART2_TX_PA2_Pin USART2_RX_PA3_Pin USART2_CK_PA4_Pin
                           ADC1_IN5_PA5_Pin ADC1_IN6_PA6_Pin VBATT_PA7_Pin */
  GPIO_InitStruct.Pin = ADC1_IN1_PA1_Pin|USART2_TX_PA2_Pin|USART2_RX_PA3_Pin|USART2_CK_PA4_Pin
                          |ADC1_IN5_PA5_Pin|ADC1_IN6_PA6_Pin|VBATT_PA7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : DBG_LEED1_BLUE_PE8_Pin */
  GPIO_InitStruct.Pin = DBG_LEED1_BLUE_PE8_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(DBG_LEED1_BLUE_PE8_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : DBG_LED1_GREEN_PE9_Pin DBG_LED1_RED_PE10_Pin */
  GPIO_InitStruct.Pin = DBG_LED1_GREEN_PE9_Pin|DBG_LED1_RED_PE10_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : RR_WHEEL_S_PD0_Pin RL_WHEEL_S_PD1_Pin FR_WHEEL_S_PD3_Pin FL_WHEEL_S_PD4_Pin */
  GPIO_InitStruct.Pin = RR_WHEEL_S_PD0_Pin|RL_WHEEL_S_PD1_Pin|FR_WHEEL_S_PD3_Pin|FL_WHEEL_S_PD4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : CAN2_RX_PB5_Pin CAN2_TX_PB6_Pin */
  GPIO_InitStruct.Pin = CAN2_RX_PB5_Pin|CAN2_TX_PB6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
