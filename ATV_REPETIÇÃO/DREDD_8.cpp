#include <iostream>
#include <cmath>

using namespace std;

int main (){
   
   int numero, numero2, i, soma;
   
   cin >> numero >> numero2;
   
   i=0;
   while (i < numero2){
       soma = numero + numero*i;
       i++;
       cout << soma << endl;
   }
   
   return 0;
}
