#include <iostream>

using namespace std;

int main () {
   
   float celsius, fah, kel;
   cin >> celsius;
   fah = (1.8*celsius) + 32;
   kel = celsius + 273;
   cout << fah << endl;
   cout << kel << endl;

   return 0;
}
