#include <iostream>
#include <cmath>

using namespace std;

int soma(int n){
	int i=1;
	int j=1;
	int s=0;
	int soma=0;
	while (i <= n and n > 0){
		if (j <= 3){
			s= pow(i, j);
		} else {
			j=1;
			s= pow(i, j);
		}
		if (s%2==0){
			soma-= s;
		} else{
			soma+= s;
		}
		i++;
		j++;
	}
	return soma;
}

int main (){
	int n;
	cin >> n;
	if (n < 0){
		main ();
	} else{
	cout << soma(n) <<endl;
	}
	return 0;
}
