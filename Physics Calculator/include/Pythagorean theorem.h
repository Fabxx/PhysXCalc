#ifndef A0DAEEF6_6FF6_44EF_A7E3_3488E7D8C0F2
#define A0DAEEF6_6FF6_44EF_A7E3_3488E7D8C0F2
#include <mainlibs.h>
#include <mainlibs2.h>


class power  {

public:
           
        static void powerenum1(structure &s) {
        
            cout << "X axis, vector A" << endl;
            cout << "Inser the number for A vector" << endl;
            cin >> s.x;
            cout << "Applying power of 2 from theorem..." << endl;
             s.y = 2;
            s.pow1 = pow(s.x, s.y);
        }
            
        static void powerenum2(structure &s) {
          
            cout << "Y Axis vector B" << endl;
                cout << "Inser the number for B vector" << endl;
                 cin >> s.z;
                 cout << "Applying power of 2 from theorem..." << endl;
                s.k = 2;
                 s.pow2 = pow(s.z, s.k);
        }
       
};


class square_root {
    public:
            static void square(structure &s, results &res) {
               
                 res.sqrresult = sqrt(s.pow1 + s.pow2);

                 cout << "Vectors Module: " << res.sqrresult << endl;
            }
    };


#endif /* A0DAEEF6_6FF6_44EF_A7E3_3488E7D8C0F2 */
