/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_battery1.c
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
#include "re_obd_battery1.h"


/** battery 1:
        @brief This function displays battery 1 parameters ******/
uint8_t displaybattery1( battery b)
{
  if((strcmp(receive_buffer,b1_info)==0)&&(count1==1))
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
/******************     end of battery 1**********************************/


uint8_t display_battery1a(battery b)
{
  if((strcmp(receive_buffer,b1a_info)==0)&&(count1==1))
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
uint8_t display_battery1b(battery b)
{
  if((strcmp(receive_buffer,b1b_info)==0)&&(count1==1))
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
uint8_t display_battery1c(battery b)
{
  if((strcmp(receive_buffer,b1c_info)==0)&&(count1==1))
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
uint8_t display_battery1d(battery b)
{
  if((strcmp(receive_buffer,b1d_info)==0)&&(count1==1))
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
uint8_t display_battery1e(battery b)
{
  if((strcmp(receive_buffer,b1e_info)==0)&&(count1==1))
  {
    re_transmit("+RACE : \r\n");
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
uint8_t display_battery1f(battery b)
{
  if((strcmp(receive_buffer,b1f_info)==0)&&(count1==1))
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
uint8_t display_battery1g(battery b)
{
  if((strcmp(receive_buffer,b1g_info)==0)&&(count1==1))
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
uint8_t display_battery1h(battery b)
{
  if((strcmp(receive_buffer,b1h_info)==0)&&(count1==1))
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
uint8_t display_battery1i(battery b)
{
  if(strcmp(receive_buffer,b1i_info)==0)
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
uint8_t display_battery1j(battery b)
{
  if(strcmp(receive_buffer,b1j_info)==0)
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
