#include <libs.h>
//This functions frees all the allocated memory for the vectors to work with new values.
//erase deletes all the values, and we set the range, in this case, from beginning to the end.

void memory::dump() {
    
        angle::atanvett.erase(angle::atanvett.begin(), angle::atanvett.end());
        single_module::moduleout.erase(single_module::moduleout.begin(), single_module::moduleout.end());
        single_module::X.erase(single_module::X.begin(), single_module::X.end());
        single_module::Y.erase(single_module::Y.begin(), single_module::Y.end());
        
        angle::tetha = 0;
        vett_product::cosangle = 0;
        vett_product::sinangle = 0;
        single_module::tot_request = 0;
        single_module::modulecalc = 0;
        single_module::modulecounter = 0;
        system("cls");
    
}