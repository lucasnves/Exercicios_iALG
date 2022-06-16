#include <iostream>

using namespace std;

int main (){
   
   int n, i=1, qntd=0;
   
   cin >> n;
   cout <<1;
   while (i <= n){
	   i++;
	   if (n%i==0){
		   cout <<"+"<< i;
		   qntd+=i;
	   }
   }
   cout <<"="<< qntd+1;
   
   return 0;
}
