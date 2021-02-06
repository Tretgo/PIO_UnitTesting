
/* Includes ------------------------------------------------------------------*/
#include "main.hpp"
#include "Math_Utils.hpp"

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  while (1)
  {
  }
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  __HAL_RCC_GPIOF_CLK_ENABLE();
  //Switch to HSI
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_HSI);
  //Wait for switch
  while ((LL_RCC_GetSysClkSource() & RCC_CFGR_SWS_Msk) != LL_RCC_SYS_CLKSOURCE_HSI)
  {
  }

  //Disable PLL
  LL_RCC_PLL_Disable();

  //Set flash latency to 1 states
  __HAL_FLASH_SET_LATENCY(FLASH_LATENCY_2);

  LL_RCC_HSE_Enable();

  while (LL_RCC_HSE_IsReady() == 0u)
  {
  }

  LL_RCC_PLL_ConfigDomain_SYS(LL_RCC_PLLSOURCE_HSE_DIV_1, LL_RCC_PLL_MUL_4);

  LL_RCC_PLL_Enable();

  while (LL_RCC_PLL_IsReady() == 0u)
  {
  }

  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_PLL);

  while (LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_PLL)
  {
  }

  LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
  LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_2);
  LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_1);

  LL_RCC_SetUSBClockSource(LL_RCC_USB_CLKSOURCE_PLL);
  LL_RCC_SetADCClockSource(LL_RCC_ADC12_CLKSRC_PLL_DIV_2);
  __HAL_FLASH_SET_LATENCY(FLASH_LATENCY_1);

  SystemCoreClock = HSE_VALUE * 4ul;
  HAL_InitTick(uwTickPrio);

  // Enables the Clock Security System
  HAL_RCC_EnableCSS();
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
