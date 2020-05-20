/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_variables.c
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
#include "re_obd_variables.h"


uint8_t RE_OK=1;
uint8_t RE_FAIL=0;
uint8_t receive_data;
uint8_t receive_buffer[max];
uint16_t count=0;
uint16_t reception_complete_flag=0;
uint16_t check_flag=0;
uint16_t j;

uint16_t Race_flag=0;

uint8_t n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22;
uint8_t n23,n24,n25,n26,n27,n28,n29,n30,n31,n32,n33,n34,n35,n36,n37,n38,n39,n40,n41,n42,n43;
uint8_t n44,n45,n46,n47,n48,n49,n50,n51,n52,n53,n54,n55,n56,n57,n58,n59,n60,n61,n62,n63,n64;

uint8_t count1=0;

uint16_t SOC=10;
uint16_t RCAP=10;
uint16_t VOLT=10;
uint16_t TEMP=10;
uint16_t I=10;
uint16_t CC=10;
uint16_t SOH=10;
uint16_t PID=10;
uint16_t AVAIL_ENG=10;
uint16_t AVG_TIME_EMP=10;

uint8_t check_reception_var=0;
uint8_t race_obd_cmd_var=0;


uint8_t RACE_REQINFO_OBD_var=0;

uint8_t torque=112;
uint8_t rpm=222;
uint8_t phase_current=35;
uint8_t voltage=220;
uint8_t speed=43;
uint8_t gear_maintained=2;


uint8_t torque_min=0;
uint8_t rpm_min=0;
uint8_t phase_current_min=0;
uint8_t voltage_min=0;
uint8_t speed_min=0;
uint8_t gear_maintained_min=0;


uint8_t torque_max=111;
uint8_t rpm_max=222;
uint8_t phase_current_max=30;
uint8_t voltage_max=220;
uint8_t speed_max=45;
uint8_t gear_maintained_max=2;




battery bat_var1={01,02,03,04,05,06,07,8,9,10};
battery bat_var4={11,22,33,44,55,66,77,88,99,100};
battery bat_var3={101,202,220,222,224,226,228,230,232,234};
battery bat_var2={110,220,231,240,250,160,170,180,190,150};



/**************************** END OF FILE *************************************/



