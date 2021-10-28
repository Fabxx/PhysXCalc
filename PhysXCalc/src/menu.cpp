//Display messages.

#include <libs.h>

int16_t input::choice;

void graphics_selection::interface() {
    
  cout << "\033[0;37mWelcome, please choose an operation:" << endl
   << "\033[0;31mNOTE: each time you end an operation, memory of vectors is automatically cleared." << endl
   << "\033[0;37m1) VECTORS: Module, atan, sin, cos, vector product, scalar vector." << endl
   << "\033[0;37m2) Exit" << endl;
        
}

void input::menu_init() {
        graphics_selection::interface();
        cin >> choice;
}

