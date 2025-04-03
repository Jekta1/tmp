#include "ppi.h"
#include "gpio.h"

int main(){

	GPIO->PIN_CNF[13] = (3 << 2);
    gpiote_init();
    ppi_init();

    while (1){

    }
}