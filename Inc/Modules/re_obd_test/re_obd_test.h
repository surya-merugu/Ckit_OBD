/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_test.h
  * Origin Date           :   13/02/2020
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef RE_OBD_TEST_H
#define RE_OBD_TEST_H

#include "re_obd_variables.h" 


extern uint8_t re_write_obd(uint8_t receive_buffer[100]);
extern uint8_t re_execute_obd(uint8_t receive_buffer[100]);
extern uint8_t re_test_obd(uint8_t receive_buffer[100]);
extern void re_transmit_r_n();
extern uint16_t re_call_to_atoi(char rec_buf[]);
extern uint8_t re_convert_alpha(uint8_t data);
extern uint8_t menu_1();
extern uint8_t menu_2();


#endif

/**************************** END OF FILE *************************************/