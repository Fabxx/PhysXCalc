#include "physxmenu.h"
#include "Vector_operations.h"
using namespace std;

int16_t graphics::choice; 

void graphics::interface() {
    
  cout << "\033[0;37mWelcome, please choose an operation:" << endl
   << "\033[0;31mNOTE: each time you end an operation, memory of vectors is automatically cleared." << endl
   << "\033[0;37m1) VECTORS: Module, atan, sin, cos, vector product, scalar vector." << endl
   << "2) CINEMATIC: horizontal rectilinear motion, Fall serious, Projectile motion" << endl
   << "\033[0;37m3) Exit" << endl;

   cin >> choice;
        
}

void graphics::input_menu() {
         
         cout << "Insert Vector coordinates, each 2 coordinates are a single vector" << endl
         << "Insert 1 to exit" << endl
         << "\033[0;31mNote: at least 4 coordinates must be inserted to proceed in the tetha calculation" << endl 
         <<  "\033[0;37mfor more information see the comments in the Vector_module.cpp file." << endl;
}

void memory::dump() {

        cout << "Dumping memory of vectors for new values" << endl;
        angle::atanvett.clear();
        modulefunc::modules.clear();
        modulefunc::XYvett.clear();
        
}

void switcher::switchfunc() {

        switch (graphics::choice) {
        case 1:
                modulefunc::coordinates_input();
                modulefunc::module_calc();
                if (modulefunc::operation == true){
                    memory::dump();
                    graphics::choice = 0;
                    break;
                }else{
                modulefunc::module_output();
                angle::atan_calculation();
                angle::tetha_angle();
                vett_product::muliply_modules();
                vett_product::cos_of_angle();
                vett_product::sin_of_angle();
                vett_product::vectorial_product();
                vett_product::vectorial_scalar();
                memory::dump();
                graphics::choice = 0;
            }
            break;
         case 2:
                 
        default:
            break;
        }
}