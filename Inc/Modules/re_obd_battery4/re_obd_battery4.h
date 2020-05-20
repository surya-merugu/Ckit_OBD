/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_battery4.h
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
#ifndef RE_OBD_BATTERY4_H
#define RE_OBD_BATTERY4_H

#include "re_obd_variables.h"

extern uint8_t displaybattery4(battery );

extern uint8_t display_battery4a(battery );
extern uint8_t display_battery4b(battery );
extern uint8_t display_battery4c(battery );
extern uint8_t display_battery4d(battery );
extern uint8_t display_battery4e(battery );
extern uint8_t display_battery4f(battery );
extern uint8_t display_battery4g(battery );
extern uint8_t display_battery4h(battery );
extern uint8_t display_battery4i(battery );
extern uint8_t display_battery4j(battery ); 
extern void accept_int(int num);
extern void inttostring(char str[], int num);

#endif

/**************************** END OF FILE *************************************/