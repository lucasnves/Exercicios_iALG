#include <iostream>

using namespace std;

int main (){
   
   int n, soma, cont, i;
   
   cin >> n;
   
   cont=1;
   soma=0;
   i=0;
   while (i < n){
	   cont+=i;
	   i++;
	   soma = cont + (n-1);
   }  
   cout << soma << endl;
   
   return 0;
}
