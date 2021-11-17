#include <libs.h>

void switcher::switchfunc() {

        switch (input::choice) {
        case 1:
                modulefunc::coordinates_input();
                modulefunc::module_calc();
                if (modulefunc::operation == true){
                    memory::dump();
                    input::choice = 0;
                    break;
                }else{
                modulefunc::module_output();
                angle::atan_components();
                angle::tetha_angle();
                vett_product::muliply_modules();
                vett_product::cos_of_angle();
                vett_product::sin_of_angle();
                vett_product::vectorial_product();
                vett_product::vectorial_scalar();
                memory::dump();
                input::choice = 0;
            }
            break;
        default:
            break;
        }
}