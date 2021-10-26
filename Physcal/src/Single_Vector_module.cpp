#include <libs.h>

vett single_module::modules1;
vett single_module::modules2;
vett single_module::X;
vett single_module::Y;
doubval single_module::request;
doubval single_module::Xcoord;
doubval single_module::Ycoord;




void single_module::singlevettinput() {
    cout << "How many vectors you need to calculate?" << endl;
    cin >> request;

    for (size_t i = 0; i < request; i++){
        //for each vector:
        cout << "Insert X and Y coordinates for " << i+1 << " Vector" << endl;
            cin >> Xcoord;
            cin >> Ycoord;
             X.push_back(Xcoord); //x coordinate stored in i pos.
             Y.push_back(Ycoord); //y coordinate stored in j pos.
             
    }
}

    /*each time we choose a module calc in the menu, we store the module of 
     the vectors in these  vectors. Vector1 will contain i module, Vector2 will contain i+1 module.*/
void single_module::singlevettpower() {

    for (size_t i = 0; i < request; i++) { //static counter.
     modules1.push_back(sqrt((X[i] * X[i]) + (Y[i] * Y[i])));
     for (size_t j = i-1; j < i; j++){
         modules2.push_back(sqrt((X[j] * X[j]) + (Y[j] * Y[j])));
     }
     
    }   
}

    /*with static value we can print directly the next value
  without re-printing the whole values stored again.
  the next for will count the next i position.
  DO NOT INITIALIZE I OR ELSE IT WILL GET BACK TO 0 OVER AND OVER*/

void single_module::module_and_atan_single_vett() {

for (size_t i = 0; i < request; i++){
    //we increase i until finds 0 in vector.
    cout << "Module of " << i+1 << " vector";
        cout << " " << modules1[i] << endl;
        for (size_t j = i-1; j < i; j++){
        cout << "Module of " << j << " vector";
            cout << " " << modules2[j] << endl;
        }
    }      
} //we both calculate the module vector and it's atan value
// to retreive the tetha angle between N vectors later.

