#include "main.h"
UART_HandleTypeDef huart3;
extern void obd_init();
int main(void)
{
  HAL_Init();
  obd_init();
  re_transmit("set-up ready start the communication\r\n");
  while(reception_complete_flag!=1)
  {
    HAL_UART_Receive_IT(&huart3,&receive_data,1);
  }
}

