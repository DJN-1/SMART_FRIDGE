/**
  ******************************************************************************
  * @file    stm32f4xx_hal_flash.h
  * @author  MCD Application Team
  * @brief   Header file of FLASH HAL module.
  ******************************************************************************
  * @attention
  *
<<<<<<< HEAD
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */ 
=======
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file in
  * the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F4xx_HAL_FLASH_H
#define __STM32F4xx_HAL_FLASH_H

#ifdef __cplusplus
<<<<<<< HEAD
 extern "C" {
=======
extern "C" {
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal_def.h"

/** @addtogroup STM32F4xx_HAL_Driver
  * @{
  */

/** @addtogroup FLASH
  * @{
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0

/* Exported types ------------------------------------------------------------*/
/** @defgroup FLASH_Exported_Types FLASH Exported Types
  * @{
  */
<<<<<<< HEAD
 
/**
  * @brief  FLASH Procedure structure definition
  */
typedef enum 
{
  FLASH_PROC_NONE = 0U, 
=======

/**
  * @brief  FLASH Procedure structure definition
  */
typedef enum
{
  FLASH_PROC_NONE = 0U,
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
  FLASH_PROC_SECTERASE,
  FLASH_PROC_MASSERASE,
  FLASH_PROC_PROGRAM
} FLASH_ProcedureTypeDef;

<<<<<<< HEAD
/** 
  * @brief  FLASH handle Structure definition  
=======
/**
  * @brief  FLASH handle Structure definition
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
  */
typedef struct
{
  __IO FLASH_ProcedureTypeDef ProcedureOnGoing;   /*Internal variable to indicate which procedure is ongoing or not in IT context*/
<<<<<<< HEAD
  
  __IO uint32_t               NbSectorsToErase;   /*Internal variable to save the remaining sectors to erase in IT context*/
  
  __IO uint8_t                VoltageForErase;    /*Internal variable to provide voltage range selected by user in IT context*/
  
  __IO uint32_t               Sector;             /*Internal variable to define the current sector which is erasing*/
  
  __IO uint32_t               Bank;               /*Internal variable to save current bank selected during mass erase*/
  
  __IO uint32_t               Address;            /*Internal variable to save address selected for program*/
  
=======

  __IO uint32_t               NbSectorsToErase;   /*Internal variable to save the remaining sectors to erase in IT context*/

  __IO uint8_t                VoltageForErase;    /*Internal variable to provide voltage range selected by user in IT context*/

  __IO uint32_t               Sector;             /*Internal variable to define the current sector which is erasing*/

  __IO uint32_t               Bank;               /*Internal variable to save current bank selected during mass erase*/

  __IO uint32_t               Address;            /*Internal variable to save address selected for program*/

>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
  HAL_LockTypeDef             Lock;               /* FLASH locking object                */

  __IO uint32_t               ErrorCode;          /* FLASH error code                    */

<<<<<<< HEAD
}FLASH_ProcessTypeDef;
=======
} FLASH_ProcessTypeDef;
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0

/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup FLASH_Exported_Constants FLASH Exported Constants
  * @{
<<<<<<< HEAD
  */  
/** @defgroup FLASH_Error_Code FLASH Error Code
  * @brief    FLASH Error Code 
  * @{
  */ 
=======
  */
/** @defgroup FLASH_Error_Code FLASH Error Code
  * @brief    FLASH Error Code
  * @{
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define HAL_FLASH_ERROR_NONE         0x00000000U    /*!< No error                      */
#define HAL_FLASH_ERROR_RD           0x00000001U    /*!< Read Protection error         */
#define HAL_FLASH_ERROR_PGS          0x00000002U    /*!< Programming Sequence error    */
#define HAL_FLASH_ERROR_PGP          0x00000004U    /*!< Programming Parallelism error */
#define HAL_FLASH_ERROR_PGA          0x00000008U    /*!< Programming Alignment error   */
#define HAL_FLASH_ERROR_WRP          0x00000010U    /*!< Write protection error        */
#define HAL_FLASH_ERROR_OPERATION    0x00000020U    /*!< Operation Error               */
/**
  * @}
  */
<<<<<<< HEAD
  
/** @defgroup FLASH_Type_Program FLASH Type Program
  * @{
  */ 
=======

/** @defgroup FLASH_Type_Program FLASH Type Program
  * @{
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define FLASH_TYPEPROGRAM_BYTE        0x00000000U  /*!< Program byte (8-bit) at a specified address           */
#define FLASH_TYPEPROGRAM_HALFWORD    0x00000001U  /*!< Program a half-word (16-bit) at a specified address   */
#define FLASH_TYPEPROGRAM_WORD        0x00000002U  /*!< Program a word (32-bit) at a specified address        */
#define FLASH_TYPEPROGRAM_DOUBLEWORD  0x00000003U  /*!< Program a double word (64-bit) at a specified address */
/**
  * @}
  */

/** @defgroup FLASH_Flag_definition FLASH Flag definition
  * @brief Flag definition
  * @{
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define FLASH_FLAG_EOP                 FLASH_SR_EOP            /*!< FLASH End of Operation flag               */
#define FLASH_FLAG_OPERR               FLASH_SR_SOP            /*!< FLASH operation Error flag                */
#define FLASH_FLAG_WRPERR              FLASH_SR_WRPERR         /*!< FLASH Write protected error flag          */
#define FLASH_FLAG_PGAERR              FLASH_SR_PGAERR         /*!< FLASH Programming Alignment error flag    */
#define FLASH_FLAG_PGPERR              FLASH_SR_PGPERR         /*!< FLASH Programming Parallelism error flag  */
#define FLASH_FLAG_PGSERR              FLASH_SR_PGSERR         /*!< FLASH Programming Sequence error flag     */
#if defined(FLASH_SR_RDERR)
#define FLASH_FLAG_RDERR               FLASH_SR_RDERR          /*!< Read Protection error flag (PCROP)        */
#endif /* FLASH_SR_RDERR */
<<<<<<< HEAD
#define FLASH_FLAG_BSY                 FLASH_SR_BSY            /*!< FLASH Busy flag                           */ 
/**
  * @}
  */
  
/** @defgroup FLASH_Interrupt_definition FLASH Interrupt definition
  * @brief FLASH Interrupt definition
  * @{
  */ 
=======
#define FLASH_FLAG_BSY                 FLASH_SR_BSY            /*!< FLASH Busy flag                           */
/**
  * @}
  */

/** @defgroup FLASH_Interrupt_definition FLASH Interrupt definition
  * @brief FLASH Interrupt definition
  * @{
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define FLASH_IT_EOP                   FLASH_CR_EOPIE          /*!< End of FLASH Operation Interrupt source */
#define FLASH_IT_ERR                   0x02000000U             /*!< Error Interrupt source                  */
/**
  * @}
<<<<<<< HEAD
  */  
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0

/** @defgroup FLASH_Program_Parallelism FLASH Program Parallelism
  * @{
  */
#define FLASH_PSIZE_BYTE           0x00000000U
#define FLASH_PSIZE_HALF_WORD      0x00000100U
#define FLASH_PSIZE_WORD           0x00000200U
#define FLASH_PSIZE_DOUBLE_WORD    0x00000300U
#define CR_PSIZE_MASK              0xFFFFFCFFU
/**
  * @}
<<<<<<< HEAD
  */ 

/** @defgroup FLASH_Keys FLASH Keys
  * @{
  */ 
=======
  */

/** @defgroup FLASH_Keys FLASH Keys
  * @{
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define RDP_KEY                  ((uint16_t)0x00A5)
#define FLASH_KEY1               0x45670123U
#define FLASH_KEY2               0xCDEF89ABU
#define FLASH_OPT_KEY1           0x08192A3BU
#define FLASH_OPT_KEY2           0x4C5D6E7FU
/**
  * @}
<<<<<<< HEAD
  */ 

/**
  * @}
  */ 
  
=======
  */

/**
  * @}
  */

>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
/* Exported macro ------------------------------------------------------------*/
/** @defgroup FLASH_Exported_Macros FLASH Exported Macros
  * @{
  */
/**
  * @brief  Set the FLASH Latency.
  * @param  __LATENCY__ FLASH Latency
  *         The value of this parameter depend on device used within the same series
  * @retval none
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_SET_LATENCY(__LATENCY__) (*(__IO uint8_t *)ACR_BYTE0_ADDRESS = (uint8_t)(__LATENCY__))

/**
  * @brief  Get the FLASH Latency.
  * @retval FLASH Latency
  *          The value of this parameter depend on device used within the same series
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_GET_LATENCY()     (READ_BIT((FLASH->ACR), FLASH_ACR_LATENCY))

/**
  * @brief  Enable the FLASH prefetch buffer.
  * @retval none
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_PREFETCH_BUFFER_ENABLE()  (FLASH->ACR |= FLASH_ACR_PRFTEN)

/**
  * @brief  Disable the FLASH prefetch buffer.
  * @retval none
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_PREFETCH_BUFFER_DISABLE()   (FLASH->ACR &= (~FLASH_ACR_PRFTEN))

/**
  * @brief  Enable the FLASH instruction cache.
  * @retval none
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_INSTRUCTION_CACHE_ENABLE()  (FLASH->ACR |= FLASH_ACR_ICEN)

/**
  * @brief  Disable the FLASH instruction cache.
  * @retval none
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_INSTRUCTION_CACHE_DISABLE()   (FLASH->ACR &= (~FLASH_ACR_ICEN))

/**
  * @brief  Enable the FLASH data cache.
  * @retval none
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_DATA_CACHE_ENABLE()  (FLASH->ACR |= FLASH_ACR_DCEN)

/**
  * @brief  Disable the FLASH data cache.
  * @retval none
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_DATA_CACHE_DISABLE()   (FLASH->ACR &= (~FLASH_ACR_DCEN))

/**
  * @brief  Resets the FLASH instruction Cache.
<<<<<<< HEAD
  * @note   This function must be used only when the Instruction Cache is disabled.  
  * @retval None
  */
#define __HAL_FLASH_INSTRUCTION_CACHE_RESET() do {FLASH->ACR |= FLASH_ACR_ICRST;  \
                                                  FLASH->ACR &= ~FLASH_ACR_ICRST; \
=======
  * @note   This function must be used only when the Instruction Cache is disabled.
  * @retval None
  */
#define __HAL_FLASH_INSTRUCTION_CACHE_RESET() do {FLASH->ACR |= FLASH_ACR_ICRST;  \
                                                   FLASH->ACR &= ~FLASH_ACR_ICRST; \
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
                                                 }while(0U)

/**
  * @brief  Resets the FLASH data Cache.
<<<<<<< HEAD
  * @note   This function must be used only when the data Cache is disabled.  
  * @retval None
  */
#define __HAL_FLASH_DATA_CACHE_RESET() do {FLASH->ACR |= FLASH_ACR_DCRST;  \
                                           FLASH->ACR &= ~FLASH_ACR_DCRST; \
                                          }while(0U)
/**
  * @brief  Enable the specified FLASH interrupt.
  * @param  __INTERRUPT__  FLASH interrupt 
  *         This parameter can be any combination of the following values:
  *     @arg FLASH_IT_EOP: End of FLASH Operation Interrupt
  *     @arg FLASH_IT_ERR: Error Interrupt    
  * @retval none
  */  
=======
  * @note   This function must be used only when the data Cache is disabled.
  * @retval None
  */
#define __HAL_FLASH_DATA_CACHE_RESET() do {FLASH->ACR |= FLASH_ACR_DCRST;  \
                                            FLASH->ACR &= ~FLASH_ACR_DCRST; \
                                          }while(0U)
