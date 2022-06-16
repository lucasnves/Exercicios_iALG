#include <iostream>

using namespace std;

int main (){
	
	int N, P;
	cin >> N;
	int vetor[N];
	
	for (int i=0; i < N; i++){
		cin >> vetor[i];
	}
	
	cin >> P;
	for (int i=P+1; i < N; i++){
		cout << vetor[i] <<" ";
	}
	for (int i=0; i <= P; i++){
		cout << vetor[i] <<" ";
	} 
	
	return 0;
}
