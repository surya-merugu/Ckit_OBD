/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_latch.c
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
#include "re_obd_latch.h"


/** open latch:
        @brief This function opens the latch******/
uint8_t open_latch(uint8_t receive_buffer[100]) 
{
  if(strcmp(receive_buffer,latch_open)==0)
  {
   
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
  return RE_OK;
  }
  else
    return RE_FAIL;
}
/*********************   end of latch  **********************************/
    
/**************************** END OF FILE *************************************/