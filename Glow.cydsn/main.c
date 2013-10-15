#include <device.h>

// Mat constants
#define HEIGHT (4)
#define WIDTH (4)
#define MAT_SIZE (16)

// Serial Communcation Constants
#define SERIAL_START_CHAR ('A')
#define FIRST_SERIAL_RECEIVE_CHAR ('B') 
#define FINAL_SERIAL_RECEIVE_CHAR (10)  // Linefeed in ASCII

// ADC constnats 
#define ADC_GAIN (100)

// ADC members
uint16 adcResult = 0;
uint8 adcValues [HEIGHT * WIDTH];

CY_ISR(RX_INT) {
    uint8 input = UART_ReadRxData();
    //LCD_PutChar(input);     // RX ISR
    processRX(input);
}

void init() {
	LCD_Start();					    // initialize lcd
	LCD_ClearDisplay();
    
    CyGlobalIntEnable;
    rx_int_StartEx(RX_INT);             // start RX interrupt (look for CY_ISR with RX_INT address)
                                        // for code that writes received bytes to LCD.
    
    UART_Start();                       // initialize UART
    UART_ClearRxBuffer();
    
    // Init Electronic Components
    PGA_1_Start();
    VDAC8_1_Start();
    PGA_2_Start();
    IDAC8_1_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
}


void crlf(){   
    UART_PutChar(10);
    UART_PutChar(13);
}


void main() {	
    init();
    // Main process loop.
    while(1) {
        // Read ADC inputs
        processMat();
    }
}


void processRX(uint8 input) {
    // Only start sending values if receive start char
    if (input != SERIAL_START_CHAR) {
        return;
    }
    
    // Send start char of sequence
    UART_PutChar(FIRST_SERIAL_RECEIVE_CHAR);

    // Send payload data
    int i;
    for (i = 0; i < MAT_SIZE; ++i) {
        UART_PutChar(adcValues[i]);
        //UART_PutChar(0xF0 * i);
    }

    // Send final char of sequence
    UART_PutChar(FINAL_SERIAL_RECEIVE_CHAR);
}

void processMat() {
    ADC_SAR_1_IsEndConversion(1);
    adcResult = ADC_SAR_1_GetResult16();
    LCD_ClearDisplay();
    LCD_PutChar(adcResult);     // RX ISR
    int i;
    for (i = 0; i < MAT_SIZE; ++i) {
        adcValues[i] = adcResult;
    }
}

