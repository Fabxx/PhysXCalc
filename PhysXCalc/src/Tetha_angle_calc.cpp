//Library to calculate tetha angle between two vectors.
#include <libs.h>
    
    double_t angle::tetha = 0;
    vett angle::atanvett;

/*we calculate the atan of requested vectors where calculated the modules.
if we calculated the modules of 2 vectors, we'll calculate 2 atans.
The first module is stored in the i position, the second module is stored in the
i+1 position.
the atan is calculated on the initial vector coordinates. 
 Y coordinate / X coordinate in vectors.*/
void angle::atan_components() {
    
    for (size_t i = 0; i < single_module::XYvett.size()-1; i+=2) {
        atanvett.push_back(atan(single_module::XYvett[i] / single_module::XYvett[i+1])); 
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
        
        cout << "Angle between the vectors: " << tetha << endl;
}
             
