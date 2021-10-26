#include <libs.h>

void printval::vector_values() {

    for (size_t i = 0; i < single_module::tot_request; i++){
        cout << "Atan of " << i+1 << " Vector:" << angle::atanvett[i] << endl; 
    }
    for (size_t i = 0; i < single_module::tot_request; i++) {
        cout << "Module of " << i+1 << " Vector:" << single_module::moduleout[i] << endl; 
    }
    for (size_t i = 0; i < single_module::tot_request; i++) {
        cout << "Vector " << i+1 << " X coordinate" << single_module::X[i] << endl
             << "Vector " << i+1 << " Y coordinate" << single_module::Y[i] << endl;

    }
         cout << "Current tetha: " << angle::tetha << endl;
         system("pause"); 
}
