#include <iostream>
#include "../imgui/imgui.h"
#include "Windows.hh"

/*Vector window with it's buttons inside, the checks on the buttons will be done on the same window*/
void Windows::vector_operations_window(bool *error, bool *reset_vector, bool *show_results, vector_operations *operations)
{
    //window name + text + input for numbers. Each begin represents a new window buffer
    //everything declarated below that buffer goes into that window. NOTE that the order of declaration for the buttons matters!
    ImGui::Begin("Coordinates input, insert at least a even number of coords >= 4");  
    ImGui::InputDouble("input", &operations->XYcoord, 0.0, 0.0, "%f", 0);
    ImGui::Text("Inputs inserted: %lu\n", operations->XYvett.size()); 

     if (ImGui::IsItemClicked(ImGui::Button("Reset")))
    {
        *reset_vector = !*reset_vector;
        *show_results = false;
    }

    if (ImGui::IsKeyPressed(ImGuiKey_Enter))
    {
        operations->XYvett.push_back(operations->XYcoord); 
    }
    
    if (ImGui::IsItemClicked(ImGui::Button("Calculate")))
    {
        if (operations->XYvett.size()%2 == 0 && operations->XYvett.size() >= 4)
        {
            operations->module_calc();
            operations->atan_calculation();
            *show_results = !*show_results;
        }
        else if ((operations->XYvett.size()%2 != 0) || (operations->XYvett.size() < 4))
        {
            *error = !*error;
        }
    } 

    ImGui::End();
}

void Windows::show_error_box()
{
    ImGui::Begin("error");
    ImGui::TextWrapped("Data not found or coordinate number is odd or not 4.");
    ImGui::End();
}

void Windows::show_results_box(vector_operations *operations)
{
    ImGui::Begin("Results");

        for (size_t i = 0; i < operations->module_store.size(); ++i)
        {
            ImGui::Text("Module of %lu vector: %.2f\n", i+1, operations->module_store[i]);
            ImGui::NextColumn();
        }
        
        ImGui::Text("Tetha between first and last vector: %.2f\n"
                    "Product of vector modules: %.2f\n" "COS Angle: %.2f\n"
                    "SIN Angle: %.2f\n" "Vectorial Product: %.2f\n"
                    "Scalar Product: %.2f\n", operations->tetha_angle(), operations->muliply_modules(),
                                              operations->cos_of_angle(), operations->sin_of_angle(), 
                                              operations->vectorial_product(), operations->scalar_product()); 
                                                               

    ImGui::End(); 
}

void Windows::clear_vector(vector_operations *operations)
{
    operations->XYvett.erase(operations->XYvett.begin(), operations->XYvett.end());
}