/**
  * @brief  Enable the specified FLASH interrupt.
  * @param  __INTERRUPT__  FLASH interrupt
  *         This parameter can be any combination of the following values:
  *     @arg FLASH_IT_EOP: End of FLASH Operation Interrupt
  *     @arg FLASH_IT_ERR: Error Interrupt
  * @retval none
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define __HAL_FLASH_ENABLE_IT(__INTERRUPT__)  (FLASH->CR |= (__INTERRUPT__))

/**
  * @brief  Disable the specified FLASH interrupt.
<<<<<<< HEAD
  * @param  __INTERRUPT__  FLASH interrupt 
  *         This parameter can be any combination of the following values:
  *     @arg FLASH_IT_EOP: End of FLASH Operation Interrupt
  *     @arg FLASH_IT_ERR: Error Interrupt    
  * @retval none
  */  
#define __HAL_FLASH_DISABLE_IT(__INTERRUPT__)  (FLASH->CR &= ~(uint32_t)(__INTERRUPT__))

/**
  * @brief  Get the specified FLASH flag status. 
  * @param  __FLAG__ specifies the FLASH flags to check.
  *          This parameter can be any combination of the following values:
  *            @arg FLASH_FLAG_EOP   : FLASH End of Operation flag 
  *            @arg FLASH_FLAG_OPERR : FLASH operation Error flag 
  *            @arg FLASH_FLAG_WRPERR: FLASH Write protected error flag 
=======
  * @param  __INTERRUPT__  FLASH interrupt
  *         This parameter can be any combination of the following values:
  *     @arg FLASH_IT_EOP: End of FLASH Operation Interrupt
  *     @arg FLASH_IT_ERR: Error Interrupt
  * @retval none
  */
