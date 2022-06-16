#include <iostream>
#include <cmath>

using namespace std;

int main (){
   
   int i=1, p=1;
   float r, n, soma=0;
   
   cin >> r >> n;
   
   cout << 1 <<endl;
   
   while (i < n){
	   i++;
	   soma=pow(r,p);
	   p++;
	   cout << soma << endl;
   }
   
   return 0;
}
