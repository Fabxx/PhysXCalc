#include <delay.h>

clock_t delay::start_time;

void delay::delaytime(int16_t milliseconds) {

    milliseconds *= 1000;
    start_time = clock();
    while (clock() < start_time + milliseconds);
    
}