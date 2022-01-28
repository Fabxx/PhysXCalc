//Display messages.

#include "stdlibs.h"
#include "menu.h"

int16_t graphics::choice; 

void graphics::interface() {
    
  cout << "\033[0;37mWelcome, please choose an operation:" << endl
   << "\033[0;31mNOTE: each time you end an operation, memory of vectors is automatically cleared." << endl
   << "\033[0;37m1) VECTORS: Module, atan, sin, cos, vector product, scalar vector." << endl
   << "2) CINEMATIC: horizontal rectilinear motion, Fall serious, Projectile motion" << endl
   << "\033[0;37m3) Exit" << endl;
        
}

void graphics::menu_init() {
        graphics::interface();
        cin >> choice;
}

