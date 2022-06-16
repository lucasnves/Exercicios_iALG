#include <iostream>
#include <cmath>

using namespace std;

int main () {
   
   int z;
   float r, s, x, total;
   cin >> z;
   
   if (z%2 == 0) {
     cin >> r;
     cin >> s;
     total = r+s;
     cout << total << endl;
   } else {
      cin >> x;
      total = sqrt(x);
      cout << total << endl;
   }
   
   return 0;
}
