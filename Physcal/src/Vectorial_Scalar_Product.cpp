//This functions acquires the results stored in the vectors of the previous functions
//It obtains the modules calculated from operation Single Vector
//Then it obtains the angle calculated from Angle calculation between two vectors.
//Ths is useful to not repeat

#include <libs.h>

doubval vett_product::product_store;
doubval vett_product::vector_product;
doubval vett_product::cosangle;
doubval vett_product::sinangle;
doubval vett_product::scalar_product;

void vett_product::muliply_modules() {

            cout << "Multiplying modules stored with previous operation..." << endl;
            for (size_t i = 0; i < single_module::countermodule; i++) {
                product_store = single_module::moduleout[i] * single_module::moduleout[i+1];
            }   //multiplying all the module of vectors.
}


void vett_product::cos_of_angle() {

        cout << "Calculating cos of previous angle found..." << endl;
        for (size_t i = 0; i < single_module::countermodule; i++){
            cosangle =  cos(angle::tetha);
        }   //calculating the sin of tetha angle obtained from all the vectors.
}

void vett_product::sin_of_angle() {
         cout << "Calculating sin of previous angle found..." << endl;
        for (size_t i = 0; i < single_module::countermodule; i++){
            sinangle =  sin(angle::tetha);
        }   //calculating the cos of tetha angle obtained from all the vectors.
}

void vett_product::vectorial_product() {

        vector_product = product_store * cosangle;
        cout << "Vectorial product of A x B: " << vector_product << endl;
        system("pause");
}

void vett_product::vectorial_scalar() {
        scalar_product = product_store * sinangle;
        cout << "Scalar product of A x B: " << scalar_product << endl;
        system("pause");

}



