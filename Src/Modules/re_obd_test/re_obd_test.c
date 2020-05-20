/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_test.c
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
#include "re_obd_test.h"

/**write:
         @brief This function handles to modify the current data of the parameters
 when DTC(diagnostic trouble codes) are observed *************/
/********************   This function is not defined yet   ***********/
 uint8_t re_write_obd(uint8_t receive_buffer[100])
 {
     if(strcmp(receive_buffer,obd_write)==0)    
     {
     re_transmit("+RACE : \r\n");
     re_transmit("OK...OK.....\r\n");
     re_transmit("-----------------------------------------\r\n");  
     re_transmit("obd write executing........\r\n");
     re_transmit("write is not defined yet\r\n");
     re_transmit("-----------------------------------------\r\n");
     return RE_OK;
     }
     else
       return RE_FAIL;
 }
/****************  end of the write  **********************/

/**** execute :
         @brief This function handles to modify and execute the current data of the parameters
 when DTC(diagnostic trouble codes) are observed *******/
/*************** This function is not defined yet ****************/
uint8_t re_execute_obd(uint8_t receive_buffer[100])
{
  
        if(strcmp(receive_buffer,obd_execute)==0)   
        {
        re_transmit("+RACE : \r\n"); 
        re_transmit("OK...OK.....\r\n");
        re_transmit("-----------------------------------------\r\n");
        re_transmit("obd execute executing.......\r\n");
        re_transmit("exe is not defined yet\r\n");
        re_transmit("-----------------------------------------\r\n");
        return RE_OK;
        }
        else
           return RE_FAIL;
}
/*     end of execute */

/** Test :
         @brief This function is to test the DTC(diagnostic trouble codes) are observed 
 This function is not defined yet **/

uint8_t re_test_obd(uint8_t receive_buffer[100])
{
        if(strcmp(receive_buffer,obd_test)==0) 
        {
        re_transmit("+RACE : \r\n"); 
        re_transmit("OK...OK.....\r\n");
        re_transmit("-----------------------------------------\r\n");     
        re_transmit("obd execute executing.......\r\n");
        re_transmit("test is not defined yet\r\n");
        re_transmit("-----------------------------------------\r\n");
        return RE_OK;
        }
        else 
           return RE_FAIL;
    
}
/*****************          end of test       **************************/              
/** Transmit:
            @brief This function is to transmit the newline ***/
void re_transmit_r_n()
{
  re_transmit("\r\n");
}
/***********     end of transmit newline   ************************/

/**  atoi :
            @brief This function converts the string  to the integer  ***/
 uint16_t re_call_to_atoi(char rec_buf[])
 {
   int k;
   k=atoi(rec_buf);
   return k;
  }
/******************** end of atoi  ********************************/
/*** convert_alpha:
              @brief This function converts receive data to the lower case ***/        
uint8_t re_convert_alpha(uint8_t data)
{
   if((data>=65)&&(data<=90))
   {
     data=data+32;
   }
   else
   {
     data=data;
   }
   return data;
 }
/*****************    end of convert_alpha  *****************************/

/**menu_1:
         @brief This function displays menu for the test  *****/
uint8_t menu_1()
{
  if(strcmp(receive_buffer,tests)==0)
  {    re_transmit("+RACE : \r\n");
       re_transmit("-----------------------------------------\r\n");
       re_transmit("RACE-OBD2-TESTS\r\n");
       re_transmit("-----------------------------------------\r\n");
       re_transmit(general); 
       re_transmit("\t: - It will display vehicle information\r\n");
       re_transmit_r_n();
       re_transmit(status);  
       re_transmit("\t: - It will display values of the parameters(like current,voltage)\r\n");
       re_transmit_r_n();
       re_transmit(write); 
       re_transmit("\t: - currently disabled\r\n");
       re_transmit_r_n();
       re_transmit(execute); 
       re_transmit("\t: - currently disabled\r\n");
       re_transmit_r_n();
       re_transmit(test);
       re_transmit("\t: - currently disabled\r\n");
       re_transmit_r_n();
       re_transmit("6.exit\r\n"); 
       re_transmit_r_n();
       re_transmit("WARNNING:Do not use the command No:6 until you are done with the processing\r\n");
       re_transmit("on using above mentioned command terminates/stops all the process and you may have to start from beginning\r\n");
  
       re_transmit("-----------------------------------------\r\n");
       return RE_OK;
  }
  else 
    return RE_FAIL;
}
/*********************** end of menu_1   *****************************/

/**** menu_2:
           @brief This function displays menufor the modes  ****/
uint8_t menu_2()
{
  if(strcmp(receive_buffer,modes)==0)
  {
  re_transmit("+RACE : \r\n");  
  re_transmit("RACE-OBD2-MODES\r\n");
  re_transmit("-----------------------------------------\r\n");
  re_transmit("a. mode-1 : - provides powertrain information\r\n"); 
  re_transmit_r_n();
  re_transmit("b. mode-2 : - provides freeze frame data\r\n"); 
  re_transmit_r_n();
  re_transmit("c. mode-3 : - currently disabled\r\n"); 
  re_transmit_r_n();
  re_transmit("d. mode-4 : - clears the freeze frame data\r\n"); 
  re_transmit_r_n();
  re_transmit("e. mode-5 : - currently disbled\r\n"); 
  re_transmit_r_n();
  re_transmit("f. mode-6 : - provides minimum and maximum vales of the parameters\r\n"); 
  re_transmit_r_n();
  re_transmit("g. mode-7 : - provides the pending DTCs\r\n"); 
  re_transmit_r_n();
  re_transmit("h. mode-8 : - to enable of off-board-diagnostics\r\n"); 
  re_transmit_r_n();
  re_transmit("i. mode-9 : - provides complete vehicle information\r\n"); 
  re_transmit_r_n();
  re_transmit("j. mode-10 : - currently disabled\r\n"); 
  re_transmit_r_n();
  re_transmit("-----------------------------------------\r\n");
  
  return RE_OK;
  }
  else
    return RE_FAIL;
}

/*****************      end of menu_2   **************************/

/**************************** END OF FILE *************************************/


  
  

    
       

    

      

