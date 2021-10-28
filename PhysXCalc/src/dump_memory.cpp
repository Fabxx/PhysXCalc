#include <libs.h>
//This functions frees all the allocated memory for the vectors to work with new values.


void memory::dump() {

        cout << "Dumping memory of vectors for new values, Please wait" << endl;
        for (size_t i = 0; i < 3; i++){
                delay::delaytime();
                cout << ".";
        }
        
        angle::atanvett.clear();
        single_module::modules.clear();
        single_module::XYvett.clear();
        system("cls");
    
}