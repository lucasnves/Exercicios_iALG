#include <iostream>

using namespace std;

int main (){
	
	int cont=0;
	float soma=0;
	
	float vetor[10];
	
	for (int i=0; i < 10; i++){
		cin >> vetor[i];
		if (vetor[i] >= 0){
			soma+= vetor[i];
		} else {
			cont++;
		}
	}
	cout << cont <<endl;
	cout << soma;
	
	return 0;
}
