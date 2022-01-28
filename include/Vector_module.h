#ifndef DFEBDC11_D1C2_49F9_AEF6_F8EA5BAA0B3E
#define DFEBDC11_D1C2_49F9_AEF6_F8EA5BAA0B3E
#include "stdlibs.h"
#include <math.h>
#include <vector>

class modulefunc {
        
    public:
            using vett = vector<double_t>;
            static vett XYvett;
            static vett modules;
            static double_t XYcoord;
            static bool operation;
            static void coordinates_input();
            static void module_calc();
            static void module_output();

};

#endif /* DFEBDC11_D1C2_49F9_AEF6_F8EA5BAA0B3E */
