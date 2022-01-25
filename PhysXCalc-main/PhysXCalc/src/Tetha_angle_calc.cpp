#include <stdlibs.h>
#include <Tetha_angle_calc.h>
#include <Vector_module.h>
double_t angle::tetha = 0;
angle::vett angle::atanvett;  //recalling vett type since it's stored in class, linked with the vector itself

/*we calculate the atan of requested vectors.
if we calculated the modules of 2 vectors, we'll calculate 2 atans.
The first module is stored in the i position, the second module is stored in the
i+1 position.
the atan is calculated on the initial vector coordinates. 
 Y coordinate[i+1] / X coordinate[i] in vectors.*/
void angle::atan_components() {
    
    for (size_t i = 0; i < modulefunc::XYvett.size()-1; i+=2) {
        atanvett.push_back(atan(modulefunc::XYvett[i+1] / modulefunc::XYvett[i])); 
    }    
    for (size_t i = 0; i < atanvett.size(); i++){
         cout << "Atan of Vector " << i+1 << " " << atanvett[i] << endl;
    }
      
}       

/*we get all the atans for N vectors to calculate the total
angle between ALL the vectors, then we store the tetha result
Obtained with all the vectors. it will be ONE tetha angle covering
all the vectors putted. */

void angle::tetha_angle() { 
    
            //change the order to not get negative value. 
           for (size_t i = 0; i < atanvett.size()-1; i+=2) {
                   if (atanvett[i] < atanvett[i+1]) {
                         tetha = atanvett[i+1] - atanvett[i];
                   } else {
                         tetha = atanvett[i] - atanvett[i+1];
                        } 
                }
                cout << "Angle between first and last vector: " << tetha << endl;
}
       

             
