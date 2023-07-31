// Why this occured: CO_E_WRONG_SERVER_IDENTITY
// printf statement both in the interrupt context & main loop (Part 2 error)

#include "mbed.h"

InterruptIn button(PC_13); 
volatile bool buttonPressedFlag = false;


void button_interrupt() {
    buttonPressedFlag = true;
    printf("Button pressed!\r\n");
}

int main() {
    button.fall(&button_interrupt); 


    while (true) {
        if (buttonPressedFlag) {
            printf("Button pressed flag set!\r\n"); 
            buttonPressedFlag = false; 
        }
    }
}

    


