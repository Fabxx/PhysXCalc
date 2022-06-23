#ifndef CC700F3D_29AA_4481_9E74_C86C07AC08B6
#define CC700F3D_29AA_4481_9E74_C86C07AC08B6
#include "Vector_operations.hh"
#include "Buttons.hh"

class Windows : public modulefunc
{
public:
    void vector_operations_window(MainWindowButtons button, ButtonStatus status);
    void show_error_box();
    void show_results_box();
};

#endif /* CC700F3D_29AA_4481_9E74_C86C07AC08B6 */
