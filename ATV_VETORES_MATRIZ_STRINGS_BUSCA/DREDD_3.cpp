#include <iostream>

using namespace std;

void entrada (int vetor[], int tam){
	for (int i=0; i < tam; i++){
		cin >> vetor[i];
	}
}
int main (){
	
	int vetor1[10], vetor2[5], divisor=0;
	
	entrada(vetor1, 10);
	entrada(vetor2, 5);
	
	for (int i=0; i < 10; i++){
		for (int k=0; k < 5; k++){
			if (vetor1[i]%vetor2[k]==0){
				divisor+=1;
			}
		}
		cout << vetor1[i] <<" "<< divisor <<endl;
		divisor=0;
	}
	
	return 0;
}
