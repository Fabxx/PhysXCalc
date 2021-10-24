#include <libs.h>

doubval single_module::vettA_x;
doubval single_module::vettA_y;
vett single_module::moduleout;
doubval single_module::countermodule = 0;


void single_module::singlevettinput() {

    cout << "Insert the two coordinates for the vector" << endl;
    cin >> vettA_x;
    cin >> vettA_y;

}

void single_module::singlevettpower() {
      
      cout << "Calculating module..." << endl;
           moduleout.push_back(sqrt((vettA_x * vettA_x) + (vettA_y * vettA_y)));
           countermodule++;
           //each time we choose a module calc in the menu, we store the module of 
           //the vectors in this moduleout vector.
}

void single_module::module_and_atan_single_vett() {
    
    for (size_t i = 0; i < countermodule; i++){
        cout << "Module of " << i+1 << " vector";
             cout << " " << moduleout[i] << endl;
            angle::atan_components();
            cout << "Atan of " << i+1 << " Vector: " << angle::atanvett[i] << endl;
        }   
            system("pause");
    } //we both calculate the module vector and it's atan value
      // to retreive the tetha angle between N vectors later.

