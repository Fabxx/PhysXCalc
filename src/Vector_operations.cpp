#include "Vector_operations.hh"

void modulefunc::module_calc() 
{
    for (size_t i = 0; i < XYvett.size()-1; i+=2) 
    { 
        module_store.push_back(sqrt((XYvett[i] * XYvett[i]) + (XYvett[i+1] * XYvett[i+1])));
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

void angle::atan_calculation() 
{    
    for (size_t i = 0; i < XYvett.size()-1; i+=2) 
    {
        atanvett.push_back(atan(XYvett[i+1] / XYvett[i])); 
    }    
    for (size_t i = 0; i < atanvett.size(); ++i)
    {
         std::cout << "Atan of Vector " << i+1 << " " << atanvett[i] << std::endl;
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
    std::cout << "Angle between first and last vector: " << tetha << std::endl;
}

/*###############################
Vector product section
  ###############################
  Calculating SIN, COS, vectorial product and vectorial scalar product.
*/

void angle::muliply_modules() 
{
    for (size_t i = 0; i < module_store.size()-1; i+=2) 
    {
        product_store = (module_store[i] * module_store[i+1]);                      
    }
    std::cout << "Product of modules: " << product_store << std::endl;
}  
                
void vett_product::cos_of_angle() 
{
    cosangle =  cos(tetha);
    std::cout << "COS angle: " << cosangle << std::endl;
}   

void vett_product::sin_of_angle() 
{
    sinangle =  sin(tetha);
    std::cout << "SIN Angle: " << sinangle << std::endl;
}   

void vett_product::vectorial_product() 
{
    vector_product = product_store * cosangle;
    std::cout << "Vectorial product of vectors: " << vector_product << std::endl;
}

void vett_product::vectorial_scalar() 
{
    scalar_product = product_store * sinangle;
    std::cout << "Scalar product of vectors: " << scalar_product << std::endl;
}