#define __HAL_FLASH_DISABLE_IT(__INTERRUPT__)  (FLASH->CR &= ~(uint32_t)(__INTERRUPT__))

/**
  * @brief  Get the specified FLASH flag status.
  * @param  __FLAG__ specifies the FLASH flags to check.
  *          This parameter can be any combination of the following values:
  *            @arg FLASH_FLAG_EOP   : FLASH End of Operation flag
  *            @arg FLASH_FLAG_OPERR : FLASH operation Error flag
  *            @arg FLASH_FLAG_WRPERR: FLASH Write protected error flag
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
  *            @arg FLASH_FLAG_PGAERR: FLASH Programming Alignment error flag
  *            @arg FLASH_FLAG_PGPERR: FLASH Programming Parallelism error flag
  *            @arg FLASH_FLAG_PGSERR: FLASH Programming Sequence error flag
  *            @arg FLASH_FLAG_RDERR : FLASH Read Protection error flag (PCROP) (*)
  *            @arg FLASH_FLAG_BSY   : FLASH Busy flag
<<<<<<< HEAD
  *           (*) FLASH_FLAG_RDERR is not available for STM32F405xx/407xx/415xx/417xx devices                             
=======
  *           (*) FLASH_FLAG_RDERR is not available for STM32F405xx/407xx/415xx/417xx devices
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
  * @retval The new state of __FLAG__ (SET or RESET).
  */
