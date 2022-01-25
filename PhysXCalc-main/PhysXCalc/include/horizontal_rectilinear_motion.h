#ifndef A75CD2B3_DE4E_48C8_AACD_8531EE10749A
#define A75CD2B3_DE4E_48C8_AACD_8531EE10749A
#include <stdlibs.h>
#include <math.h>

class rectilinear_motion {
    private:
            static double_t speed;
            static double_t time;
    public:
            static void horizontal_motion();
            static void fall_serious();
            static void projectile_motion();
};
 
#endif /* A75CD2B3_DE4E_48C8_AACD_8531EE10749A */
