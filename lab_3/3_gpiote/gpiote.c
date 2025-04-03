#include "gpiote.h"
#include "gpio.h"

void gpiote_init(){
    GPIOTE->CONFIG[4] = (1 << 0) | (13 << 8) | (2 << 16) | (1 << 20); //event triggered by button 1

    GPIOTE->CONFIG[0] = (3 << 0) | (17 << 8) | (3 << 16) | (1 << 20); //task led 1
    GPIOTE->CONFIG[1] = (3 << 0) | (18 << 8) | (3 << 16) | (1 << 20); //task led 1
    GPIOTE->CONFIG[2] = (3 << 0) | (19 << 8) | (3 << 16) | (1 << 20); //task led 1
    GPIOTE->CONFIG[3] = (3 << 0) | (20 << 8) | (3 << 16) | (1 << 20); //task led 1
    //the bits beeing set are respectivley: setting as task, pin number, task = toggle, initial state = high

}