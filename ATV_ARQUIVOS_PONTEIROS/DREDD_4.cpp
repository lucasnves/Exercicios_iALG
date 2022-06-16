#include <iostream>

using namespace std;

float *obterVetor (int N){
	float *vetor= new float[N];
	for (int i=0; i < N; i++){
		int fat=1;
		for (int j=1; j <= i; j++){
			fat*= j;
		}
		vetor[i]= (i*i + 1.75)/(2*fat + + i);
	}
	return vetor;
}

int main (){
	int N, M;
	
	cin >> N;
	
	float *V= obterVetor(N);
	
	cin >> M;
	
	for (int i=M; i < N; i++){
		cout << V[i] <<endl;
	}
	
	delete [] V;
	
	return 0;
}
