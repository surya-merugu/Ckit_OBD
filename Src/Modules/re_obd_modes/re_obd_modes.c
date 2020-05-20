/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_modes.c
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
#include "re_obd_modes.h"


/** start:
        @brief This function initiates the commuinication ****/
uint8_t display_start(uint8_t receive_buffer[100])
{
  if((strcmp(receive_buffer,obd_start)==0)&&(count1==0))
  {
  re_transmit("+RACE : \r\n");  
  re_transmit("OK\r\n");
  re_transmit("connection established sucessfully\r\n");
  re_transmit("activated\r\n");
  count1++;
  return RE_OK;
  }
  else if((strcmp(receive_buffer,obd_start)==0)&&(count1!=0))
  {
    re_transmit("communication established already\r\n");
    return RE_OK;
  }
  else
  {
    return RE_FAIL;
  }
}
/*************    end of start ***********************************/

/** end: 
        @brief This function is stops the execution  ***********/
 
uint8_t display_end(uint8_t receive_buffer[100])
{
  if((strcmp(receive_buffer,obd_end)==0)&&(count1>=1))
  {
  re_transmit("+RACE : \r\n");  
  re_transmit("communication ended\r\n");
  exit(0);
  }
  return RE_FAIL;
}
/******************  end of function(end)  ***************************/

/**  mode1:
        @brief This function provides the values of the parameters   ******/
uint8_t display_mode_1(uint8_t torque, uint8_t rpm,uint8_t SOC,uint8_t VOLT,uint8_t I )
{
    if((strcmp(receive_buffer,cmd01)==0)&&(count1==1))
    {
    re_transmit("+RACE : \r\n");  
    re_transmit("-----------------------------------------\r\n"); 
    re_transmit("torque\t=\t65\r\n");
    re_transmit("rpm\t=\t1000\r\n");
    re_transmit("SOC\t=\t70\r\n");
    re_transmit("VOLT\t=\t76\r\n");
    re_transmit("current\t=\t65\r\n");
    re_transmit("-----------------------------------------\r\n");
    return RE_OK;
    }
    else
    {
      return RE_FAIL;
    }
}
/************************* end of mode1  **************************/

/**  mode2:
        @brief This function provides the freeze frame data of the parameters   ******/
uint8_t display_mode_2(uint8_t phase_current,uint8_t voltage,uint8_t speed,uint8_t torque,uint8_t gear_maintained,uint8_t rpm)
{
    if((strcmp(receive_buffer,cmd02)==0)&&(count1==1))
    {
    re_transmit("+RACE : \r\n");  
    re_transmit("-----------------------------------------\r\n");
    re_transmit("displaying freeze frame data\r\n");
    re_transmit("phase_current\t=\t10\r\n");
    re_transmit("voltage\t\t=\t10\r\n");
    re_transmit("speed\t\t=\t10\r\n");
    re_transmit("torque\t\t=\t10\r\n");
    re_transmit("gear_maintained\t=\t2\r\n");
    re_transmit("rpm\t\t=\t1000\r\n");
    re_transmit("-----------------------------------------\r\n");
    return RE_OK;
    }
    else
    {
      return RE_FAIL;
    }
}
/************************  end of mode2  **************************/
/** /**  mode3:
        @brief This function is currently not in use   ******/
uint8_t display_mode_3()
{
   if((strcmp(receive_buffer,cmd03)==0)&&(count1==1))
   {
   re_transmit("+RACE : \r\n");  
   re_transmit("-----------------------------------------\r\n");         
   re_transmit("you are in the mode 3\r\n");
   re_transmit("mode 3 is executing......\r\n");
   re_transmit("mode-3 currently disabled\r\n");
   re_transmit("-----------------------------------------\r\n");
   return RE_OK;
   }
   else 
   {
     return RE_FAIL;
   }
}
/********************  end of mode 3 ***************************/

/** /**  mode 4:
        @brief This function provides the values of the parameters   ******/
