/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename          : re_obd_check-reception .h
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
#ifndef RE_OBD_CHECK-RECEPTION_H
#define RE_OBD_CHECK-RECEPTION_H
#include "re_obd_variables.h"  

extern uint8_t re_check_reception(void);
extern uint8_t re_race_obd_cmd();
extern void re_transmit(char *buff);
extern uint8_t  re_RACE_REQINFO_OBD();
extern uint8_t re_general_obd(uint8_t receive_buffer[100]);
extern uint8_t re_status_obd(uint8_t receive_buffer[100]);

#endif

/**************************** END OF FILE *************************************/
