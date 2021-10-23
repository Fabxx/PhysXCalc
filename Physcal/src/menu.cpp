#include <libs.h>

void graphics_selection::interface() {
    cout << "Welcome, please choose an operation:" << endl
    << "1)Pytagorean theorem" << endl
   << "2)Exit, more coming soon" << endl;
        
}


int input::menu_init() {
        int choice = 0;
        graphics_selection::interface();
        cin >> choice;
           return choice;
}


void graphics_pow_sqr::Xaxis() {
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