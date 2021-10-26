//Library to calculate tetha angle between two vectors.
#include <libs.h>
    
    doubval angle::tetha = 0;
    vett angle::atanvett;
    int angle::atanindex;

/*we calculate the atan of requested vectors where calculated the modules.
if we calculated the modules of 2 vectors, we'll calculate 2 atans.
the atan is calculated on the initial vector coordinates. 
 Y coordinate / X coordinate in vectors.*/
void angle::atan_components() {
    
    for (atanindex; atanindex < single_module::request; atanindex++) {
        atanvett.push_back(atan(single_module::Y[atanindex] / single_module::X[atanindex]));
    }
        
}       

/*we get all the atans for N vectors to calculate the total
angle between ALL the vectors, then we store the tetha result
Obtained with all the vectors. it will be ONE tetha angle covering
all the vectors putted. */
void angle::tetha_angle() {
      
           for (size_t i = 0; i < single_module::request; i++) {
               //change the order to not get negative value. 
            if (atanvett[i] < atanvett[i+1]) {
                tetha = atanvett[i+1] - atanvett[i];
            } else {
                tetha = atanvett[i] - atanvett[i+1];
              
            } 
        }
        
        cout << "Angle between the vectors: " << tetha << endl;
}
             
