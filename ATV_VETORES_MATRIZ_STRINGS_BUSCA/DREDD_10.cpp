#include <iostream>

using namespace std;

int main (){
	
	int A, B;
	cin>> A >> B;
	float M[A][B];
	
	for(int i=0; i < A; i++){
		for (int j=0; j < B; j++){
				cin >> M[i][j];
		}
	}
	
	float mlinha, mcoluna;
	cin >> mlinha >> mcoluna;
	
	float soma=0;
	for(int i=0; i < A; i++){
		for (int j=0; j < B; j++){
			if (i%2==0){
				M[i][j]= M[i][j]*mlinha;
			}  
			if (j%2==1){
				M[i][j]= M[i][j]*mcoluna;
			}
			soma+=M[i][j];
		}
	}
	cout << soma << endl;
	
	return 0;
}
