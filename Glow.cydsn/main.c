#include <device.h>

// Mat constants
#define HEIGHT (5)
#define WIDTH (4)
#define MAT_SIZE (20)

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
    PGA_TOP_GND_Start();
    PGA_BOTTOM_GND_Start();
    PGA_REF_Start();
    VDAC8_REF_Start();
    PGA_GAIN_Start();
    IDAC8_REF_Start();
    ADC_SAR_1_Start();
    //ADC_SAR_1_StartConvert();
    
    // Init muxes
    TOP_MUX_GND_Start();
    BOTTOM_MUX_GND_Start();
    TOP_MUX_VREF_Start();
    BOTTOM_MUX_SENSE_Start();
    zeroAllPins();
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
    int i;
    int j;
    for (i = 0; i < HEIGHT; ++i) {
        for (j = 0; j < WIDTH; ++j) {
            configureMat(i,j);
            // Start ADC conversion. Wait for next value, then stop conversion.
            ADC_SAR_1_StartConvert();
            ADC_SAR_1_IsEndConversion(1);
            adcResult = ADC_SAR_1_GetResult16();
            ADC_SAR_1_StopConvert();
            adcValues[i * WIDTH + j] = adcResult;

        }
    }
}

void configureMat(int i, int j) {
    //i = 2;
    // Zero all pins
    zeroAllPins();
    // Set the i pin to Vref
    TOP_MUX_GND_Disconnect(i);
    TOP_MUX_VREF_Select(i);
    // Connect the j pin to sense
    BOTTOM_MUX_GND_Disconnect(j);
    BOTTOM_MUX_SENSE_Select(j);
}

void zeroAllPins() {
    // Disconnect power and sense
    TOP_MUX_VREF_DisconnectAll();
    BOTTOM_MUX_SENSE_DisconnectAll();
    // Connect all ground pins
    int i;
    for (i=0; i < HEIGHT; ++i) {
        TOP_MUX_GND_Connect(i);
    }
    int j;
    for (j=0; j < WIDTH; ++j) {
        BOTTOM_MUX_GND_Connect(j);
    }
}

