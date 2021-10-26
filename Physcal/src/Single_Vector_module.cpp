#include <libs.h>

vett single_module::moduleout;
vett single_module::X;
vett single_module::Y;
doubval single_module::request;
doubval single_module::Xcoord;
doubval single_module::Ycoord;
doubval single_module::tot_request = 0;
doubval single_module::modulecounter;
int single_module::vectorcounter;
int single_module::modulecalc;



void single_module::singlevettinput() {
    cout << "How many vectors you need to calculate?" << endl;
    cin >> request;
    tot_request += request;

    for (vectorcounter; vectorcounter < tot_request; vectorcounter++){
        //for each vector:
        cout << "Insert X and Y coordinates for " << vectorcounter+1 << " Vector" << endl;
            cin >> Xcoord;
            cin >> Ycoord;
             X.push_back(Xcoord); //x coordinate stored in i pos based of vectorcounter.
             Y.push_back(Ycoord); //y coordinate stored in i pos based of vectorcounter.
             
    }
}

    /*each time we choose a module calc in the menu, we store the module of 
     the vectors in this moduleout vector.*/
void single_module::singlevettpower() {

    for (modulecalc; modulecalc < tot_request; modulecalc++) { //static counter.
     moduleout.push_back(sqrt((X[modulecalc] * X[modulecalc]) + (Y[modulecalc] * Y[modulecalc])));
     modulecounter++;
    }
}
    /*with static value we can print directly the next value
  without re-printing the whole values stored again.
  the next for will count the next i position.
  DO NOT INITIALIZE I OR ELSE IT WILL GET BACK TO 0 OVER AND OVER*/

void single_module::module_and_atan_single_vett() {

for (static int i; i < tot_request; i++){
    //we increase i until finds 0 in vector.
    cout << "Module of " << i+1 << " vector";
        cout << " " << moduleout[i] << endl;
        angle::atan_components();
        cout << "Atan of " << i+1 << " Vector: " << angle::atanvett[i] << endl;
    }   
        
} //we both calculate the module vector and it's atan value
// to retreive the tetha angle between N vectors later.

