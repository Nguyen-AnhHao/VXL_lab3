/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define LED_GREEN1_Pin GPIO_PIN_1
#define LED_GREEN1_GPIO_Port GPIOA
#define LED_YELLOW1_Pin GPIO_PIN_2
#define LED_YELLOW1_GPIO_Port GPIOA
#define LED_RED1_Pin GPIO_PIN_3
#define LED_RED1_GPIO_Port GPIOA
#define LED_GREEN2_Pin GPIO_PIN_4
#define LED_GREEN2_GPIO_Port GPIOA
#define LED_YELLOW2_Pin GPIO_PIN_5
#define LED_YELLOW2_GPIO_Port GPIOA
#define LED_RED2_Pin GPIO_PIN_6
#define LED_RED2_GPIO_Port GPIOA
#define EN0_Pin GPIO_PIN_7
#define EN0_GPIO_Port GPIOA
#define s0_Pin GPIO_PIN_0
#define s0_GPIO_Port GPIOB
#define s1_Pin GPIO_PIN_1
#define s1_GPIO_Port GPIOB
#define s2_Pin GPIO_PIN_2
#define s2_GPIO_Port GPIOB
#define s10_Pin GPIO_PIN_10
#define s10_GPIO_Port GPIOB
#define s11_Pin GPIO_PIN_11
#define s11_GPIO_Port GPIOB
#define s12_Pin GPIO_PIN_12
#define s12_GPIO_Port GPIOB
#define s13_Pin GPIO_PIN_13
#define s13_GPIO_Port GPIOB
#define LED_TEST_Pin GPIO_PIN_14
#define LED_TEST_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_8
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_9
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_10
#define EN3_GPIO_Port GPIOA
#define BUTTON1_Pin GPIO_PIN_11
#define BUTTON1_GPIO_Port GPIOA
#define BUTTON2_Pin GPIO_PIN_12
#define BUTTON2_GPIO_Port GPIOA
#define BUTTON3_Pin GPIO_PIN_13
#define BUTTON3_GPIO_Port GPIOA
#define s3_Pin GPIO_PIN_3
#define s3_GPIO_Port GPIOB
#define s4_Pin GPIO_PIN_4
#define s4_GPIO_Port GPIOB
#define s5_Pin GPIO_PIN_5
#define s5_GPIO_Port GPIOB
#define s6_Pin GPIO_PIN_6
#define s6_GPIO_Port GPIOB
#define s7_Pin GPIO_PIN_7
#define s7_GPIO_Port GPIOB
#define s8_Pin GPIO_PIN_8
#define s8_GPIO_Port GPIOB
#define s9_Pin GPIO_PIN_9
#define s9_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
