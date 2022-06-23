#include <iostream>
#include "../imgui/imgui.h"
#include "Windows.hh"

/*Vector window with it's buttons inside, the checks on the buttons will be done on the same window*/
void Windows::vector_operations_window(MainWindowButtons button, ButtonStatus status)
{
    //window name + text + input for numbers.
    ImGui::Begin("Coordinates input, insert at least a even number of coords");  
    ImGui::InputDouble("input", &XYcoord, 0.0, 0.0, "%f", 0);
    ImGui::Text("Inputs inserted: %lu\n", XYvett.size()); 
    button.reset_button = ImGui::Button("Reset vector");
    button.calculate_button = ImGui::Button("Calculate Values");

     if (ImGui::IsItemClicked(button.reset_button))
    {
        status.reset_vector = !status.reset_vector;
    }

    if (ImGui::IsKeyPressed(ImGuiKey_Enter))
    {
        XYvett.push_back(XYcoord); 
    }

    if (ImGui::IsItemClicked(button.calculate_button) && (XYvett.size()%2 == 0 && XYvett.size() >= 4))
    {
        status.show_results = !status.show_results; 
    } 
    else if (ImGui::IsItemClicked(button.calculate_button) && ((XYvett.size()%2 != 0) && (XYvett.size() < 4)))
    {
        status.error = !status.error;
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
        ImGui::Text("Modules of %lu vector:%f\n", i+1, module_store[i]);
        ImGui::NextColumn();
    }
    ImGui::End(); 
}