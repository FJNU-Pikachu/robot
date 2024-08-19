//
// Created by Khoo on 2023/3/18.
//

#include "bsp_uart.h"
#include "usart.h"


void BSP_UART_INIT(void)
{
    MX_USART3_UART_Init();
    MX_USART2_UART_Init();
}