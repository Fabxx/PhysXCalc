//Library to calculate tetha angle between two vectors.
#include <libs.h>
    
    doubval angle::tetha = 0;
    vett angle::atanvett1;
    vett angle::atanvett2;

/*we calculate the atan of requested vectors where calculated the modules.
if we calculated the modules of 2 vectors, we'll calculate 2 atans.
The first module is stored in the i position, the second module is stored in the
i+1 position.
the atan is calculated on the initial vector coordinates. 
 Y coordinate / X coordinate in vectors.*/
void angle::atan_components() {
    
    for (size_t i = 0; i < single_module::request; i++) {
        atanvett1.push_back(atan(single_module::Y[i] / single_module::X[i]));
        for (size_t j = i-1; j < i; j++){
            atanvett2.push_back(atan(single_module::Y[j] / single_module::X[j]));
        }   
    }      
}       

/*we get all the atans for N vectors to calculate the total
angle between ALL the vectors, then we store the tetha result
Obtained with all the vectors. it will be ONE tetha angle covering
all the vectors putted. */
void angle::tetha_angle() { 
        //change the order to not get negative value. 
           for (size_t i = 0; i < single_module::request; i++) {
               for (size_t j = i-1; j < i; j++) {
                   if (atanvett1[i] < atanvett2[j]) {
                         tetha = atanvett2[j] - atanvett1[i];
                   } else {
                         tetha = atanvett1[i] - atanvett2[j]; 
                        } 
                    }
                }
        
        cout << "Angle between the vectors: " << tetha << endl;
}
             
