#include <libs.h>

clock_t delay::start_time;
int16_t delay::milliseconds;


void delay::delaytime() {

    milliseconds = 3 * 1000;
    start_time = clock();
    while (clock() < start_time + milliseconds);
    
}