#include <iostream>

using namespace std;

void imprime(int vetor[], int N){
	for (int i=0; i < N; i++){
		cout << vetor[i] <<" ";
	}
	cout <<endl;
}

void intercala(int vetor[], int inicio, int meio, int fim){
	int i= inicio, j= meio;
	int tamanho= fim-inicio+1;
	int aux[tamanho];
	int k=0;
	while (i < meio and j <= fim){
		if (vetor[i] >= vetor[j]){
			aux[k]= vetor[i];
			k++;
			i++;
		} else {
			aux[k]= vetor[j];
			k++;
			j++;
		}
	}
	while (i < meio){
		aux[k]= vetor[i];
		k++;
		i++;
	}
	while (j <= fim){
		aux[k] = vetor[j];
		k++;
		j++;
	}
	for (int z=0; z < tamanho; z++){
		vetor[inicio+z]= aux[z];
	}
}
void mergeinte(int vetor[], int N){
	int b= 1;
	while (b < N){
		int inicio= 0;
		while (inicio+b < N){
			int fim= inicio+2 * b-1;
			if (fim >= N){
				fim= N-1;
			}
				intercala(vetor, inicio, inicio+b, fim);
				imprime(vetor, N);
			inicio= inicio+2 * b;
		}
		b= 2*b;
	}
}

int main (){
	int N;
	cin >> N;
	
	int vetor[N];
	
	for (int i=0; i < N; i++){
		cin >> vetor[i];
	}
	
	mergeinte(vetor, N);
	
	return 0;
}
