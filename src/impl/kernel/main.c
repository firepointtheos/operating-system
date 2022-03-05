
#include "print.h" // Header for printing to screen!
#include "io.h"
#include "../../../drivers/display/display.c"
#include "../../../utils/fpdev.h"



void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    FPINT splaschsreenshow=0;

   //struct DriverHandel* ddhandel = display_drv_load();
    print_clear();

    outb(0xF4, 1);
    if (inb(0xFA) == 0x04) print_char(3);

    
    while (1)
    {
        if((uint8_t)0xFA == 0x04){
            break;
        }
    }
    
    print_str("Finichs");

    /*
    
    for (size_t i = 0;splaschsreenshow; i++)
    {
        print_str(("Index is: [%d]\n",i));
        
    }

    print_clear();
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_DARK_GRAY);
    print_str("Welcome by FirepointOS!");

 */  
}







 
 