/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   main.h
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
#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<ctype.h>
  
  
#include "re_obd_variables.h" 


  
#include "stm32f4xx_hal.h"
#include "re_obd_battery1.h"
#include "re_obd_battery2.h"
#include "re_obd_battery3.h"
#include "re_obd_battery4.h"  
#include "re_obd_check-reception.h"
#include "re_obd_test.h"
#include "re_obd_modes.h"  
  
  
  


void Error_Handler(void);

#ifdef __cplusplus
}
#endif

#endif 

/**************************** END OF FILE *************************************/