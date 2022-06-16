#include <iostream>

using namespace std;

int main (){
	
	int N, i, posicao=-1;
	cin >> N;
	string vetor[N], S;
	
	for (i=0; i < N; i++){
		cin >> vetor[i];
	}
	
	cin >> S;
	
	for (i=0; i < N and vetor[i]!=S; i++){
	}
	if (i!=N){
		posicao=i;
	}
	
	cout << posicao <<endl;
	
	return 0;
}
