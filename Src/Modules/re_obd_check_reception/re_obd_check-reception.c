/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename          :   re_obd_check-reception.c
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
#include "re_obd_check-reception.h"
extern UART_HandleTypeDef huart3;
extern uint8_t open_latch(uint8_t receive_buffer[100]);
/**  check reception:
                 @brief This function handles receive buffer and execute the defined cases*/

 uint8_t re_check_reception(void)
 {  
     if(strcmp(receive_buffer,REC_DATA)==0)
     {
         
         race_obd_cmd_var=re_race_obd_cmd(); 
         if(race_obd_cmd_var==RE_OK)
         {
             re_transmit("race_obd_cmd\r\n");
         }
         else
         {
             re_transmit("you have entered invalid command\r\n");
             re_transmit("try again\r\n");
             re_transmit("please enter the valid command");
             re_transmit("waiting for the input from the user\r\n");
         }
         
         memset(receive_buffer,0,100);
         return RE_OK;
     }
     

   
   else if((isdigit(receive_buffer[5]))&&(isdigit(receive_buffer[6]))&&(isdigit(receive_buffer[7])))
   {
     uint8_t buffer[3];
     buffer[0]=receive_buffer[5];
     buffer[1]=receive_buffer[6];
     buffer[2]=receive_buffer[7];
     j=re_call_to_atoi(buffer);
     switch(j)
     {
       
     case 1:
       {
         n1=display_start(receive_buffer);
         if(n1==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command1\r\n");
         break;
     }
     case 2: 
       {
         n2=display_end(receive_buffer);
         if(n2==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command2\r\n");
         break;
       }
     case 3:
       {
         n3=re_general_obd(receive_buffer);
         if(n3==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command3\r\n");
             break;
       }
     case 4: 
       {
       n4=re_status_obd(receive_buffer);
       if(n4==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command4\r\n");
             break;        
       }
     case 5:
       {
         n5=re_test_obd(receive_buffer);
         if(n5==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command5\r\n");
             break;  
       }
     case 6: 
       {
         n6=re_write_obd(receive_buffer);
         if(n6==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command6\r\n");
             break;  
       }
     case 7: 
       {
         n7=re_execute_obd(receive_buffer);
         if(n7==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command7\r\n");
             break; 
       }
     case 8: 
       {
         n8=display_mode_1(torque,rpm,SOC,VOLT,I);
         if(n8==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command8\r\n");
             break; 
       }
     case 9:
       {
         n9=display_mode_2(phase_current,voltage,speed,torque,gear_maintained,rpm);
         if(n9==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command9\r\n");
             break;
       }
     case 10:
       {
         n10=display_mode_3();
         if(n10==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command10\r\n");
             break;
       }
     case 11:
       {
         n11=display_mode_4(phase_current,voltage,speed,torque,gear_maintained,rpm,SOC,VOLT,I);
         if(n11==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command11\r\n");
             break;
       }
     case 12:
       {
         n12=display_mode_5();
         if(n12==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command12\r\n");
             break;
       }
     case 13:
       {
         n13=display_mode_6(phase_current,voltage,speed,torque,gear_maintained,rpm,SOC,VOLT,I);
         if(n13==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command13\r\n");
              break;
       }
     case 14:
       {
         n14=display_mode_7(phase_current,voltage,speed,torque,gear_maintained,rpm,SOC,VOLT,I);
         if(n14==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command14\r\n");
             break;
       }
     case 15:
       {
         n15=display_mode_8();
         if(n15==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command15\r\n");
             break;
       }
     case 16:
       {
         n16=display_mode_9();
         if(n16==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command16\r\n");
             break;
       }
     case 17:
       {
         n17=display_mode_10();
         if(n17==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command17\r\n");
             break;
       }
        case 18:
       {
        n18=menu_2();
         if(n18==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command18\r\n");
             break;
       }
        case 19:
       {
         n19=menu_1();
         if(n19==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command19\r\n");
             break;
       }
       case 20:
         {
           n20=displaybattery1(bat_var1);
         if(n20==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command20\r\n");
             break;
         }
         case 21:
         {
           n21=displaybattery2(bat_var2);
         if(n21==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command21\r\n");
             break;
         }
           case 22:
         {
           n22=displaybattery3(bat_var3);
         if(n22==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command22\r\n");
             break;
         }
           case 23:
         {
           n23=displaybattery4(bat_var4);
         if(n23==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command23\r\n");
             break;
         }
         case 24:
         {
           n24=display_battery1a(bat_var1);
         if(n24==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command24\r\n");
             break;
         }
         case 25:
         {
           n25=display_battery1b(bat_var1);
         if(n25==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command25\r\n");
             break;
         }
         case 26:
         {
           n26=display_battery1c(bat_var1);
         if(n26==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command26\r\n");
             break;
         }
         case 27:
         {
           n27=display_battery1d(bat_var1);
         if(n27==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command27\r\n");
             break;
         }
         case 28:
         {
           n28=display_battery1e(bat_var1);
         if(n28==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command28\r\n");
             break;
         }
         case 29:
         {
           n29=display_battery1f(bat_var1);
         if(n29==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command29\r\n");
             break;
         }
         case 30:
         {
           n30=display_battery1g(bat_var1);
         if(n30==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command30\r\n");
             break;
         }
         case 31:
         {
           n31=display_battery1h(bat_var1);
         if(n31==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command31\r\n");
             break;
         }
         case 32:
         {
           n32=display_battery1i(bat_var1);
         if(n32==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command32\r\n");
             break;
         }
         case 33:
         {
           n33=display_battery1j(bat_var1);
         if(n33==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command33\r\n");
             break;
         
         }
         case 34:
         {
           n34=display_battery2a(bat_var2);
         if(n34==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command34\r\n");
             break;
         }
         case 35:
         {
           n35=display_battery2b(bat_var2);
         if(n35==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command35\r\n");
             break;
         }
         case 36:
         {
           n36=display_battery2c(bat_var2);
         if(n36==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command36\r\n");
             break;
         }
         case 37:
         {
           n37=display_battery2d(bat_var2);
         if(n37==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command37\r\n");
             break;
         }
         case 38:
         {
           n38=display_battery2e(bat_var2);
         if(n38==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command38\r\n");
             break;
         }
         case 39:
         {
           n39=display_battery2f(bat_var2);
         if(n39==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command39\r\n");
             break;
         }
         case 40:
         {
           n40=display_battery2g(bat_var2);
         if(n40==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command40\r\n");
             break;
         }
         case 41:
         {
           n41=display_battery2h(bat_var2);
         if(n41==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command41\r\n");
             break;
         }
         case 42:
         {
           n42=display_battery2i(bat_var2);
         if(n42==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command42\r\n");
             break;
         }
         case 43:
         {
           n43=display_battery2j(bat_var2);
         if(n43==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command43\r\n");
             break;
         }
         case 44:
         {
           n44=display_battery3a(bat_var3);
         if(n44==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command44\r\n");
             break;
         }
         case 45:
         {
           n45=display_battery3b(bat_var3);
         if(n45==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command45\r\n");
             break;
         }
         case 46:
         {
           n46=display_battery3c(bat_var3);
         if(n46==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command46\r\n");
             break;
         }
         case 47:
         {
           n47=display_battery3d(bat_var3);
         if(n47==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command47\r\n");
             break;
         }
         case 48:
         {
           n48=display_battery3e(bat_var3);
         if(n48==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command48\r\n");
             break;
         }
         case 49:
         {
           n49=display_battery3f(bat_var3);
         if(n49==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command49\r\n");
             break;
         }
         case 50:
         {
           n50=display_battery3g(bat_var3);
         if(n50==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command50\r\n");
             break;
         }
         case 51:
         {
           n51=display_battery3h(bat_var3);
         if(n51==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command51\r\n");
             break;
         }
         case 52:
         {
           n52=display_battery3i(bat_var3);
         if(n52==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command52\r\n");
             break;
         }
         case 53:
         {
           n53=display_battery3j(bat_var3);
         if(n53==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command53\r\n");
             break;
         }
         case 54:
         {
           n54=display_battery4a(bat_var4);
         if(n54==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command54\r\n");
             break;
         }
         case 55:
         {
           n55=display_battery4b(bat_var4);
         if(n55==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command55\r\n");
             break;
         }
         case 56:
         {
           n56=display_battery4c(bat_var4);
         if(n56==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command56\r\n");
             break;
         }
         case 57:
         {
           n57=display_battery4d(bat_var4);
         if(n57==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command57\r\n");
             break;
         }
         case 58:
         {
           n58=display_battery4e(bat_var4);
         if(n58==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command58\r\n");
             break;
         }
         case 59:
         {
           n59=display_battery4f(bat_var4);
         if(n59==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command59\r\n");
             break;
         }
         case 60:
         {
           n60=display_battery4g(bat_var4);
         if(n60==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command60\r\n");
             break;
         }
         case 61:
         {
           n61=display_battery4h(bat_var4);
         if(n61==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command61\r\n");
             break;
         }
         case 62:
         {
           n62=display_battery4i(bat_var4);
         if(n62==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command62\r\n");
             break;
         }
         case 63:
         {
           n63=display_battery4j(bat_var4);
         if(n63==RE_OK)
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command63\r\n");
             break;
         }
     default:
       {
         re_transmit("+RACE : \r\n");
         re_transmit("invalid command\r\n");
       }
         
     }
     
   }
     else if(strcmp(receive_buffer,tests)==0)
     {
       menu_1();
     }
     else if(strcmp(receive_buffer,modes)==0) 
     {
        menu_2();
     }
     else if(strcmp(receive_buffer,latch_open)==0)
     {
        if(RE_OK==(open_latch(receive_buffer)))
           re_transmit("command executed sucessfully\r\n");
         else 
           re_transmit(" invalid command latch\r\n");
           
       
     }
     
     else
     {
          re_transmit(error_buffer);
          re_transmit_r_n();
          memset(receive_buffer,0,100);
          count=0;
          return RE_FAIL;
     }
     return RE_OK;
 }
/*********************   end of check reception    ***********************/

uint8_t re_race_obd_cmd()
{
    if(Race_flag==1)
    {
       
        re_transmit(ok_buffer); 
        re_transmit_r_n();
        re_transmit(establish);
        re_transmit_r_n();
        check_flag=1;
        RACE_REQINFO_OBD_var=re_RACE_REQINFO_OBD();
        if(RACE_REQINFO_OBD_var==RE_OK)
        {
            //re_transmit("re_race_obd_cmd() executed sucessfully\r\n");
        }
        else
        {

            re_transmit("you have entered invalid command\r\n");
            re_transmit("try again\r\n");
            re_transmit("please enter the valid command");
            re_transmit("waiting for the input from the user\r\n");
            re_transmit("re_race_obd_cmd() try again\r\n");
        }
        check_flag=0;
        
        return RE_OK;
    }            
    else 
    {
             re_transmit("race_obd_cmd_fun\r\n");
             re_transmit(error_buffer);
             re_transmit(again);
             memset(receive_buffer,0,100);
             count=0;
             return RE_FAIL;
    }
}
/***  transmit:
           @brief This function handles transmission of the user defined data*/
void re_transmit(char *buff)
{
    short int buff_size;
    buff_size=strlen(buff);                    
    HAL_UART_Transmit(&huart3,(uint8_t*)buff,buff_size,HAL_MAX_DELAY);
    memset(buff,0,buff_size);
    buff_size =0;
}
/***************************  end of transmit   *****************************/

uint8_t  re_RACE_REQINFO_OBD()
   {
       if(check_flag==1)
       {
      
       re_transmit("-----------------------------------------\r\n");  
       re_transmit(general); 
       re_transmit_r_n();
       re_transmit(status);  
       re_transmit_r_n();
       re_transmit(write); 
       re_transmit_r_n();
       re_transmit(execute); 
       re_transmit_r_n();
       re_transmit(test);
       re_transmit_r_n();
       re_transmit("6.To exit all the process\r\n");
       re_transmit_r_n();
       re_transmit(choice); 
       re_transmit_r_n();
       re_transmit("-----------------------------------------\r\n");
       re_transmit("executed sucessfully\r\n");
       return RE_OK;
       }
       else
       { 
           re_transmit("race_req_info execution failed\r\n");
           return RE_FAIL;
       }
       
   }
 /*** vehicle information:
                  @brief This function displays complete vehicle information*/
  uint8_t re_general_obd(uint8_t receive_buffer[100])
  {
    if(strcmp(receive_buffer,obd_general)==0)
    {
          re_transmit("+RACE : \r\n");
          re_transmit("OK...OK.....\r\n");    
          re_transmit("obd general executing....\r\n");
          re_transmit("-----------------------------------------\r\n");
          re_transmit("OWNER NAME:\t\tSRINIVAS\r\n"); 
          re_transmit("AUTO NO:\t\tTS ABC5 0921\r\n");
          re_transmit("OWNER CONTACT NO:\t9876543210\r\n");
          re_transmit("product id:\t\t ");
          re_transmit(product_id);
          re_transmit_r_n();
          re_transmit("manufacture id:\t\t ");
          re_transmit(manufact_id);
          re_transmit_r_n();
          re_transmit("model id:\t\t ");
          re_transmit(Model_id);
          re_transmit_r_n();
          
          re_transmit("-----------------------------------------\r\n");
      return RE_OK;
    }
    else
      return RE_FAIL;
  }
/*************    end of vehicle information   ***********************/

/**** status :
             @brief This function displays current values of the paramaters*/
  uint8_t re_status_obd(uint8_t receive_buffer[100])
   {
       if(strcmp(receive_buffer,obd_status)==0)
       {
       re_transmit("+RACE : \r\n");  
       re_transmit("OK...OK.....\r\n");   
       re_transmit("status executing.....\r\n");    
       re_transmit("-----------------------------------------\r\n");
       re_transmit("SOC\t\t=\t10 %");
       re_transmit_r_n();
       re_transmit("RCAP\t\t=\t10 mAh");
       re_transmit_r_n();
       re_transmit("VOLT\t\t=\t10 m-v");
       re_transmit_r_n();
       re_transmit("TEMP\t\t=\t10 degree");
       re_transmit_r_n();
       re_transmit("I\t\t=\t10 ma");
       re_transmit_r_n();
       re_transmit("AVG_TIME_EMP\t=\t10 mintues");
       re_transmit_r_n();
       re_transmit("AVAIL_ENG\t=\t10 mWh");
       re_transmit_r_n();
       re_transmit("CC\t\t=\t10");
       re_transmit_r_n();
       re_transmit("SOH\t\t=\t10 %");
       re_transmit_r_n();
       re_transmit("PID\t\t=\t10");
       re_transmit_r_n();
       re_transmit("-----------------------------------------\r\n");
       return RE_OK;
       
     }
     else
       return RE_FAIL;
   }
/************************   end of status  ****************************/

/**************************** END OF FILE *************************************/     
