/*This functions acquires the results stored in the vectors of the previous functions
//It obtains the modules calculated from operation Single Vector
//Then it obtains the angle calculated from Angle calculation between two vectors.
Ths is useful to not repeat*/

#include <libs.h>

doubval vett_product::product_store;
doubval vett_product::vector_product;
doubval vett_product::cosangle;
doubval vett_product::sinangle;
doubval vett_product::scalar_product;

void vett_product::muliply_modules() {

            for (size_t i = 0; i < single_module::request; i++) {
                for (size_t j = i-1; j < i; j++){
                product_store = (single_module::modules1[i] * single_module::modules2[j]);                      
                }     
        }
                 cout << "Product of modules: " << product_store << endl;
}   //multiplying all the module of vectors.
                
void vett_product::cos_of_angle() {
            cosangle =  cos(angle::tetha);
            cout << "COS angle" << cosangle << endl;;
        }   //calculating the sin of tetha angle obtained from all the vectors.


void vett_product::sin_of_angle() {
            sinangle =  sin(angle::tetha);
            cout << "SIN Angle " << sinangle << endl;
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



