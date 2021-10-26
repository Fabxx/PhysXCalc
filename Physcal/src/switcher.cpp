#include <libs.h>

void switcher::switchfunc() {

        switch (input::choice) {
        case 1:
                single_module::singlevettinput();
                single_module::singlevettpower();
                single_module::module_and_atan_single_vett();
                angle::atan_components();
                angle::tetha_angle();
                vett_product::muliply_modules();
                vett_product::cos_of_angle();
                vett_product::sin_of_angle();
                vett_product::vectorial_product();
                vett_product::vectorial_scalar();
                input::choice = 0;
            break;
        case 2:
                printval::vector_values();
                input::choice = 0;
                break;
        case 3:
                memory::dump();
                input::choice = 0;
                break;
        default:
            break;
        }
}