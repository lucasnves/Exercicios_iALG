#include <iostream>

using namespace std;

bool procurar(int **m, int A, int B, int procurado){
	for (int i=0; i < A; i++){
		for (int j=0; j < B; j++){
			if (procurado == m[i][j]){
				return true;
			}
		}
	}
	return false;
}

int main (){
	int A, B;
	
	cin >> A;
	cin >> B;
	
	int **M= new int*[A];
	
	for (int i=0; i < A; i++){
		M[i]= new int [B];
	}
	for (int i=0; i < A; i++){
		for (int j=0; j < B; j++){
			cin >> M[i][j];
		}
	}
	int procurado;
	
	cin >> procurado;
	
	cout << procurar(M, A, B, procurado) << endl;
	
	for (int i=0; i < A; i++){
		delete[] M[i];
	}
	delete[] M;
	
	return 0;
}
