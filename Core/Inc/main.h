/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define BTN0_Pin GPIO_PIN_0
#define BTN0_GPIO_Port GPIOC
#define BTN1_Pin GPIO_PIN_1
#define BTN1_GPIO_Port GPIOC
#define BTN2_Pin GPIO_PIN_2
#define BTN2_GPIO_Port GPIOC
#define BTN3_Pin GPIO_PIN_3
#define BTN3_GPIO_Port GPIOC
#define DHT11_Pin GPIO_PIN_0
#define DHT11_GPIO_Port GPIOA
#define SERVO_Pin GPIO_PIN_1
#define SERVO_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define TRIG_Pin GPIO_PIN_4
#define TRIG_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define ECHO_Pin GPIO_PIN_7
#define ECHO_GPIO_Port GPIOA
#define LATCH_Pin GPIO_PIN_13
#define LATCH_GPIO_Port GPIOB
#define CE_DS1302_Pin GPIO_PIN_10
#define CE_DS1302_GPIO_Port GPIOA
#define IO_DS1302_Pin GPIO_PIN_11
#define IO_DS1302_GPIO_Port GPIOA
#define CLK_DS1302_Pin GPIO_PIN_12
#define CLK_DS1302_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
<<<<<<< HEAD
=======

>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
/* USER CODE BEGIN Private defines */
typedef struct print_option
{
	uint8_t p_rtc;
	uint8_t p_led;
}t_print;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
<<<<<<< HEAD

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
=======
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
