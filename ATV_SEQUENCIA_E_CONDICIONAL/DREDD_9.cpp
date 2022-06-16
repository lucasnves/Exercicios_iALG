#include <iostream>

using namespace std;

int main () {

   int carga, resto, resto2, resto3, cavalo, vacas, galinha;
   int cav, gal, vac;
   cin >> carga;
   cin >> cavalo;
   cin >> vacas;
   cin >> galinha;
   
   gal = carga/2;
   if (gal >= galinha){
	   resto = carga - (galinha*2);
	   vac = resto/150;
       if (vac >= vacas){
	       resto2 = resto - (vacas*150);
	       cav = resto2/250;
          if (cav >= cavalo){
	          resto3 = resto2 - (cavalo*250);
	          cout << cavalo <<" "<< vacas <<" "<< galinha <<" "<< resto3 << endl;
		  } if (cav < cavalo){
			  cavalo = cav;
			  resto3 = resto2 - (cavalo*250);
			  cout << cavalo <<" "<< vacas <<" "<< galinha <<" "<< resto3 << endl;
		  }
       } if (vac < vacas){
			  vacas = vac;
			  resto2 = resto - (vacas*150);
			  cout <<0<<" "<< vacas <<" "<< galinha <<" "<< resto2 << endl;
		  }
    } if (gal < galinha){
			  galinha = gal;
			  resto = carga - (galinha*2);
			  cout <<0<<" "<<0<<" "<< galinha <<" "<< resto << endl;
		  }

   return 0;
}
