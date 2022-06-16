#include <iostream>

using namespace std;

long fat(int num){
	int i=1;
	long fator=1;
	while (num >= i){
		fator*=i;
		i++;
	}
	return fator;
}
long combi(int n, int k){
	return fat(n)/(fat(k)*(fat(n-k)));
}
long soma(int n){
	int i=0;
	long soma=0;
	while(i < n){
		soma+=combi(n,i);
		i++;
	}
	return soma;
}
int main (){
	int numero;
	cin >> numero;
	cout << soma(numero) << endl;

	return 0;
}
