#include <libs.h>

void switcher::switchfunc() {

        switch (input::choice) {
        case 1:
            single_module::singlevettinput();
            single_module::singlevettpower();
            single_module::module_and_atan_single_vett();
            input::choice = 0;
            break;
        case 2:
                angle::tetha_angle();
                input::choice = 0;
                break;
        
        case 3:
                vett_product::muliply_modules();
                vett_product::cos_of_angle();
                vett_product::vectorial_product();
                input::choice = 0;
                break;
        case 4:
                vett_product::muliply_modules();
                vett_product::sin_of_angle();
                vett_product::vectorial_scalar();
                input::choice = 0;
                break;
        case 5:
                memory::dump();
                input::choice = 0;
                break;
        default:
            break;
        }
}