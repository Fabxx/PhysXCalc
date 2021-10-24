#include <libs.h>
    
    doubval angle::ax;
    doubval angle::ay;
    doubval angle::atanval;
    doubval angle::results;
    doubval angle::atanstore;
    vett angle::atanvett;

void angle::atan_components() {

    graphics_angle::initmessage();

    for (size_t i = 0; i < 2; i++){
       cout << "Insert the two coordinates for the " << i+1 << " vector components"  << endl;
        
        cin >> ax;
        cin >> ay;
        atanval = ay / ax;
        atanstore = atan(atanval);
        atanvett.push_back(atanstore);

        cout << "Angle of " << i+1 << " Vector: " << atanvett[i] << endl;

    }
        cout << "Tetha angle:" << endl;
        for (size_t i = 0; i < 1; i++) {
           results = atanvett[i] - atanvett[i+1];
        }

        cout << " " << results << endl;
        system("pause");     
}