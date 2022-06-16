#include <iostream>

using namespace std;

int main () {
   
   float salario, total, aumento;
   cin >> salario;
   if (salario <= 300){
	   aumento = (salario*15/100);
       total = aumento + salario;
       cout << aumento << endl;
       cout << total << endl;
   } 
   if (300 < salario and salario <= 600) {
       aumento = (salario*10/100);
       total = aumento + salario;
       cout << aumento << endl;
       cout << total << endl;
   } 
   if (600 < salario and salario <= 900) {
	   aumento = (salario*5/100);
       total = aumento + salario;
       cout << aumento << endl;
       cout << total << endl;
   } 
   if (900 < salario) {
	   total = salario;
	   cout << aumento << endl;
       cout << total << endl;
   }

   return 0;
}
