#include <libs.h>

vett modulefunc::modules;
vett modulefunc::XYvett;
double_t modulefunc::XYcoord;
bool modulefunc::operation;

void modulefunc::coordinates_input() {
    operation = false;
    cout << "Insert Vector coordinates, each 2 coordinates are a single vector" << endl
         << "Insert 1 to exit" << endl
         << "Note: at least 4 coordinates must be inserted to proceed in the tetha calculation" << endl 
         <<  "for more information see the comments in the Vector_module.cpp file." << endl;
    
    /*size+1 so 0 < 1 is true and we start the input.
    in this case we have to tell him when we want to stop
    if we choose to exit and there are at least even numbers of coords
    or there are no coords at all we return to menu.
    This protection avoids segmentation fault by aborting next calculations.*/
    
    for (size_t i = 0; i < XYvett.size()+1; i++){    
            cin >> XYcoord;
            /*Size must be even and at least 4 to represent 2 vectors or else
            we can't calculate the tetha angle if we obtain only one atan with one vector.
            At least two atans must be there to calculate the tetha.*/
            if ((XYcoord == 1 && XYvett.size()%2 == 0) && (XYvett.size() == 4)) {
                i = XYvett.size();
            
            } else if ((XYcoord == 1 && XYvett.size()%2!= 0)) {

                cout << "At least even numbers of coordinates must be inserted." << endl;
                operation = true;

             } else {
                XYvett.push_back(XYcoord);   
        }    
    }   
}


//calculating module for each vector.
//checking if the vector is not empty, doing it here to avoid conflict with first IF, since 0 is even.
void modulefunc::module_calc() {

    if (XYvett.size() == 0) {
            cout << "No coordinates were found." << endl;
                operation = true;
        } else {
             for (size_t i = 0; i < XYvett.size()-1; i+=2) { 
            modules.push_back(sqrt((XYvett[i] * XYvett[i]) + (XYvett[i+1] * XYvett[i+1])));
        }
    } 
}   



void modulefunc::module_output() {

for (size_t i = 0; i < modules.size(); i++){
    cout << "Module of " << i+1 << " vector";
        cout << " " << modules[i] << endl;
    }      
} 

