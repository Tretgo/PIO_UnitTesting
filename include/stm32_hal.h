#ifndef __STM32_HAL_H__
#define __STM32_HAL_H__

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef STM32F0xx
#include "stm32f0xx.h"
#include "stm32f0xx_hal.h"
#elif defined(STM32F1xx)
#include "stm32f1xx.h"
#include "stm32f1xx_hal.h"
#elif defined(STM32F2xx)
#include "stm32f2xx.h"
#include "stm32f2xx_hal.h"
#elif defined(STM32F3xx)
#include "stm32f3xx.h"
#include "stm32f3xx_hal.h"
#include "stm32f3xx_it.h"
#include "stm32f3xx_hal_conf.h"
#elif defined(STM32F4xx)
#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#else
#error "No board defined :/"
#endif

#ifdef __cplusplus
}
#endif
#endif // __STM32_HAL_H__