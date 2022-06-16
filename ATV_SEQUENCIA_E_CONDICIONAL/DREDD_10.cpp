#include <iostream>

using namespace std;

int main () {
   
   int dia, dia1, mes, mes1, ano, ano1;
   cin >> dia >> mes >> ano;
   cin >> dia1 >> mes1 >> ano1;
   
   if (ano>ano1 or (ano==ano1 and mes>mes1) or (ano==ano1 and mes==mes1 and dia > dia1)){
	   cout << dia <<endl<< mes <<endl<< ano << endl;
   } 
   if (ano1>ano or (ano1==ano and mes1>mes) or (ano1==ano and mes1==mes and dia1>dia)) {
	   cout << dia1 <<endl<< mes1<<endl<< ano1 << endl;
   }
   
   return 0;
}
