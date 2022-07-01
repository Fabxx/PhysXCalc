#include "Vector_operations.hh"

void vector_operations::module_calc() 
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

void vector_operations::atan_calculation() 
{    
    for (size_t i = 0; i < XYvett.size()-1; i+=2) 
    {
        atanvett.push_back(atan(XYvett[i+1] / XYvett[i])); 
    }    
}       

/*we store the tetha result Obtained with all the vectors. it will be ONE tetha angle covering
all the vectors putted. We also change the value order if it's lower, to not get a negative value. */

double_t vector_operations::tetha_angle() 
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
    return tetha;
}

/*###############################
Vector product section
  ###############################
  Calculating SIN, COS, vectorial product and vectorial scalar product.
*/

double_t vector_operations::muliply_modules() 
{
    for (size_t i = 0; i < module_store.size()-1; i+=2) 
    {
        product_store = (module_store[i] * module_store[i+1]);                      
    }
    
    return product_store;
}  
                
double_t vector_operations::cos_of_angle() 
{
    cosangle =  cos(tetha);
    return cosangle;
}   

double_t vector_operations::sin_of_angle() 
{
    sinangle =  sin(tetha);
    return sinangle;
}   

double_t vector_operations::vectorial_product() 
{
    vector_product_out = product_store * cosangle;
    return vector_product_out;
}

double_t vector_operations::scalar_product() 
{
    scalar_product_out = product_store * sinangle;
    return scalar_product_out;
}
