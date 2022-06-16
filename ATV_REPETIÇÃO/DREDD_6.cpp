#include <iostream>

using namespace std;

int main (){

   int i, cont, qntd, qntda;
   float horas, minutos, horasi, minutosi, horasv, horast;
   
   cin >> horas >> minutos;
   cin >> qntd;
   
   cont=1;
   i=0;
   horas = (horas*60) + minutos;
   horast= horas;
   
   while (i < qntd){
	   cin >> horasi >> minutosi >> qntda;
	   i++;
	   horasi = ((horasi*60) + minutosi);
	   horasv = horasi - (qntda*60);
	   if (horast < horasi){
		   if (horasv <= horas){
		   cont+=1;
	       }
	   }
	   horast=horasi;
   }
   cout << cont << endl;
   
   return 0;
}
