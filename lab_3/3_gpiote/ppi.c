
#include "ppi.h"

void ppi_init(){
    for (int i = 0; i < 4; i++){
        PPI->PPI_CH[i].EEP = (uint32_t)&(GPIOTE->EVENTS_IN[4]); // Event endpoint
        PPI->PPI_CH[i].TEP = (uint32_t)&(GPIOTE->TASKS_OUT[i]); // Task endpoint

        PPI->CHENSET = (1 << i); // Enable channel
    }
}