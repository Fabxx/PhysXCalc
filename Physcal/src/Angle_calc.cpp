//Library to calculate tetha angle between two vectors.

#include <libs.h>
    
    doubval angle::ax = 0;
    doubval angle::ay = 0;
    doubval angle::results = 0;
    vett angle::atanvett;

void angle::atan_components() {

    graphics_angle::initmessage();

    for (size_t i = 0; i < 2; i++){
       cout << "Insert the two coordinates for the " << i+1 << " vector components"  << endl;
        cin >> ax;
        cin >> ay;
        atanvett.push_back(atan(ay / ax));

        cout << "Angle of " << i+1 << " Vector: " << atanvett[i] << endl;

    }
        cout << "Tetha angle:" << endl;
        for (size_t i = 0; i < 1; i++) {
           results = atanvett[i] - atanvett[i+1];
        }

        cout << " " << results << endl;
        system("pause");     
}