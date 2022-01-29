#include "Vector_operations.h"
using namespace std;

vector<double_t> modulefunc::modules, modulefunc::XYvett, angle::atanvett; 
bool modulefunc::operation; 
double_t angle::tetha = 0, modulefunc::XYcoord, vett_product::cosangle, vett_product::sinangle, vett_product::scalar_product, vett_product::product_store, 
vett_product::vector_product;

/*###############################
Vector module section
  ###############################
*/

void modulefunc::coordinates_input() {
    operation = false;
    cout << "Insert Vector coordinates, each 2 coordinates are a single vector" << endl
         << "Insert 1 to exit" << endl
         << "\033[0;31mNote: at least 4 coordinates must be inserted to proceed in the tetha calculation" << endl 
         <<  "\033[0;37mfor more information see the comments in the Vector_module.cpp file." << endl;
    
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


//calculating module for each vector.
//checking if the vector is not empty, doing it here to avoid conflict with first IF, since 0 is even.
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
*/

/*we calculate the atan of requested vectors.
if we calculated the modules of 2 vectors, we'll calculate 2 atans.
The first module is stored in the i position, the second module is stored in the
i+1 position.
the atan is calculated on the initial vector coordinates. 
 Y coordinate[i+1] / X coordinate[i] in vectors.*/
void angle::atan_calculation() {
    
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

/*###############################
Vector product section
  ###############################
*/


void vett_product::muliply_modules() {

            for (size_t i = 0; i < modulefunc::modules.size()-1; i+=2) {
                product_store = (modulefunc::modules[i] * modulefunc::modules[i+1]);                      
        }
                 cout << "Product of modules: " << product_store << endl;
}   //multiplying all the module of vectors, printing out the total module.
                
void vett_product::cos_of_angle() {
            cosangle =  cos(angle::tetha);
            cout << "COS angle: " << cosangle << endl;;
        }   //calculating the sin of tetha angle obtained from all the vectors.


void vett_product::sin_of_angle() {
            sinangle =  sin(angle::tetha);
            cout << "SIN Angle: " << sinangle << endl;
        }   //calculating the cos of tetha angle obtained from all the vectors.


void vett_product::vectorial_product() {

        vector_product = product_store * cosangle;
        cout << "Vectorial product of vectors: " << vector_product << endl;
}

void vett_product::vectorial_scalar() {
        scalar_product = product_store * sinangle;
        cout << "Scalar product of vectors: " << scalar_product << endl;

}
