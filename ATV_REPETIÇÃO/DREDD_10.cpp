#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
   int termos, i;
   double  total, soma;
   
   cin >> termos;
   
   i=1;
   soma= sqrt(2);
   total= soma/2;
   
   while (i < termos){
	   soma = sqrt(2 + soma);
	   total*= (soma/2);
	   i++;
   }
      cout << 2/total << endl;
   
   return 0;
}