uint8_t display_mode_4(uint8_t phase_current,uint8_t voltage,uint8_t speed,uint8_t torque,uint8_t gear_maintained,uint8_t rpm,uint8_t SOC,uint8_t VOLT,uint8_t I)
{
   
  if((strcmp(receive_buffer,cmd04)==0)&&(count1==1))
  {
    re_transmit("+RACE : \r\n");
    re_transmit("-----------------------------------------\r\n");
    re_transmit("clears the freeeze frame data\r\n");
    re_transmit("phase_current\t=\t0 mA\r\n");
    re_transmit("voltage\t\t=\t0 m-v\r\n");
    re_transmit("speed\t\t=\t0 kmph\r\n");
    re_transmit("torque\t\t=\t0 N-m\r\n");
    re_transmit("gear_maintained\t=\t0\r\n");
    re_transmit("rpm\t\t=\t0 r/min\r\n");
    re_transmit("SOC\t\t=\t0\r\n");
    re_transmit("VOLT\t\t=\t0\r\n");
    re_transmit("current\t=\t0\r\n");
    re_transmit("-----------------------------------------\r\n");
    return RE_OK;
  }
  return RE_FAIL;
}
/********************** end of mode 4    ****************************/
/**  mode 5:
        @brief This function currently not i use  ******/
uint8_t display_mode_5()
{
  if((strcmp(receive_buffer,cmd05)==0)&&(count1==1))
  {
  re_transmit("+RACE : \r\n");  
  re_transmit("-----------------------------------------\r\n");          
  re_transmit("you are in the mode 5\r\n");
  re_transmit("mode 5 is executing......\r\n");
  re_transmit("mode-5 currently disabled\r\n");
  re_transmit("-----------------------------------------\r\n");
  return RE_OK;
  }
  return RE_FAIL;
}

/**************   end of mode 5  ********************************/

/**  mode6:
        @brief This function provides minimum and maximum values   ******/
uint8_t display_mode_6(uint8_t phase_current,uint8_t voltage,uint8_t speed,uint8_t torque,uint8_t gear_maintained,uint8_t rpm,uint8_t SOC,uint8_t VOLT,uint8_t I)
{
    
    if((strcmp(receive_buffer,cmd06)==0)&&(count1==1))
    {
    re_transmit("+RACE : \r\n");  
    re_transmit("-----------------------------------------\r\n");
    re_transmit("display min  and maximum values of all the parameters\r\n");
    re_transmit("phase_current\t:\tmin = 0\tmax = 30 mA \r\n");
    re_transmit("voltage\t\t:\tmin = 0\tmax = 220 m-v \r\n");
    re_transmit("speed\t\t:\tmin = 0\tmax = 45 kmph \r\n");
    re_transmit("torque\t\t:\tmin = 0\tmax = 111 N-m \r\n");
    re_transmit("gear_maintained\t:\tmin = 1\tmax = 2 \r\n");
    re_transmit("rpm\t\t:\tmin = 0\tmax = 222 r/min \r\n");
    re_transmit("-----------------------------------------\r\n");
    return RE_OK;
    }
    else
    return RE_FAIL;
}
/********************* end of mode 6  ************************************/
/**  mode7:
        @brief This function checks received is between  minimum and maximum values   ******/
