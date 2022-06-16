#include <iostream>

using namespace std;

void selection (int vetor[], int parar, int N) {
	int menor, aux;
	
	for (int i=0; i < N-1; i++){
		menor= i;
		for (int j=i+1; j <= parar; j++){
			if (vetor[j] > vetor[menor]){
					menor= j;
			}
		}
		aux= vetor[i];
		vetor[i]= vetor[menor];
		vetor[menor]= aux;
	}
	for (int j=0; j < N; j++){
			cout << vetor[j] <<" ";
		}
}

int main (){
	int N;
	
	cin >> N;
	int vetor[N];
	
	for (int i=0; i < N; i++){
		cin >> vetor[i];
	}
	
	int parar;
	cin >> parar;
	
	selection (vetor, parar, N);
	
	return 0;
}
