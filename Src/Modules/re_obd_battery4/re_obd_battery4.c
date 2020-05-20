/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_battery4.c
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
#include "re_obd_battery4.h"

/** battery 4:
        @brief This function displays battery 4 parameters ******/
uint8_t displaybattery4(battery b)
{
  if((strcmp(receive_buffer,b4_info)==0)&&(count1==1))
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
/********************* end of battery 4    ******************/



uint8_t display_battery4a(battery b)
{
  if(strcmp(receive_buffer,b4a_info)==0)
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
uint8_t display_battery4b(battery b)
{
  if(strcmp(receive_buffer,b4b_info)==0)
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
uint8_t display_battery4c(battery b)
{
  if(strcmp(receive_buffer,b4c_info)==0)
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
uint8_t display_battery4d(battery b)
{
  if(strcmp(receive_buffer,b4d_info)==0)
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
uint8_t display_battery4e(battery b)
{
  if(strcmp(receive_buffer,b4e_info)==0)
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
uint8_t display_battery4f(battery b)
{
  if(strcmp(receive_buffer,b4f_info)==0)
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
uint8_t display_battery4g(battery b)
{
  if(strcmp(receive_buffer,b4g_info)==0)
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
uint8_t display_battery4h(battery b)
{
  if(strcmp(receive_buffer,b4h_info)==0)
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
uint8_t display_battery4i(battery b)
{
  if(strcmp(receive_buffer,b4i_info)==0)
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
uint8_t display_battery4j(battery b)
{
  if(strcmp(receive_buffer,b4j_info)==0)
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


/** accept_int:
        @brief This function converts number to string*****/
void accept_int(int num)
 {
   char str[12];
   inttostring(str,num);
   return;
 }

void inttostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
    re_transmit(str);
    re_transmit_r_n();
    return ;
}

/**************************** END OF FILE *************************************/