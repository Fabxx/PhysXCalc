/**
 * @file main.cpp
 * @author revix-0
 * @brief Welcome to Physcal, physcal it's a program that let's you calculate
 * 		  physics values with different formulas. Soon we'll provide a GUI.
 * 		 NOTE: counters in this program are not initialized to 0, so when we enter again
 *    		   into a function, the counter will resume from the last position saved, from
 * 			   there we'll put more values.
 * 
 * 				THIS PROGRAM IS PROVIDED AS IS, IT'S NOT GUARANTEED IT WILL WORK IN ALL CASES, THE PROGRAM IS PROVIDED
 *   			UNDER GNU GENERAL PUBLIC LICENSE V3.
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_glfw.h"
#include "../imgui/imgui_impl_opengl3.h"
#include <stdio.h>
#include <iostream>
#include "Vector_operations.hh"
#include "system_info.hh"

#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h> // Will drag system OpenGL headers

#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, "legacy_stdio_definitions")
#endif

static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, "Glfw Error %d: %s\n", error, description);
}

int main(void)
{
    modulefunc func; angle atan;
    // Setup window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;

    // Decide GL+GLSL versions
#if defined(IMGUI_IMPL_OPENGL_ES2)
    // GL ES 2.0 + GLSL 100
    const char* glsl_version = "#version 100";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
#elif defined(__APPLE__)
    // GL 3.2 + GLSL 150
    const char* glsl_version = "#version 150";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // Required on Mac
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = "#version 130";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // 3.0+ only
#endif

    // Create window with graphics context, get resolution screen on window frame.
    const GLFWvidmode *mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
    GLFWwindow* window = glfwCreateWindow(mode->width, mode->height, "PhysxCalc v1.0", NULL, NULL);
    if (window == NULL)
        return 1;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync

    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();

    // Setup Platform/Renderer backends
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init(glsl_version);

    // Our state
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

    bool show_operation_box = false;
    bool error = false;
    bool system_info = false;

    // Main loop
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        // Start the Dear ImGui frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        //Draw the window in frames only when the button is clicked.
        if (ImGui::IsItemClicked(ImGui::Button("Vector operations")))
        {
            show_operation_box = !show_operation_box;
        }
        if (ImGui::IsItemClicked(ImGui::Button("System Information")))
        {
            system_info = !system_info;
        }

        if (show_operation_box)
        {
          //window name + text + input for numbers.
          ImGui::Begin("Coordinates input, insert at least a even number of coords");  
          ImGui::InputDouble("input", &func.XYcoord, 0.0, 0.0, "%f", 0);    
     
          if (ImGui::IsKeyPressed(ImGuiKey_Enter))
          {
              func.XYvett.push_back(func.XYcoord); 
          }

          ImGui::End();
        }
        //System information
        if (system_info)
        {
            draw_sys_info();
        }

        //Check if the vector has the necessary numbers of elements when the button is clicked to proceed the calculation.

        if ((ImGui::IsItemClicked(ImGui::Button("End input"))) 
        && ((func.XYvett.size() == 0) || ((func.XYvett.size()%2 != 0) && (func.XYvett.size() < 4))))
        {
            error = !error;
        }

        //Display error text if coordinate boundaries are not respected.
        if (error) 
        {
            ImGui::Begin("error");
            ImGui::TextWrapped("Data not found or coordinate number is odd, data will be deleted.");
            ImGui::End();
            func.XYvett.erase(func.XYvett.begin(), func.XYvett.end());
        } 
       

       /*
        ImGui::Begin("Results");
        func.module_calc();

        for (size_t i = 0; i < func.modules.size(); i++)
        {
            ImGui::Text("Modules of vectors:%f\n", func.modules[i]);
            ImGui::NextColumn();
        }

        ImGui::End(); 
        func.XYvett.erase(func.XYvett.begin(), func.XYvett.end());
              */
        // Rendering
    ImGui::Render();
    int display_w, display_h;
    glfwGetFramebufferSize(window, &display_w, &display_h);
    glViewport(0, 0, display_w, display_h);
    glClearColor(clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    glfwSwapBuffers(window);
   
    }
        
    // Cleanup
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
        
}


	/*
	graphics graph; switcher swi; modulefunc modul; memory mem; angle ang; vett_product vett;
	
	while (graph.choice <= 0 || graph.choice > 3)
	{
	   graph.interface();

	   if (graph.choice != 0)
	   {
		swi.switchfunc(graph, modul, mem, ang, vett);
	   } 
	}
		return 0;
		*/

