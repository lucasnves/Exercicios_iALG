#include <iostream>

using namespace std;

void busca (int V[], int tam, int procurado){
	
	int posi=0, posf=tam-1, meio;
	
	while (posi <= posf){
		meio= (posi+posf)/2;
		
		if (procurado < V[meio]){
			cout << V[meio] <<" ";
			posf= meio-1;
		} else if (procurado == V[meio]){
			cout << V[meio] <<" ";
			posi= posf+1;
		} else {
			cout << V[meio] <<" ";
			posi= meio+1;
		}
	}
}

int main (){
	
	int A, procurado;
	cin >> A;
	int V[A];
	
	for (int i=0; i < A; i++){
		cin >> V[i];
	}
	
	cin >> procurado;
	
	busca(V, A, procurado);
	
	return 0;
}