uint8_t display_mode_7(uint8_t phase_current,uint8_t voltage,uint8_t speed,uint8_t torque,uint8_t gear_maintained,uint8_t rpm,uint8_t SOC,uint8_t VOLT,uint8_t I)
{   
    if((strcmp(receive_buffer,cmd07)==0)&&(count1==1))
    {
    re_transmit("+RACE : \r\n");  
    re_transmit("-----------------------------------------\r\n");
    if((phase_current>=phase_current_min)&&(phase_current<=phase_current_max))
    {
      re_transmit("phase_current =\t");
      accept_int(phase_current);
      re_transmit("valid value\r\n");
    }
    else
    {
      re_transmit("phase_current =\t");
      accept_int(phase_current);
      re_transmit("not valid value-XXXXX\r\n");
    }
    if((voltage>=voltage_min)&&(voltage<=voltage_max))
    {
      re_transmit("voltage =\t");
      accept_int(voltage);
      re_transmit("valid value\r\n");
    }
    else
    {
      re_transmit("voltage =\t");
      accept_int(voltage);
      re_transmit("not valid value-XXXXX\r\n");
    }
    if((speed>=speed_min)&&(speed<=speed_max))
    {
      re_transmit("speed =\t");
      accept_int(speed);
      re_transmit("valid value\r\n");
    }
    else
    {
      re_transmit("speed =\t");
      accept_int(speed);
      re_transmit("not valid value-XXXXX\r\n");
    }
    if((torque>=torque_min)&&(torque<=torque_max))
    {
      re_transmit("torque =\t");
      accept_int(torque);
      re_transmit("valid value\r\n");
    }
    else
    {
      re_transmit("torque =\t");
      accept_int(torque);
      re_transmit("not valid value-XXXXX\r\n");
    }
    if((gear_maintained>=gear_maintained_min)&&(gear_maintained<=gear_maintained_max))
    {
      re_transmit("gear_maintained =\t");
      accept_int(gear_maintained);
      re_transmit("valid value\r\n");
    }
    else
    {
      re_transmit("gear_maintained =\t");
      accept_int(gear_maintained);
      re_transmit("not valid value-XXXXX\r\n");
    }
    if((rpm>=rpm_min)&&(rpm<=rpm_max))
    {
      re_transmit("rpm =\t");
      accept_int(rpm);
      re_transmit("valid value\r\n");
    }
    else
    {
      re_transmit("rpm =\t");
      accept_int(rpm);
      re_transmit("not valid value-XXXXX\r\n");
    }
    re_transmit("checks wheather current data is between the min and max value\r\n");
    re_transmit("-----------------------------------------\r\n");
    return RE_OK;
    }
    else
    return RE_FAIL;
}
/*******************  end of node 7  ******************************/

/** /**  mode8:
        @brief This function is currently not in use and to enable off board  ******/
uint8_t display_mode_8()
{
  if((strcmp(receive_buffer,cmd08)==0)&&(count1==1))
  {
  re_transmit("+RACE : \r\n");  
  re_transmit("-----------------------------------------\r\n");
  re_transmit("you are in the mode 8\r\n");
  re_transmit("mode 8 is executing......\r\n");
  re_transmit("to enable off board \r\n");
  re_transmit("-----------------------------------------\r\n");
  return RE_OK;
  }
  else
    return RE_FAIL;
}

/*******************  end of mode 8 ******************************/

/**  mode 9:
        @brief This function provides vehicle information   ******/
uint8_t display_mode_9()
{
          if((strcmp(receive_buffer,cmd09)==0)&&(count1==1))
          {
          re_transmit("+RACE : \r\n");  
          re_transmit("vehicle information\r\n");
          re_transmit("obd general executing....\r\n");
          re_transmit("-----------------------------------------\r\n");
          re_transmit("product id:\t ");
          re_transmit(product_id);
          re_transmit_r_n();
          re_transmit("manufacture id:\t ");
          re_transmit(manufact_id);
          re_transmit_r_n();
          re_transmit("model id:\t ");
          re_transmit(Model_id);
          re_transmit_r_n();
          re_transmit("-----------------------------------------\r\n");
    return RE_OK;
          }
          return RE_FAIL;
}
/************************  end of mode 9  ****************************/

/** mode 10:
        @brief This function is currently not in use   ******/
uint8_t display_mode_10()
{
  if((strcmp(receive_buffer,cmd10)==0)&&(count1==1))
  {
  re_transmit("+RACE : \r\n");  
  re_transmit("-----------------------------------------\r\n");
  re_transmit("mode 10 no information\r\n");
  re_transmit("-----------------------------------------\r\n");
  return RE_OK;
  }
  else
    return RE_FAIL;
  
}
/***********************  end of mode 10  *****************************/

/**************************** END OF FILE *************************************/