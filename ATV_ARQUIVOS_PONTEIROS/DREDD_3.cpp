#include <iostream>

using namespace std;

int *matriz(int **M){
	int *B= new int[5];
	for (int i=0; i < 5; i++){
		int soma=0;
		for (int j=0; j < 5; j++){
			B[i]= soma+= M[j][i];
		}
	}
	return B;
}

int main (){
	int **M;
	M= new int*[5];
	
	for (int i=0; i < 5; i++){
		M[i]= new int[5];
	}
	for (int i=0; i < 5; i++){
		for (int j=0; j < 5; j++){
			cin >> M[i][j];
		}
	}
	
	int *B= matriz(M);
	for (int i=0; i < 5; i++){
		cout << B[i] <<" ";
	}
	for (int i=0; i < 5; i++){
		delete[] M[i];
	}
	delete[] M;
	delete[] B;
	
	return 0;
}
