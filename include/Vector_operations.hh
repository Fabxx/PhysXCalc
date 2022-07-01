#ifndef E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E
#define E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E
#include <iostream>
#include <math.h>
#include <vector>

class vector_operations {
        
    public:
             std::vector<double_t> XYvett;
             std::vector<double_t> module_store;
             std::vector<double_t> atanvett;
             double_t tetha;
             double_t product_store;
             double_t vector_product_out;
             double_t scalar_product_out;
             double_t sinangle;
             double_t cosangle;
             double_t XYcoord;

             
            bool coordinates_input();
            void module_calc();
            void atan_calculation();
            double_t tetha_angle();
            double_t muliply_modules();
            double_t cos_of_angle();
            double_t vectorial_product();
            double_t scalar_product();
            double_t sin_of_angle();
};        
#endif /* E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E */
