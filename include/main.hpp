/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32_hal.h"
#include "stm32f3xx_it.h"
#include "stm32f3xx_ll_rcc.h"
#include "stm32f3xx_ll_crc.h"
#include "stm32f3xx_ll_iwdg.h"
#include "stm32f3xx_ll_adc.h"
#include "stm32f3xx_ll_gpio.h"

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
  void SystemClock_Config(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define NC_Pin GPIO_PIN_13
#define NC_GPIO_Port GPIOC
#define NCC14_Pin GPIO_PIN_14
#define NCC14_GPIO_Port GPIOC
#define NCC15_Pin GPIO_PIN_15
#define NCC15_GPIO_Port GPIOC
#define Enable_6_Pin GPIO_PIN_0
#define Enable_6_GPIO_Port GPIOA
#define Enable_5_Pin GPIO_PIN_1
#define Enable_5_GPIO_Port GPIOA
#define V_Bus_Pin GPIO_PIN_2
#define V_Bus_GPIO_Port GPIOA
#define Temp_3_Pin GPIO_PIN_3
#define Temp_3_GPIO_Port GPIOA
#define I_Bus_Pin GPIO_PIN_4
#define I_Bus_GPIO_Port GPIOA
#define Temp_2_Pin GPIO_PIN_5
#define Temp_2_GPIO_Port GPIOA
#define LED_1_Pin GPIO_PIN_6
#define LED_1_GPIO_Port GPIOA
#define LED_2_Pin GPIO_PIN_7
#define LED_2_GPIO_Port GPIOA
#define PWM_6_Pin GPIO_PIN_0
#define PWM_6_GPIO_Port GPIOB
#define PWM_5_Pin GPIO_PIN_1
#define PWM_5_GPIO_Port GPIOB
#define Temp_1_Pin GPIO_PIN_2
#define Temp_1_GPIO_Port GPIOB
#define Tach_6_Pin GPIO_PIN_10
#define Tach_6_GPIO_Port GPIOB
#define Tach_5_Pin GPIO_PIN_11
#define Tach_5_GPIO_Port GPIOB
#define WS_En_Pin GPIO_PIN_12
#define WS_En_GPIO_Port GPIOB
#define LED_3_Pin GPIO_PIN_13
#define LED_3_GPIO_Port GPIOB
#define WS_Out_Pin GPIO_PIN_14
#define WS_Out_GPIO_Port GPIOB
#define Enable_1_Pin GPIO_PIN_15
#define Enable_1_GPIO_Port GPIOB
#define PWM_1_Pin GPIO_PIN_8
#define PWM_1_GPIO_Port GPIOA
#define PWM_2_Pin GPIO_PIN_9
#define PWM_2_GPIO_Port GPIOA
#define Enable_2_Pin GPIO_PIN_10
#define Enable_2_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define Enable_4_Pin GPIO_PIN_15
#define Enable_4_GPIO_Port GPIOA
#define Enable_3_Pin GPIO_PIN_3
#define Enable_3_GPIO_Port GPIOB
#define PWM_3_Pin GPIO_PIN_4
#define PWM_3_GPIO_Port GPIOB
#define PWM_4_Pin GPIO_PIN_5
#define PWM_4_GPIO_Port GPIOB
#define Tach_1_Pin GPIO_PIN_6
#define Tach_1_GPIO_Port GPIOB
#define Tach_2_Pin GPIO_PIN_7
#define Tach_2_GPIO_Port GPIOB
#define Tach_3_Pin GPIO_PIN_8
#define Tach_3_GPIO_Port GPIOB
#define Tach_4_Pin GPIO_PIN_9
#define Tach_4_GPIO_Port GPIOB
  /* USER CODE BEGIN Private defines */

  /* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
