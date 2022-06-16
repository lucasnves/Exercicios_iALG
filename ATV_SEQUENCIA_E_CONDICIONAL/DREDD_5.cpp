#include <iostream>
#include <iomanip>

using namespace std;

int main () {
   
   float produto, estado, peso, total, imposto, soma;
   cin >> produto;
   cin >> estado;
   cin >> peso;
   
   peso = peso*1000;
   cout << peso << endl;
   
   if (produto >= 10 and produto <= 20 and estado == 1) {
		      soma = peso*100;
		      imposto = soma*35/100;
		      total = soma + imposto;
		      cout << soma << endl;
		      cout << imposto << endl;
		      cout << total << endl;
	   } else if (produto >= 10 and produto <= 20 and estado == 2) {
		      soma = peso*100;
		      imposto = soma*25/100;
		      total = soma + imposto;
		      cout << soma << endl;
		      cout << imposto << endl;
		      cout << total << endl;
		   } else if (produto >= 10 and produto <= 20 and estado == 3) {
			      soma = peso*100;
			      imposto = soma*15/100;
			      total = soma + imposto;
			      cout << soma << endl;
		          cout << imposto << endl;
		          cout << total << endl;
			   } else if (produto >= 10 and produto <= 20 and estado == 4) {
				      soma = peso*100;
				      imposto = soma*5/100;
			          total = soma + imposto;
			          cout << soma << endl;
		              cout << imposto << endl;
		              cout << total << endl;
				   } else if (produto >= 10 and produto <= 20 and estado == 5) {
					      soma = peso*100;
				          imposto = 0;
			              total = soma + imposto;
			              cout << soma << endl;
		                  cout << imposto << endl;
		                  cout << total << endl;
					  }
	if (produto >= 21 and produto <= 30 and estado == 1) {
		      soma = peso*250;
		      imposto = soma*35/100;
		      total = soma + imposto;
		      cout << soma << endl;
		      cout << imposto << endl;
		      cout << total << endl;
	   } else if (produto >= 21 and produto <= 30 and estado == 2) {
		      soma = peso*250;
		      imposto = soma*25/100;
		      total = soma + imposto;
		      cout << soma << endl;
		      cout << imposto << endl;
		      cout << total << endl;
		   } else if (produto >= 21 and produto <= 30 and estado == 3) {
			      soma = peso*250;
			      imposto = soma*15/100;
			      total = soma + imposto;
			      cout << soma << endl;
		          cout << imposto << endl;
		          cout << total << endl;
			   } else if (produto >= 21 and produto <= 30 and estado == 4) {
				      soma = peso*250;
				      imposto = soma*5/100;
			          total = soma + imposto;
			          cout << soma << endl;
		              cout << imposto << endl;
		              cout << total << endl;
				   } else if (produto >= 21 and produto <= 30 and estado == 5) {
					      soma = peso*250;
				          imposto = 0;
			              total = soma + imposto;
			              cout << soma << endl;
		                  cout << imposto << endl;
		                  cout << total << endl;
					   }
    if (produto >= 31 and produto <= 40 and estado == 1) {
		      soma = peso*340;
		      imposto = soma*35/100;
		      total = soma + imposto;
		      cout << soma << endl;
		      cout << imposto << endl;
		      cout << total << endl;
	   } else if (produto >= 31 and produto <= 40 and estado == 2) {
		      soma = peso*340;
		      imposto = soma*25/100;
		      total = soma + imposto;
		      cout << soma << endl;
		      cout << imposto << endl;
		      cout << total << endl;
		   } else if (produto >= 31 and produto <= 40 and estado == 3) {
			      soma = peso*340;
			      imposto = soma*15/100;
			      total = soma + imposto;
			      cout << soma << endl;
		          cout << imposto << endl;
		          cout << total << endl;
			   } else if (produto >= 31 and produto <= 40 and estado == 4) {
				      soma = peso*340;
				      imposto = soma*5/100;
			          total = soma + imposto;
			          cout << soma << endl;
		              cout << imposto << endl;
		              cout << total << endl;
				   } else if (produto >= 31 and produto <= 40 and estado == 5) {
					      soma = peso*340;
				          imposto = 0;
			              total = soma + imposto;
			              cout << soma << endl;
		                  cout << imposto << endl;
		                  cout << total << endl;
					   }
   
   return 0;
}
