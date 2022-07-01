#ifndef CC700F3D_29AA_4481_9E74_C86C07AC08B6
#define CC700F3D_29AA_4481_9E74_C86C07AC08B6
#include "Vector_operations.hh"

class Windows
{
public:
    void vector_operations_window(bool *error, bool *reset_vector, bool *show_results, vector_operations *operation);
    void show_error_box();
    void show_results_box(vector_operations *operation);
    void clear_vector(vector_operations *operation);
};

#endif /* CC700F3D_29AA_4481_9E74_C86C07AC08B6 */
