#include <iostream>

using namespace std;

int main (){
   
   int  i, j;
   
   i=0;
   
   while (i < 10){
	   i++;
	   j=1;
	   while (j <= 10){
		   cout << i <<" x "<< j <<" = "<< j*i << endl;
		   j++;
	   }
   }
   
   return 0;
}
