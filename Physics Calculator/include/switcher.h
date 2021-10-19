#ifndef F742BEB8_9964_4C5B_990F_B28A6C6574FE
#define F742BEB8_9964_4C5B_990F_B28A6C6574FE
#include <mainlibs.h>
#include <mainlibs2.h>
class switcher {

public:
    static void switchoption(structure &s, results res) {
         switch (s.choice) {
        case 1:
                power::powerenum1(s);
	            power::powerenum2(s);
	            square_root::square(s, res);
            break;
            case 2: 
           
                cout << "Exiting program..." << endl;
            break;
            
        default:
            break;
        }
    }
    
};




#endif /* F742BEB8_9964_4C5B_990F_B28A6C6574FE */
