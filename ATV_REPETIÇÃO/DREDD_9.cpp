#include <iostream>

using namespace std;

int main (){
   
   int precos, ingressos;
   float despesas, conta;
   float i;
   cin >> despesas >> precos;
   
   i=5;
   conta=0;
   ingressos= 120 + precos;
   cout << i <<" "<< (120*i) - despesas << endl; 
   while (i > 1){
	   i-=0.5;
	   conta= (ingressos)*i - despesas;
	   cout << i <<" "<< conta << endl;
	   ingressos+=precos;
   }
   
   return 0;
}