#define __HAL_FLASH_GET_FLAG(__FLAG__)   ((FLASH->SR & (__FLAG__)))

/**
  * @brief  Clear the specified FLASH flags.
  * @param  __FLAG__ specifies the FLASH flags to clear.
  *          This parameter can be any combination of the following values:
<<<<<<< HEAD
  *            @arg FLASH_FLAG_EOP   : FLASH End of Operation flag 
  *            @arg FLASH_FLAG_OPERR : FLASH operation Error flag 
  *            @arg FLASH_FLAG_WRPERR: FLASH Write protected error flag 
  *            @arg FLASH_FLAG_PGAERR: FLASH Programming Alignment error flag 
  *            @arg FLASH_FLAG_PGPERR: FLASH Programming Parallelism error flag
  *            @arg FLASH_FLAG_PGSERR: FLASH Programming Sequence error flag
  *            @arg FLASH_FLAG_RDERR : FLASH Read Protection error flag (PCROP) (*)
  *           (*) FLASH_FLAG_RDERR is not available for STM32F405xx/407xx/415xx/417xx devices   
=======
  *            @arg FLASH_FLAG_EOP   : FLASH End of Operation flag
  *            @arg FLASH_FLAG_OPERR : FLASH operation Error flag
  *            @arg FLASH_FLAG_WRPERR: FLASH Write protected error flag
  *            @arg FLASH_FLAG_PGAERR: FLASH Programming Alignment error flag
  *            @arg FLASH_FLAG_PGPERR: FLASH Programming Parallelism error flag
  *            @arg FLASH_FLAG_PGSERR: FLASH Programming Sequence error flag
  *            @arg FLASH_FLAG_RDERR : FLASH Read Protection error flag (PCROP) (*)
  *           (*) FLASH_FLAG_RDERR is not available for STM32F405xx/407xx/415xx/417xx devices
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
  * @retval none
  */
#define __HAL_FLASH_CLEAR_FLAG(__FLAG__)   (FLASH->SR = (__FLAG__))
/**
  * @}
  */

