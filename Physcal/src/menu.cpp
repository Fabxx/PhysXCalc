#include <libs.h>

int input::choice;

void graphics_selection::interface() {
    cout << "Welcome, please choose an operation:" << endl
    << "1)Pytagorean theorem" << endl
   << "2) Calculate Angle between two vectors." << endl
   << "3) Exit program..." << endl;
        
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
    cout << "Calculating angle between two vectors" << endl;
}