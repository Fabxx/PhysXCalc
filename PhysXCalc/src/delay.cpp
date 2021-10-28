#include <libs.h>

int16_t delay::milliseconds;
clock_t delay::start_time;

void delay::delaytime() {

    milliseconds = 1 * 1000;
    start_time = clock();
    while (clock() < start_time + milliseconds);
    
}