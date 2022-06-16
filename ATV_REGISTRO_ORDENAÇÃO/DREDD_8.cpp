#include <iostream>

using namespace std;

void insertion (int vetor[], int N){
	int i=0, j=N-2, aux;
	while (j >= 0){
		aux= vetor[j];
		i= j+1; 
		while (i < N and vetor[i] > aux){
			vetor[i-1]= vetor[i];
			i++;
		}
		vetor[i-1]= aux;
		j--;
		
		for (int i=0; i < N; i++){
			cout << vetor[i] <<" ";
		}
		cout << endl;
	}
}

int main(){
	int N;
	
	cin>> N;
	int vetor[N];
	
	for (int i=0; i < N; i++){
		cin >> vetor[i];
	}
	
	insertion (vetor, N);
	
	return 0;
}
