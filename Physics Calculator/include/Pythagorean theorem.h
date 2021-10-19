#ifndef A0DAEEF6_6FF6_44EF_A7E3_3488E7D8C0F2
#define A0DAEEF6_6FF6_44EF_A7E3_3488E7D8C0F2
#include <mainlibs.h>
#include <mainlibs2.h>


class power  {

public:
           
        static void powerenum1(structure &s) {
        
            cout << "X axis" << endl;
            cout << "Inser the number that you want to apply the power 1" << endl;
            cin >> s.x;
            cout << "Insert the power to apply to the number 1" << endl;
            cin >> s.y;
            s.pow1 = pow(s.x, s.y);
        }
            
        static void powerenum2(structure &s) {
          
            cout << "Y Axis" << endl;
                cout << "Inser the number that you want to apply the power 2" << endl;
                 cin >> s.z;
                 cout << "Inser the number that you want to apply the power 2" << endl;
                 cin >> s.k;
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
