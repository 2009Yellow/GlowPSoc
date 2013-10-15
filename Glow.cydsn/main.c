/* ========================================
 *
 * Copyright MIT 6.115, 2013
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF MIT 6.115.
 *
 * This file is necessary for your project to build.
 * Please do not delete it.
 *
 * ========================================
*/

#include <device.h>


CY_ISR(RX_INT) {
    LCD_PutChar(UART_ReadRxData());     // RX ISR
}

void init() {
	LCD_Start();					    // initialize lcd
	LCD_ClearDisplay();
    
    CyGlobalIntEnable;
    rx_int_StartEx(RX_INT);             // start RX interrupt (look for CY_ISR with RX_INT address)
                                        // for code that writes received bytes to LCD.
    
    UART_Start();                       // initialize UART
    UART_ClearRxBuffer();
}


void crlf(){   
    UART_PutChar(10);
    UART_PutChar(13);
}


void main() {	
    init();

    for(;;){
    }
}



/* [] END OF FILE */