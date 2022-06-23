#ifndef E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E
#define E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E
#include <iostream>
#include <math.h>
#include <vector>

class modulefunc {
        
    public:
             std::vector<double_t> XYvett;
             std::vector<double_t> module_store;
             double_t XYcoord;
             bool operation = false;
             
             bool coordinates_input();
             void module_calc();
};

class angle : public modulefunc { 
        
    public:
              double_t tetha;
              double_t product_store;
              std::vector<double_t> atanvett;
              void atan_calculation();
              void tetha_angle();
              void muliply_modules();
};

class vett_product : public angle {
    private:
             double_t vector_product;
             double_t scalar_product;
    public:
                 double_t sinangle;
                 double_t cosangle;
                
             void cos_of_angle();
             void vectorial_product();
             void vectorial_scalar();
             void sin_of_angle();
};
#endif /* E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E */
