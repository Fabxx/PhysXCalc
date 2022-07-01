#include <iostream>
#include <array>
#include "../imgui/imgui.h"
#include "Windows.hh"

/*Vector window with it's buttons inside, the checks on the buttons will be done on the same window*/
void Windows::vector_operations_window(bool *error, bool *reset_vector, bool *show_results)
{
    //window name + text + input for numbers. Each begin represents a new window buffer
    //everything declarated below that buffer goes into that window. NOTE that the order of declaration for the buttons matters!
    ImGui::Begin("Coordinates input, insert at least a even number of coords");  
    ImGui::InputDouble("input", &XYcoord, 0.0, 0.0, "%f", 0);
    ImGui::Text("Inputs inserted: %lu\n", XYvett.size()); 

     if (ImGui::IsItemClicked(ImGui::Button("Reset")))
    {
        *reset_vector = !*reset_vector;
    }

    if (ImGui::IsKeyPressed(ImGuiKey_Enter))
    {
        XYvett.push_back(XYcoord); 
    }
    
    if (ImGui::IsItemClicked(ImGui::Button("Calculate")))
    {
        if (XYvett.size()%2 == 0 && XYvett.size() >= 4)
        {
            module_calc();
            *show_results = !*show_results;
        }
        else if ((XYvett.size()%2 != 0) || (XYvett.size() < 4))
        {
            *error = !*error;
        }
    } 

    if (ImGui::IsItemClicked(ImGui::Button("Close Results")))
    {
        *show_results = false;
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
    //static i avoids that the values will be rescanned when imgui redraws for each frame.
    static char *buffer = (char*)malloc(sizeof(module_store));

    for (size_t i = 0; i < module_store.size(); ++i)
    {
        snprintf(buffer, sizeof(buffer), "%.2f", module_store[i]);
        ImGui::Text("Modules of %lu vector: %f\n", i+1, module_store[i]);
        ImGui::NextColumn();
    }

    ImGui::End(); 
}

void Windows::clear_vector()
{
    XYvett.erase(XYvett.begin(), XYvett.end());
}