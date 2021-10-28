#include <libs.h>

vett single_module::modules;
vett single_module::XYvett;
double_t single_module::XYcoord;


void single_module::singlevettinput() {
    cout << "Insert Vector coordinates, each 2 coordinates are a single vector" << endl
         << "Insert 1 to exit" << endl;
    for (size_t i = 0; i < XYvett.size()+1; i++){ //size+1 so 0 < 1 is true and we start the input.
            cin >> XYcoord;
            if (XYcoord == 1){
                i = XYvett.size();
            } else {
                XYvett.push_back(XYcoord);
            }   
    }
}

//calculating module for each vector.
void single_module::singlevettpower() {

    for (size_t i = 0; i < XYvett.size()-1; i+=2) { 
     modules.push_back(sqrt((XYvett[i] * XYvett[i]) + (XYvett[i+1] * XYvett[i+1])));

    }   
}


void single_module::module_and_atan_single_vett() {

for (size_t i = 0; i < modules.size(); i++){
    cout << "Module of " << i+1 << " vector";
        cout << " " << modules[i] << endl;
    }      
} 

