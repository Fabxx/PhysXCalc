#include "Vector_operations.h"
using namespace std;


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

void memory::dump(angle ang, modulefunc modul) {

        cout << "Dumping memory of vectors for new values" << endl;
        ang.atanvett.clear();
        modul.modules.clear();
        modul.XYvett.clear();
        
}

void switcher::switchfunc(graphics graph, modulefunc modul, memory mem, angle ang, vett_product vett) {


        switch (graph.choice) {
        case 1:
                modul.coordinates_input(graph);
                modul.module_calc();
                if (modul.operation == true){
                    mem.dump(ang, modul);
                    graph.choice = 0;
                    break;
                }else{
                modul.module_output();
                ang.atan_calculation(modul);
                ang.tetha_angle();
                vett.muliply_modules(modul);
                vett.cos_of_angle(ang);
                vett.sin_of_angle(ang);
                vett.vectorial_product();
                vett.vectorial_scalar();
                mem.dump(ang, modul);
                graph.choice = 0;
            }
            break;
         case 2:
                 
        default:
            break;
        }
}