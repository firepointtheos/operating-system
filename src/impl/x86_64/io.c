#include "../../intf/io.h"


void outb(uint16_t port, uint8_t value){
    asm("outb %0, %1", ((value),(port)));
}

uint8_t inb(uint16_t port){
    uint8_t returnVal;
    asm("inb %1, %0" ,((returnVal),(port)));
    return returnVal;
}

void io_wait(){
    asm("outb %%ax, $0x80");
}