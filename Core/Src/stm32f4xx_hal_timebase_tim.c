/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f4xx_hal_timebase_TIM.c
  * @brief   HAL time base based on the hardware TIM.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_tim.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef        htim10;
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  This function configures the TIM10 as a time base source.
  *         The time source is configured  to have 1ms time base with a dedicated
  *         Tick interrupt priority.
  * @note   This function is called  automatically at the beginning of program after
  *         reset by HAL_Init() or at any time when clock is configured, by HAL_RCC_ClockConfig().
  * @param  TickPriority: Tick interrupt priority.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)
{
  RCC_ClkInitTypeDef    clkconfig;
<<<<<<< HEAD
  uint32_t              uwTimclock = 0;
  uint32_t              uwPrescalerValue = 0;
  uint32_t              pFLatency;
  /*Configure the TIM10 IRQ priority */
  HAL_NVIC_SetPriority(TIM1_UP_TIM10_IRQn, TickPriority ,0);

  /* Enable the TIM10 global Interrupt */
  HAL_NVIC_EnableIRQ(TIM1_UP_TIM10_IRQn);
=======
  uint32_t              uwTimclock = 0U;

  uint32_t              uwPrescalerValue = 0U;
  uint32_t              pFLatency;

  HAL_StatusTypeDef     status;
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0

  /* Enable TIM10 clock */
  __HAL_RCC_TIM10_CLK_ENABLE();

  /* Get clock configuration */
  HAL_RCC_GetClockConfig(&clkconfig, &pFLatency);

  /* Compute TIM10 clock */
<<<<<<< HEAD
  uwTimclock = HAL_RCC_GetPCLK2Freq();
=======
      uwTimclock = HAL_RCC_GetPCLK2Freq();

>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
  /* Compute the prescaler value to have TIM10 counter clock equal to 1MHz */
  uwPrescalerValue = (uint32_t) ((uwTimclock / 1000000U) - 1U);

  /* Initialize TIM10 */
  htim10.Instance = TIM10;

  /* Initialize TIMx peripheral as follow:
<<<<<<< HEAD
  + Period = [(TIM10CLK/1000) - 1]. to have a (1/1000) s time base.
  + Prescaler = (uwTimclock/1000000 - 1) to have a 1MHz counter clock.
  + ClockDivision = 0
  + Counter direction = Up
  */
=======
   * Period = [(TIM10CLK/1000) - 1]. to have a (1/1000) s time base.
   * Prescaler = (uwTimclock/1000000 - 1) to have a 1MHz counter clock.
   * ClockDivision = 0
   * Counter direction = Up
   */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
  htim10.Init.Period = (1000000U / 1000U) - 1U;
  htim10.Init.Prescaler = uwPrescalerValue;
  htim10.Init.ClockDivision = 0;
  htim10.Init.CounterMode = TIM_COUNTERMODE_UP;
<<<<<<< HEAD

  if(HAL_TIM_Base_Init(&htim10) == HAL_OK)
  {
    /* Start the TIM time Base generation in interrupt mode */
    return HAL_TIM_Base_Start_IT(&htim10);
  }

  /* Return function status */
  return HAL_ERROR;
=======
  htim10.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;

  status = HAL_TIM_Base_Init(&htim10);
  if (status == HAL_OK)
  {
    /* Start the TIM time Base generation in interrupt mode */
    status = HAL_TIM_Base_Start_IT(&htim10);
    if (status == HAL_OK)
    {
    /* Enable the TIM10 global Interrupt */
        HAL_NVIC_EnableIRQ(TIM1_UP_TIM10_IRQn);
      /* Configure the SysTick IRQ priority */
      if (TickPriority < (1UL << __NVIC_PRIO_BITS))
      {
        /* Configure the TIM IRQ priority */
        HAL_NVIC_SetPriority(TIM1_UP_TIM10_IRQn, TickPriority, 0U);
        uwTickPrio = TickPriority;
      }
      else
      {
        status = HAL_ERROR;
      }
    }
  }

 /* Return function status */
  return status;
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
}

/**
  * @brief  Suspend Tick increment.
  * @note   Disable the tick increment by disabling TIM10 update interrupt.
  * @param  None
  * @retval None
  */
void HAL_SuspendTick(void)
{
  /* Disable TIM10 update Interrupt */
  __HAL_TIM_DISABLE_IT(&htim10, TIM_IT_UPDATE);
}

/**
  * @brief  Resume Tick increment.
  * @note   Enable the tick increment by Enabling TIM10 update interrupt.
  * @param  None
  * @retval None
  */
void HAL_ResumeTick(void)
{
  /* Enable TIM10 Update interrupt */
  __HAL_TIM_ENABLE_IT(&htim10, TIM_IT_UPDATE);
}

<<<<<<< HEAD
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
=======
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
