#include "Vector_operations.hh"
using namespace std;

void modulefunc::module_calc() 
{
    for (size_t i = 0; i < XYvett.size()-1; i+=2) 
    { 
        modules.push_back(sqrt((XYvett[i] * XYvett[i]) + (XYvett[i+1] * XYvett[i+1])));
    }
} 


/*###############################
Vector atan section
  ###############################
we calculate the atan of requested vectors.
the atan is calculated on the initial vector coordinates. 
 Y coordinate[i+1] / X coordinate[i] in vectors. Then we skip to the 
 next 2 coordinates.
 */

void angle::atan_calculation(modulefunc modul) 
{    
    for (size_t i = 0; i < modul.XYvett.size()-1; i+=2) 
    {
        atanvett.push_back(atan(modul.XYvett[i+1] / modul.XYvett[i])); 
    }    
    for (size_t i = 0; i < atanvett.size(); ++i)
    {
         cout << "Atan of Vector " << i+1 << " " << atanvett[i] << endl;
    }
      
}       

/*we store the tetha result Obtained with all the vectors. it will be ONE tetha angle covering
all the vectors putted. We also change the value order if it's lower, to not get a negative value. */

void angle::tetha_angle() 
{ 
    for (size_t i = 0; i < atanvett.size()-1; i+=2) 
    {
        if (atanvett[i] < atanvett[i+1]) 
        {
            tetha = atanvett[i+1] - atanvett[i];
        } else 
        {
            tetha = atanvett[i] - atanvett[i+1];
        } 
    }
    cout << "Angle between first and last vector: " << tetha << endl;
}

/*###############################
Vector product section
  ###############################
  Calculating SIN, COS, vectorial product and vectorial scalar product.
*/


void vett_product::muliply_modules(modulefunc modul) 
{
    for (size_t i = 0; i < modul.modules.size()-1; i+=2) 
    {
        product_store = (modul.modules[i] * modul.modules[i+1]);                      
    }
    cout << "Product of modules: " << product_store << endl;
}  
                
void vett_product::cos_of_angle(angle ang) 
{
    cosangle =  cos(ang.tetha);
    cout << "COS angle: " << cosangle << endl;
}   


void vett_product::sin_of_angle(angle ang) 
{
    sinangle =  sin(ang.tetha);
    cout << "SIN Angle: " << sinangle << endl;
}   


void vett_product::vectorial_product() 
{
    vector_product = product_store * cosangle;
    cout << "Vectorial product of vectors: " << vector_product << endl;
}

void vett_product::vectorial_scalar() 
{
    scalar_product = product_store * sinangle;
    cout << "Scalar product of vectors: " << scalar_product << endl;
}
