#include <stdlibs.h>
#include <menu.h>
#include <switcher.h>
#include <Vector_module.h>
#include <Tetha_angle_calc.h>
#include <dump_memory.h>
#include <Vectorial_Scalar_Product.h>

void switcher::switchfunc() {

        switch (graphics::choice) {
        case 1:
                modulefunc::coordinates_input();
                modulefunc::module_calc();
                if (modulefunc::operation == true){
                    memory::dump();
                    graphics::choice = 0;
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
                graphics::choice = 0;
            }
            break;
         case 2:
                 
        default:
            break;
        }
}