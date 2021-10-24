#include <libs.h>

doubval power_sqr_root::pow1 = 0;
doubval power_sqr_root::pow2 = 0;
doubval power_sqr_root::sqrresult = 0;

void power_sqr_root::powerenum1() {
            doubval x, y = 2;
            graphics_pow_sqr::Xaxis();
            cin >> x;
           graphics_pow_sqr::pow_apply();
            pow1 = pow(x, y);
}


void power_sqr_root::powerenum2() {
             doubval z, k = 2;
                graphics_pow_sqr::Yaxis();
                 cin >> z;
                graphics_pow_sqr::pow_apply();
                 pow2 = pow(z, k);
}


void power_sqr_root::square() {

            sqrresult = sqrt(pow1 + pow2);
                 cout << "Vector Module: " << sqrresult << endl;
                 system("pause");
}
