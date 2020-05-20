/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_init.c
  * Origin Date           :   15/02/2020
  * Compiler              :   Specify compiler used
  * Hardware              :   
  * Target                :   STM32F407-DISCOVERY
  * Notes                 :   None
  *****************************************************************************
  * @attention
  *
  * <h2><center>&copy;Copyright (C) RACEnergy, Inc - All Rights Reserved.
  * </center></h2>
  *
  * Unauthorized copying of this file, via any medium is strictly prohibited
  * Proprietary and confidential
  *
  * Written by Team RACEnergy, FEB 2020
  *****************************************************************************
  */

/* Includes */
#include "main.h"
#include "re_obd_init.h"
#include "re_obd_sysclock.h"
#include "re_obd_gpio.h"
#include "re_obd_uart.h"

void obd_init()
{
SystemClock_Config();
MX_GPIO_Init();
MX_USART3_UART_Init();
return ;
}







/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{

}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 

}
    #endif /* USE_FULL_ASSERT */      


/**************************** END OF FILE *************************************/





