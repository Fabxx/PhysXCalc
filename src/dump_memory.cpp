//This functions frees all the allocated memory for the vectors to work with new values.
#include "dump_memory.h"
#include "delay.h"
#include "Tetha_angle_calc.h"
#include "Vector_module.h"

void memory::dump() {

        cout << "Dumping memory of vectors for new values, Please wait..." << endl;
       for (size_t i = 0; i < 3; i++) {
               delay::delaytime(1);
               cout << ".";
       }
       
        angle::atanvett.clear();
        modulefunc::modules.clear();
        modulefunc::XYvett.clear();
        
}