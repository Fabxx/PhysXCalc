#ifndef EB97CFA8_93C5_4C90_A0DA_F400382ECFF5
#define EB97CFA8_93C5_4C90_A0DA_F400382ECFF5
#include "../imgui/imgui.h"

class MainWindowButtons
{
public:
        bool Vector_operations_button;
        bool calculate_button; 
        bool reset_button;
};

class ButtonStatus
{
public:
        bool show_input_box = false;
        bool reset_vector_button = false;
        bool show_operation_box = false;
        bool error = false;
        bool reset_vector = false;
        bool show_results = false;
};

#endif /* EB97CFA8_93C5_4C90_A0DA_F400382ECFF5 */
