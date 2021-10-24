#include <libs.h>

int input::choice;

void graphics_selection::interface() {
    cout << "NOTE, the operation 4 requires values obtained from the operations before!" << endl;
    cout << "\033[0;31mWelcome, please choose an operation:" << endl
    << "\033[0;37m1) Single vector module and atan calculation. (Each module and atan will be stored)" << endl
   << "2) Calculate tetha Angle between vector/s. (TOTAL Tetha will be stored, calculated with previous atan)" << endl
   << "3) Vector product (calculated with previous modules and tetha)" << endl
   << "4) Scalar product (same as vector product for data)" << endl
   << "5) Free memory, delete all stored values" << endl
   << "6) Exit." << endl;
        
}


void input::menu_init() {
        graphics_selection::interface();
        cin >> choice;
}


void  graphics_pow_sqr::Xaxis() {
        cout <<"TO SUBTRACT VECTORS INSERT A NEGATIVE VALUE" << endl;
        cout << "X axis, vector A" << endl;
        cout << "Inser the number for A vector" << endl;
}

void graphics_pow_sqr::Yaxis() {
     cout << "Y Axis vector B" << endl;
     cout << "Inser the number for B vector" << endl;
}

void graphics_pow_sqr::pow_apply() {
    cout << "Applying power of 2 from theorem..." << endl;
}

void graphics_angle::initmessage() {
    cout << "Calculating atan from vector/s coordinates" << endl;
}