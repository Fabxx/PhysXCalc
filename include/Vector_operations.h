#ifndef E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E
#define E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E
#include <iostream>
using namespace std;
#include <math.h>
#include <vector>

class modulefunc {
        
    public:
             vector<double_t> XYvett;
             vector<double_t> modules;
             double_t XYcoord;
             bool operation;
             void coordinates_input();
             void module_calc();
             void module_output();

};

class vett_product {
    private:
             double_t vector_product;
             double_t scalar_product;
    public:
                 double_t product_store;
                 double_t sinangle;
                 double_t cosangle;
                

             void muliply_modules();
             void cos_of_angle();
             void vectorial_product();
             void vectorial_scalar();
             void sin_of_angle();
};

class angle { 
        
    public:
              double_t tetha;
              vector<double_t> atanvett;
              void atan_calculation();
              void tetha_angle();
};





#endif /* E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E */
