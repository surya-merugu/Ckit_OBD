/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_modes.h
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
#ifndef RE_OBD_MODES_H
#define RE_OBD_MODES_H

#include "re_obd_variables.h"

extern uint8_t display_start();
extern uint8_t display_end();
extern uint8_t display_mode_1(uint8_t torque, uint8_t rpm,uint8_t,uint8_t,uint8_t);
extern uint8_t display_mode_2(uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t);
extern uint8_t display_mode_3();
extern uint8_t display_mode_4(uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t);
extern uint8_t display_mode_5();
extern uint8_t display_mode_6(uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t);
extern uint8_t display_mode_7(uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t);
extern uint8_t display_mode_9();
extern uint8_t display_mode_8();
extern uint8_t display_mode_10();

#endif

/**************************** END OF FILE *************************************/