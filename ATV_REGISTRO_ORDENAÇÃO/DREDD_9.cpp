#include <iostream>

using namespace std;

void selection (int vetor[],int tam) {
	int maior, aux;
	
	for (int i=0; i < tam-1; i++){
		maior= i;
		for (int j=i+1; j < tam; j++){
			if (vetor[j] > vetor[maior]){
				maior= j;
			}
		}
		
		aux= vetor[i];
		vetor[i]= vetor[maior];
		vetor[maior]= aux;
		
		for (int j=0; j < tam; j++){
			cout << vetor[j] <<" ";
		}
		cout << endl;
	}
}
int main(){
	int N;
	
	cin >> N;
	int vetor[N];
	
	for (int i=0; i < N; i++){
		cin >> vetor[i];
	}
	
	selection(vetor, N);
	
	return 0;
}
