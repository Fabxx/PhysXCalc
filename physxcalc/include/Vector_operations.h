#ifndef E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E
#define E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E
#include <iostream>
using namespace std;
#include <math.h>
#include <vector>

class modulefunc {
        
    public:
            static vector<double_t> XYvett;
            static vector<double_t> modules;
            static double_t XYcoord;
            static bool operation;
            static void coordinates_input();
            static void module_calc();
            static void module_output();

};

class vett_product {
    private:
            static double_t vector_product;
            static double_t scalar_product;
    public:
                static double_t product_store;
                static double_t sinangle;
                static double_t cosangle;
                

            static void muliply_modules();
            static void cos_of_angle();
            static void vectorial_product();
            static void vectorial_scalar();
            static void sin_of_angle();
};

class angle { 
        
    public:
             static double_t tetha;
             static vector<double_t> atanvett;
             static void atan_calculation();
             static void tetha_angle();

};





#endif /* E9AEFDD1_00F8_4C11_84C5_C1D6EB27AC5E */
