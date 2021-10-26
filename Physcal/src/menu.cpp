//Display messages.

#include <libs.h>

int input::choice;

void graphics_selection::interface() {
    
  cout << "\033[0;37mWelcome, please choose an operation:" << endl
   << "NOTE: each time you end an operation, you must clear the memory!." << endl
   << "1) VECTORS: Module, atan, sin, cos, vector product, scalar vector." << endl
   << "\033[0;31m2) Free memory, delete all stored values" << endl
   << "\033[0;37m4) Exit" << endl;
        
}

void input::menu_init() {
        graphics_selection::interface();
        cin >> choice;
}

void abortop::abortmessage() {
    cout << "Aborting further operations. at least "
         << "Two vectors are required." << endl;
         system("pause");
}