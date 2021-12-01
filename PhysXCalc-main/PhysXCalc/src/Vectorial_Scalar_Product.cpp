/*This functions acquires the results stored in the vectors of the previous functions
        It obtains the modules calculated from operation Single Vector
        Then it obtains the angle calculated from Angle calculation between two vectors.
        This is useful to not repeat the input every single time.*/

#include <libs.h>

double_t vett_product::product_store;
double_t vett_product::vector_product;
double_t vett_product::cosangle;
double_t vett_product::sinangle;
double_t vett_product::scalar_product;

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
        system("pause");

}



