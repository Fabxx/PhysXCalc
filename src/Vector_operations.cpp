#include "Vector_operations.h"
using namespace std;

/*###############################
Vector module section
  ###############################
size+1 so 0 < 1 is true and we start the input.
in this case we have to tell him when we want to stop
if we choose to exit and there are at least even numbers of coords >= 4
we can proceed. In all other cases, if it's empty or odd we return to menu.
This protection avoids segmentation fault by aborting next calculations,
we can't calculate the tetha angle if we obtain only one atan with one vector.
At least two atans must be there to calculate the tetha.
*/

void modulefunc::coordinates_input(graphics graph) {

    graph.input_menu();
    
    for (size_t i = 0; i < XYvett.size()+1; i++){    
            cin >> XYcoord;
            if ((XYcoord == 1 && XYvett.size()%2 == 0) && (XYvett.size() >= 4)) {
                i = XYvett.size();
            } else if ((XYcoord == 1 && XYvett.size()%2!= 0)) {
                cout << "\033[0;31mAt least even numbers of coordinates must be inserted." << endl;
                operation = true;
             } else {
                XYvett.push_back(XYcoord);   
        }    
    }   
}

void modulefunc::module_calc() {
             for (size_t i = 0; i < XYvett.size()-1; i+=2) { 
            modules.push_back(sqrt((XYvett[i] * XYvett[i]) + (XYvett[i+1] * XYvett[i+1])));
        }
    } 


void modulefunc::module_output() {

for (size_t i = 0; i < modules.size(); i++){
    cout << "Module of " << i+1 << " vector";
        cout << " " << modules[i] << endl;
    }      
} 

/*###############################
Vector atan section
  ###############################
we calculate the atan of requested vectors.
the atan is calculated on the initial vector coordinates. 
 Y coordinate[i+1] / X coordinate[i] in vectors. Then we skip to the 
 next 2 coordinates.
 */

void angle::atan_calculation(modulefunc modul) {
    
    for (size_t i = 0; i < modul.XYvett.size()-1; i+=2) {
        atanvett.push_back(atan(modul.XYvett[i+1] / modul.XYvett[i])); 
    }    
    for (size_t i = 0; i < atanvett.size(); i++){
         cout << "Atan of Vector " << i+1 << " " << atanvett[i] << endl;
    }
      
}       

/*we store the tetha result Obtained with all the vectors. it will be ONE tetha angle covering
all the vectors putted. We also change the value order if it's lower, to not get a negative value. */

void angle::tetha_angle() { 
  
           for (size_t i = 0; i < atanvett.size()-1; i+=2) {
                   if (atanvett[i] < atanvett[i+1]) {
                         tetha = atanvett[i+1] - atanvett[i];
                   } else {
                         tetha = atanvett[i] - atanvett[i+1];
                        } 
                }
                cout << "Angle between first and last vector: " << tetha << endl;
}

/*###############################
Vector product section
  ###############################
  Calculating SIN, COS, vectorial product and vectorial scalar product.
*/


void vett_product::muliply_modules(modulefunc modul) {

            for (size_t i = 0; i < modul.modules.size()-1; i+=2) {
                product_store = (modul.modules[i] * modul.modules[i+1]);                      
        }
                 cout << "Product of modules: " << product_store << endl;
}  
                
void vett_product::cos_of_angle(angle ang) {
            cosangle =  cos(ang.tetha);
            cout << "COS angle: " << cosangle << endl;;
        }   


void vett_product::sin_of_angle(angle ang) {
            sinangle =  sin(ang.tetha);
            cout << "SIN Angle: " << sinangle << endl;
        }   


void vett_product::vectorial_product() {

        vector_product = product_store * cosangle;
        cout << "Vectorial product of vectors: " << vector_product << endl;
}

void vett_product::vectorial_scalar() {
        scalar_product = product_store * sinangle;
        cout << "Scalar product of vectors: " << scalar_product << endl;

}
