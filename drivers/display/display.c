#include "krlintf.hpp"
#include "../driver.h"
struct DriverHandel* display_drv_load(){

    ///// Driver Handel //////
    struct  DriverHandel dhandel;

    dhandel.driverName = "kernel:drv:display";
    dhandel.status = 2;
    dhandel.protectionLevel = -100;
    dhandel.loaderIndex = 1;
    dhandel.driverId = -12;
    
    ///// IMPLIMENTCATION /////

    ///// RETURN /////

    return &dhandel;
    
}

void fpd_display_putpixel(int pos_x, int pos_y, unsigned char VGA_COLOR)
{
    unsigned char* location = (unsigned char*)((0xB8000 - 136) * pos_y + pos_x);
    *location = VGA_COLOR;
}