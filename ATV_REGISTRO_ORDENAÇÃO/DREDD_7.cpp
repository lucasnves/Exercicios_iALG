#include <iostream>

using namespace std;

void insertion (int vetor[], int N){
	int pivo, j;
	
	for (int i=1; i < N; i++){
		pivo= vetor[i];
		j= i-1;
		
		while (j>=0 and pivo > vetor[j]){
			vetor[j+1]= vetor[j];
			j--;
		}
		vetor[j+1]= pivo;
		
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
