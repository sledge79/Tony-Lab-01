// Why this occured: CO_E_WRONG_SERVER_IDENTITY


#include "mbed.h"

InterruptIn button(PC_13); 

void button_interrupt() {
    printf("Button pressed!\r\n");
}

int main() {
    button.fall(&button_interrupt); 


    while (true) {

    }
}

