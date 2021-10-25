//Library to calculate tetha angle between two vectors.

#include <libs.h>
    
    doubval angle::tetha = 0;
    vett angle::atanvett;
    doubval angle::atancounter = 0;

void angle::atan_components() {

    graphics_angle::atanmessage();
    //we calculate the atan of N vectors we calculated the modules
    //if we calculated the modules of 2 vectors, we'll calculate 2 atans.
        atancounter++;
        atanvett.push_back(atan(single_module::vettA_y / single_module::vettA_x));
                //the atan is calculated on the initial vector coordinates.
}

void angle::tetha_angle() {

        graphics_angle::tethamessage();
        //we get all the atans for N vectors to calculate the total
        //angle between ALL the vectors, then we stoe the tetha result.
        //Obtained with all the vectors. it will be ONE tetha angle covering
        //all the vectors putted.
        for (size_t i = 0; i < 1; i++) {
            if (atanvett[i] < atanvett[i+1]) {
                tetha = atanvett[i+1] - atanvett[i];
            } else {
                tetha = atanvett[i] - atanvett[i+1];
            } //cahnge the order to not get negative value. 
        }
        cout << "Angle between the vectors: " << tetha << endl;
        system("pause");
}
             
