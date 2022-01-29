#ifndef D1E50C8C_2EB2_44D3_BB47_162D340D6639
#define D1E50C8C_2EB2_44D3_BB47_162D340D6639
#include <iostream>
#include <time.h>

class graphics {
    public:
         static int16_t choice;

        static void menu_init();
        static void interface();
};

class switcher {
    public:
            static void switchfunc();
};

class memory {

    public:
            static void dump();
};

#endif /* D1E50C8C_2EB2_44D3_BB47_162D340D6639 */
