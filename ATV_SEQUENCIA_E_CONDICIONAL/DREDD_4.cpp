#include <iostream>
#include <cmath>

using namespace std;

int main () {
   
   int op;
   float angulo, resultado, angulo2;
   cin >> op;
   cin >> angulo;
   
   if (op == 1) {
      resultado = sin(angulo*M_PI/180);
      cout.precision(2);
      cout << resultado << endl;
   } 
   else if (op == 2) {
      resultado = cos(angulo*M_PI/180);
      cout.precision(2);
      cout << resultado << endl;
   } 
   else if (op == 3) {
      cin >> angulo2;
      resultado = angulo*angulo2;
      cout << resultado << endl;
   }

   return 0;
}
