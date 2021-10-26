#ifndef DFEBDC11_D1C2_49F9_AEF6_F8EA5BAA0B3E
#define DFEBDC11_D1C2_49F9_AEF6_F8EA5BAA0B3E
#include <libs.h>

class single_module {
    private:

            static doubval Xcoord;
            static doubval Ycoord;
        
    public:
                
            static vett X;
            static vett Y;
            static vett moduleout; 
            static doubval request;
            static doubval tot_request;
            static doubval modulecounter; //used as static counter
            static int vectorcounter;  //used as static counter            
            static int modulecalc; //used as static counter
            
            
            static void singlevettinput();
            static void singlevettpower();
            static void module_and_atan_single_vett();

};

#endif /* DFEBDC11_D1C2_49F9_AEF6_F8EA5BAA0B3E */
