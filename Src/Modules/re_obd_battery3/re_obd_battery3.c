/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_battery3.c
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
#include "re_obd_battery3.h"


/** battery 3:
        @brief This function displays battery 3 parameters ******/
uint8_t displaybattery3(battery b)
{
  if((strcmp(receive_buffer,b3_info)==0)&&(count1==1))
  {
  re_transmit("+RACE : \r\n");  
  re_transmit("-----------------------------------------\r\n"); 
  re_transmit("SOC =\t");
  accept_int(b.soc);
  re_transmit("RCAP =\t");
  accept_int(b.rcap);
  re_transmit("VOLT =\t");
  accept_int(b.volt);
  re_transmit("TEMP =\t");
  accept_int(b.temp);
  re_transmit("I =\t");
  accept_int(b.i);
  re_transmit("avg_time_emp =\t");
  accept_int(b.avg_time_emp);
  re_transmit("AVAIL_ENG =\t");
  accept_int(b.avail_eng);
  re_transmit("CC =\t");
  accept_int(b.cc);
  re_transmit("SOH =\t");
  accept_int(b.soh);
  re_transmit("PID =\t");
  accept_int(b.pid);
  re_transmit("-----------------------------------------\r\n"); 
  re_transmit_r_n();
  return RE_OK;
  }
  else
    return RE_FAIL;
   
}
/*********************  end of battery 3 **********************/


uint8_t display_battery3a(battery b)
{
  if(strcmp(receive_buffer,b3a_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("SOC =\t");
    accept_int(b.soc);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3b(battery b)
{
  if(strcmp(receive_buffer,b3b_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("RCAP =\t");
    accept_int(b.rcap);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3c(battery b)
{
  if(strcmp(receive_buffer,b3c_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("VOLT =\t");
    accept_int(b.volt);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3d(battery b)
{
  if(strcmp(receive_buffer,b3d_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("TEMP =\t");
    accept_int(b.temp);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3e(battery b)
{
  if(strcmp(receive_buffer,b3e_info)==0)
  {
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("I =\t");
    accept_int(b.i);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3f(battery b)
{
  if(strcmp(receive_buffer,b3f_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("avg_time_emp =\t");
    accept_int(b.avg_time_emp);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3g(battery b)
{
  if(strcmp(receive_buffer,b3g_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("AVAIL_ENG =\t");
    accept_int(b.avail_eng);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3h(battery b)
{
  if(strcmp(receive_buffer,b3h_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("CC =\t");
    accept_int(b.cc);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3i(battery b)
{
  if(strcmp(receive_buffer,b3i_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("SOH =\t");
    accept_int(b.soh);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}
uint8_t display_battery3j(battery b)
{
  if(strcmp(receive_buffer,b3j_info)==0)
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("PID =\t");
    accept_int(b.pid);
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit_r_n();
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
  
}

/**************************** END OF FILE *************************************/
