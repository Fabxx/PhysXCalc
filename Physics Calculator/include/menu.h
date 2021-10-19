#ifndef D1E50C8C_2EB2_44D3_BB47_162D340D6639
#define D1E50C8C_2EB2_44D3_BB47_162D340D6639
#include <mainlibs.h>
#include <mainlibs2.h>

class graphics {
    public:
        static void interface() {
            cout << "Welcome, please choose an operation:" << endl
             << "1)Pytagorean theorem" << endl
             << "2)Exit, more coming soon" << endl;
        }
        
};

class input {
    public: 
            static void inputinit(structure &s) {
                cin >> s.choice;
            }
};

class menu {
public:
    static void menu_init(structure &s, results &res) {
        graphics::interface();
        input::inputinit(s);
        switcher::switchoption(s, res);
    }
    
};





#endif /* D1E50C8C_2EB2_44D3_BB47_162D340D6639 */