/* Include FLASH HAL Extension module */
#include "stm32f4xx_hal_flash_ex.h"
#include "stm32f4xx_hal_flash_ramfunc.h"

/* Exported functions --------------------------------------------------------*/
/** @addtogroup FLASH_Exported_Functions
  * @{
  */
/** @addtogroup FLASH_Exported_Functions_Group1
  * @{
  */
/* Program operation functions  ***********************************************/
HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
/* FLASH IRQ handler method */
void HAL_FLASH_IRQHandler(void);
<<<<<<< HEAD
/* Callbacks in non blocking modes */ 
=======
/* Callbacks in non blocking modes */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);
/**
  * @}
  */

/** @addtogroup FLASH_Exported_Functions_Group2
  * @{
  */
/* Peripheral Control functions  **********************************************/
HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);
/* Option bytes control */
HAL_StatusTypeDef HAL_FLASH_OB_Launch(void);
/**
  * @}
  */

/** @addtogroup FLASH_Exported_Functions_Group3
  * @{
  */
/* Peripheral State functions  ************************************************/
uint32_t HAL_FLASH_GetError(void);
HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout);
/**
  * @}
  */

/**
  * @}
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/** @defgroup FLASH_Private_Variables FLASH Private Variables
  * @{
  */

/**
  * @}
  */
/* Private constants ---------------------------------------------------------*/
/** @defgroup FLASH_Private_Constants FLASH Private Constants
  * @{
  */

<<<<<<< HEAD
/** 
  * @brief   ACR register byte 0 (Bits[7:0]) base address  
  */ 
#define ACR_BYTE0_ADDRESS           0x40023C00U 
/** 
  * @brief   OPTCR register byte 0 (Bits[7:0]) base address  
  */ 
#define OPTCR_BYTE0_ADDRESS         0x40023C14U
/** 
  * @brief   OPTCR register byte 1 (Bits[15:8]) base address  
  */ 
#define OPTCR_BYTE1_ADDRESS         0x40023C15U
/** 
  * @brief   OPTCR register byte 2 (Bits[23:16]) base address  
  */ 
#define OPTCR_BYTE2_ADDRESS         0x40023C16U
/** 
  * @brief   OPTCR register byte 3 (Bits[31:24]) base address  
  */ 
=======
/**
  * @brief   ACR register byte 0 (Bits[7:0]) base address
  */
#define ACR_BYTE0_ADDRESS           0x40023C00U
/**
  * @brief   OPTCR register byte 0 (Bits[7:0]) base address
  */
#define OPTCR_BYTE0_ADDRESS         0x40023C14U
/**
  * @brief   OPTCR register byte 1 (Bits[15:8]) base address
  */
#define OPTCR_BYTE1_ADDRESS         0x40023C15U
/**
  * @brief   OPTCR register byte 2 (Bits[23:16]) base address
  */
#define OPTCR_BYTE2_ADDRESS         0x40023C16U
/**
  * @brief   OPTCR register byte 3 (Bits[31:24]) base address
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
#define OPTCR_BYTE3_ADDRESS         0x40023C17U

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup FLASH_Private_Macros FLASH Private Macros
  * @{
  */

/** @defgroup FLASH_IS_FLASH_Definitions FLASH Private macros to check input parameters
  * @{
  */
#define IS_FLASH_TYPEPROGRAM(VALUE)(((VALUE) == FLASH_TYPEPROGRAM_BYTE) || \
                                    ((VALUE) == FLASH_TYPEPROGRAM_HALFWORD) || \
                                    ((VALUE) == FLASH_TYPEPROGRAM_WORD) || \
<<<<<<< HEAD
                                    ((VALUE) == FLASH_TYPEPROGRAM_DOUBLEWORD))  
=======
                                    ((VALUE) == FLASH_TYPEPROGRAM_DOUBLEWORD))
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
/**
  * @}
  */

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup FLASH_Private_Functions FLASH Private Functions
  * @{
  */

/**
  * @}
  */

/**
  * @}
<<<<<<< HEAD
  */ 
=======
  */
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM32F4xx_HAL_FLASH_H */

<<<<<<< HEAD
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
=======
>>>>>>> 95147dff18777353e4155d9c14b1506f44999be0
