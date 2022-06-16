#include <iostream>
#include <cmath>

using namespace std;

int main () {
   
   float a1, a2, a3;
   float p = 0, s = 0, t = 0;
   cin >> a1 >> a2 >> a3;
   
   p = a1 + a2 + a3;
   s = p/2;
   t = sqrt(s*(s-a1)*(s-a2)*(s-a3));
   
   if (a1 < (a2 + a3) and a2 < (a1 + a3) and a3 < (a1 + a2)) {
      cout << t << endl;
   } else {
      cout << 0 << endl;
   }
   
   return 0;
}
