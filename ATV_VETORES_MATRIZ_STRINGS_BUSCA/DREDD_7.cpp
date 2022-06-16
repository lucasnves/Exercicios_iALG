#include <iostream>

using namespace std;

int main (){
	
	int A, B;
	cin >> A >> B;
	int M[A][B];
	
	for (int i=0; i < A; i++){
		for (int j=0; j < B; j++){
			cin >> M[i][j];
		}
	}
	
	int i=0, j=0, k=A-1, s=A-2;
	
	while (i < A){
		j=0;
		while (j < B){
			cout<< M[k][j] <<" ";
			j++;
		}
		i++;
		j=(B-1);
		if (i < A){
			while (j >= 0){
				cout << M[s][j] <<" ";
				j--;
			}
			i++;
		}
		k-=2;
		s-=2;
	}
	
	return 0;
}
