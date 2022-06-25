#include <iostream>
#include "../imgui/imgui.h"
#include "Windows.hh"

/*Vector window with it's buttons inside, the checks on the buttons will be done on the same window*/
void Windows::vector_operations_window(bool *error, bool *reset_vector, bool *show_results)
{
    MainWindowButtons button;
    //window name + text + input for numbers. Each begin represents a new window buffer
    //everything declarated below that buffer goes into that window. NOTE that the order of declaration for the buttons matters!
    *error = false, *reset_vector = false, *show_results = false;
    ImGui::Begin("Coordinates input, insert at least a even number of coords");  
    ImGui::InputDouble("input", &XYcoord, 0.0, 0.0, "%f", 0);
    ImGui::Text("Inputs inserted: %lu\n", XYvett.size()); 
    button.reset_button = ImGui::Button("Reset");
    button.calculate_button = ImGui::Button("Calculate");

     if (ImGui::IsItemClicked(button.reset_button))
    {
        *reset_vector = !*reset_vector;
    }

    if (ImGui::IsKeyPressed(ImGuiKey_Enter))
    {
        XYvett.push_back(XYcoord); 
    }
    
    if (ImGui::IsItemClicked(button.calculate_button) && (XYvett.size()%2 == 0 && XYvett.size() >= 4))
    {
        *show_results = !*show_results; 
    } 
    else if (ImGui::IsItemClicked(button.calculate_button) && ((XYvett.size()%2 != 0) && (XYvett.size() < 4)))
    {
        *error = !*error;
    }

    ImGui::End();
}

void Windows::show_error_box()
{
    ImGui::Begin("error");
    ImGui::TextWrapped("Data not found or coordinate number is odd, data will be deleted.");
    ImGui::End();
}

void Windows::show_results_box()
{
    ImGui::Begin("Results");
    module_calc();
    //static i avoids that the values will be rescanned when imgui redraws for each frame.
    static size_t i;
    for (i = 0; i < module_store.size(); i++)
    {
        ImGui::Text("Modules of %lu vector: %f\n", i+1, module_store[i]);
        ImGui::NextColumn();
    }
    ImGui::End(); 
}

void Windows::clear_vector()
{
    XYvett.erase(XYvett.begin(), XYvett.end());
}