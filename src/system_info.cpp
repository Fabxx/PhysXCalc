#include "system_info.hh"
#include <GL/gl.h>
#include "imgui/imgui.h"

static char *get_cpu_info()
{
    char CPUBrandString[0x40];
    char *CPU = (char*)malloc(sizeof(char));
    unsigned int CPUInfo[4] = {0,0,0,0};

    __cpuid(0x80000000, CPUInfo[0], CPUInfo[1], CPUInfo[2], CPUInfo[3]);
    unsigned int nExIds = CPUInfo[0];

    memset(CPUBrandString, 0, sizeof(CPUBrandString));

    for (unsigned int i = 0x80000000; i <= nExIds; ++i)
    {
        __cpuid(i, CPUInfo[0], CPUInfo[1], CPUInfo[2], CPUInfo[3]);

        if (i == 0x80000002)
        {
            memcpy(CPUBrandString, CPUInfo, sizeof(CPUInfo));
        }
        else if (i == 0x80000003)
        {
            memcpy(CPUBrandString + 16, CPUInfo, sizeof(CPUInfo));
        }
        else if (i == 0x80000004)
        {
            memcpy(CPUBrandString + 32, CPUInfo, sizeof(CPUInfo));
        }
    }
    CPU = CPUBrandString;
    return CPU;
}

void draw_sys_info()
{
    static char *content = NULL;

    if (content == NULL)
    {
        char buffer[100];
        snprintf(buffer, sizeof(buffer), "CPU:%s\n" "GPU:%s", get_cpu_info(), glGetString(GL_RENDERER));
        *content = *buffer;
    }

    ImGui::Begin("System Information");
    ImGui::TextWrapped("%s", content);
    ImGui::End();
}
