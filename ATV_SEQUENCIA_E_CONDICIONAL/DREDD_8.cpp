#include <iostream>
#include <iomanip>

using namespace std;

int main () {
   
   float peso, produto, pais, soma, imposto, total;
   cin >> produto;
   cin >> peso;
   cin >> pais;
   cout << fixed;
   cout << setprecision(1);
   
   peso = peso*1000;
   cout << peso << endl;
   
   if (produto >= 1 and produto <= 4){
      if (pais == 1){
	     soma = peso*10;
	     imposto = soma*0/100;
	     total = soma + imposto;
	     cout << soma << endl;
	     cout << imposto << endl;
	     cout << total << endl;
	  } else if (pais == 2) {
		  soma = peso*10;
		  imposto = soma*15/100;
		  total = soma + imposto;
		  cout << soma << endl;
		  cout << imposto << endl;
	      cout << total << endl;
	  } else if (pais == 3) {
		  soma = peso*10;
		  imposto = soma*25/100;
		  total = soma + imposto;
		  cout << soma << endl;
		  cout << imposto << endl;
	      cout << total << endl;
	  }
   }
   if (produto >= 5 and produto <= 7){
      if (pais == 1){
	     soma = peso*25;
	     imposto = soma*0/100;
	     total = soma + imposto;
	     cout << soma << endl;
	     cout << imposto << endl;
	     cout << total << endl;
	  } else if (pais == 2) {
		  soma = peso*25;
		  imposto = soma*15/100;
		  total = soma + imposto;
		  cout << soma << endl;
		  cout << imposto << endl;
	      cout << total << endl;
	  } else if (pais == 3) {
		  soma = peso*25;
		  imposto = soma*25/100;
		  total = soma + imposto;
		  cout << soma << endl;
		  cout << imposto << endl;
	      cout << total << endl;
	  }
   }
   if (produto >= 8 and produto <= 10){
      if (pais == 1){
	     soma = peso*35;
	     imposto = soma*0/100;
	     total = soma + imposto;
	     cout << soma << endl;
	     cout << imposto << endl;
	     cout << total << endl;
	  } else if (pais == 2) {
		  soma = peso*35;
		  imposto = soma*15/100;
		  total = soma + imposto;
		  cout << soma << endl;
		  cout << imposto << endl;
	      cout << total << endl;
	  } else if (pais == 3) {
		  soma = peso*35;
		  imposto = soma*25/100;
		  total = soma + imposto;
		  cout << soma << endl;
		  cout << imposto << endl;
	      cout << total << endl;
	  }
   }
   
   
   return 0;
}
