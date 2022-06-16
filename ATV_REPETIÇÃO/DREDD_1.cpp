#include <iostream>
#include <math.h>

using namespace std;

int main () {
    
   int i=1;
   int forma=0;
   int numero;
   
   cin >> numero;
	   
   while (forma <= numero) {
      cout << forma << endl;
      forma = pow(2,i)-1;
      i+=1;
   }

   return 0;
}
