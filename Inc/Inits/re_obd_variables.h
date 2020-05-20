/**
  *****************************************************************************
  * Title                 :   CONVERSION KIT
  * Filename              :   re_obd_variables.h
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
#ifndef RE_OBD_VARIABLES_H
#define RE_OBD_VARIABLES_H


#define max 100
#define general "1.general"
#define status "2.status"
#define write "3.write"
#define execute "4.execute"
#define test "5.test"
#define choice "please enter your choice"
#define wrong_choice "invalid choice"
#define proid "race+pro_id"
#define manid "race+manufact_id"
#define model_id "race+model_id"
#define product_id "xxxxxxx2521568"
#define manufact_id "xyzewygg98787"
#define Model_id "NNNNNNN"
#define invalid_cmd "invalid commnad"
#define process "processing please wait"
#define ok_buffer "OK..OK..\r\n"
#define error_buffer "ERROR-XXXXX\r\n"
#define again "same cmd again"
#define REC_DATA "race_obd_cmd"
#define establish "connection established"
#define obd_start "race+001+start"
#define obd_end "race+002+end"
#define obd_general "race+003+general"
#define obd_status "race+004+status"
#define obd_test "race+005+test"
#define obd_write "race+006+write"
#define obd_execute "race+007+execute"
#define cmd01 "race+008+mode-01"
#define cmd02 "race+009+mode-02"
#define cmd03 "race+010+mode-03"
#define cmd04 "race+011+mode-04"
#define cmd05 "race+012+mode-05"
#define cmd06 "race+013+mode-06"
#define cmd07 "race+014+mode-07"
#define cmd08 "race+015+mode-08"
#define cmd09 "race+016+mode-09"
#define cmd10 "race+017+mode-10"
#define modes "race+018+menu"
#define tests "race+019+menu"
#define b1_info "race+020+b1+info"
#define b2_info "race+021+b2+info"
#define b3_info "race+022+b3+info"
#define b4_info "race+023+b4+info"
#define b1a_info "race+024+b1+soc+info"
#define b1b_info "race+025+b1+rcap+info"
#define b1c_info "race+026+b1+volt+info"
#define b1d_info "race+027+b1+temp+info"
#define b1e_info "race+028+b1+i+info"
#define b1f_info "race+029+b1+emptytime+info"
#define b1g_info "race+030+b1+energy+info"
#define b1h_info "race+031+b1+cc+info"
#define b1i_info "race+032+b1+soh+info"
#define b1j_info "race+033+b1+pid+info"
#define b2a_info "race+034+b2+soc+info"
#define b2b_info "race+035+b2+rcap+info"
#define b2c_info "race+036+b2+volt+info"
#define b2d_info "race+037+b2+temp+info"
#define b2e_info "race+038+b2+i+info"
#define b2f_info "race+039+b2+emptytime+info"
#define b2g_info "race+040+b2+energy+info"
#define b2h_info "race+041+b2+cc+info"
#define b2i_info "race+042+b2+soh+info"
#define b2j_info "race+043+b2+pid+info"
#define b3a_info "race+044+b3+soc+info"
#define b3b_info "race+045+b3+rcap+info"
#define b3c_info "race+046+b3+volt+info"
#define b3d_info "race+047+b3+temp+info"
#define b3e_info "race+048+b3+i+info"
#define b3f_info "race+049+b3+emptytime+info"
#define b3g_info "race+050+b3+energy+info"
#define b3h_info "race+051+b3+cc+info"
#define b3i_info "race+052+b3+soh+info"
#define b3j_info "race+053+b3+pid+info"
#define b4a_info "race+054+b4+soc+info"
#define b4b_info "race+055+b4+rcap+info"
#define b4c_info "race+056+b4+volt+info"
#define b4d_info "race+057+b4+temp+info"
#define b4e_info "race+058+b4+i+info"
#define b4f_info "race+059+b4+emptytime+info"
#define b4g_info "race+060+b4+energy+info"
#define b4h_info "race+061+b4+cc+info"
#define b4i_info "race+062+b4+soh+info"
#define b4j_info "race+063+b4+pid+info"
#define latch_open "race+latch+open"


extern uint8_t receive_data;
extern uint8_t receive_buffer[max];
extern uint16_t count;
extern uint16_t reception_complete_flag;
extern uint16_t check_flag;
extern uint16_t j;
extern uint16_t Race_flag;
extern uint8_t n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22;
extern uint8_t n23,n24,n25,n26,n27,n28,n29,n30,n31,n32,n33,n34,n35,n36,n37,n38,n39,n40,n41,n42,n43;
extern uint8_t n44,n45,n46,n47,n48,n49,n50,n51,n52,n53,n54,n55,n56,n57,n58,n59,n60,n61,n62,n63,n64;
extern uint8_t count1;
extern uint8_t RE_OK,RE_FAIL;
extern uint16_t SOC;
extern uint16_t RCAP;
extern uint16_t VOLT;
extern uint16_t TEMP;
extern uint16_t I;
extern uint16_t CC;
extern uint16_t SOH;
extern uint16_t PID;
extern uint16_t AVAIL_ENG;
extern uint16_t AVG_TIME_EMP;
extern uint8_t check_reception_var;
extern uint8_t race_obd_cmd_var;
extern uint8_t RACE_REQINFO_OBD_var;
extern uint8_t torque;
extern uint8_t rpm;
extern uint8_t phase_current;
extern uint8_t voltage;
extern uint8_t speed;
extern uint8_t gear_maintained;

extern uint8_t torque_min;
extern uint8_t rpm_min;
extern uint8_t voltage_min;
extern uint8_t speed_min;
extern uint8_t gear_maintained_min;
extern uint8_t phase_current_min;

extern uint8_t torque_max;
extern uint8_t rpm_max;
extern uint8_t voltage_max;
extern uint8_t speed_max;
extern uint8_t gear_maintained_max;
extern uint8_t phase_current_max;

typedef struct bat
{
  uint8_t soc;
  uint8_t rcap;
  uint8_t volt;
  uint8_t temp;
  uint8_t i;
  uint8_t avg_time_emp;
  uint8_t avail_eng;
  uint8_t cc;
  uint8_t soh;
  uint8_t pid;
} battery;
extern battery bat_var1,bat_var2,bat_var3,bat_var4;


#endif

/**************************** END OF FILE *************************************/


