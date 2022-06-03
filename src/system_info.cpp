#include "system_info.hh"

const char *get_cpu_info()
{
    char CPUBrandString[0x40];
    const char *CPU;
unsigned int CPUInfo[4] = {0,0,0,0};

__cpuid(0x80000000, CPUInfo[0], CPUInfo[1], CPUInfo[2], CPUInfo[3]);
unsigned int nExIds = CPUInfo[0];

memset(CPUBrandString, 0, sizeof(CPUBrandString));

for (unsigned int i = 0x80000000; i <= nExIds; ++i)
{
    __cpuid(i, CPUInfo[0], CPUInfo[1], CPUInfo[2], CPUInfo[3]);

    if (i == 0x80000002)
        memcpy(CPUBrandString, CPUInfo, sizeof(CPUInfo));
    else if (i == 0x80000003)
        memcpy(CPUBrandString + 16, CPUInfo, sizeof(CPUInfo));
    else if (i == 0x80000004)
        memcpy(CPUBrandString + 32, CPUInfo, sizeof(CPUInfo));
}
    CPU = CPUBrandString;
    return CPU;
}

