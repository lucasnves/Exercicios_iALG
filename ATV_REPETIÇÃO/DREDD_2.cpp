#include <iostream>

using namespace std;

int main (){
   
   int i;
   int numero;
   int soma;
   
   while (-1 != numero){
	   cin >> numero;
	   soma=0;
	   i=1;
	   while (i < numero){
	      if (numero%i==0){
		      soma+=i;
	      }
	      i++;
	   }
	   if (numero != -1){
	   cout << soma <<" ";
       }
   } 
   
   return 0;
}
