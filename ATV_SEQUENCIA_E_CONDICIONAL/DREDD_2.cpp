#include <iostream>
#include <cmath>

using namespace std;

int main () {
   
   int peso, resto;
   cin >> peso;
   
   int tanque = peso/60000;
   resto = peso%60000;
   
   int carros = resto/900;
   resto = resto%900;
   
   int soldados = resto/85;
   resto = resto%85;
   
   int rifles = resto/4;
   resto = resto%4;
   
   cout << tanque << endl;
   cout << carros << endl;
   cout << soldados << endl;
   cout << rifles << endl;
   

   return 0;
}
