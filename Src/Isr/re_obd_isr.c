/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_isr.c
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
#include "re_obd_isr.h"

extern UART_HandleTypeDef huart3;
/** user defined call back :
                 @brief This function handles the receive buffer,user entered 
 data will be stored in this buffer and clears the buffer after the execution */

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
 {
      if(receive_data=='\r')
      {
      
               reception_complete_flag=1;
               receive_buffer[count++]='\0';
               //re_transmit("rec_buff=");
               HAL_UART_Transmit(&huart3,(uint8_t*)receive_buffer,count,HAL_MAX_DELAY);
               re_transmit_r_n();
               check_reception_var=re_check_reception();
               check_reception_var=0;
               reception_complete_flag=0;
               memset(receive_buffer,0,100);
               count=0;
       }
       else
       {
         if(receive_data==8)
         {
           count--;
         }
         else
         {
           receive_data=re_convert_alpha(receive_data);
           receive_buffer[count++]=receive_data;
         }
       }
   }
/******************** end of the call back ***********************/

/**************************** END OF FILE *************************************/
