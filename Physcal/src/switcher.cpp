#include <libs.h>

void switcher::switchfunc() {

        switch (input::choice) {
        case 1:
            power_sqr_root::powerenum1();
			power_sqr_root::powerenum2();
			power_sqr_root::square();
            input::choice = 0;
            break;
        case 2:
                angle::atan_components();
                input::choice = 0;
                break;

        default:
            break;
        }
}