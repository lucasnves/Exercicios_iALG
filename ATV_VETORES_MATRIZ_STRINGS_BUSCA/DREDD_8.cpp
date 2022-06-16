#include <iostream>

using namespace std;

int main (){
	
	int A, menor, linha=0;
	cin >> A;
	int M[A][A];
	
	for (int i=0; i < A; i++){
		for (int j=0; j < A; j++){
			cin >> M[i][j];
		}
	}
	menor= M[0][0];
	for (int i=0; i < A; i++){
		for (int j=0; j < A; j++){
			if (M[i][j] <= menor){
				linha=i;
				menor= M[i][j];
			}
		}
	}
	cout << linha <<endl;
	
	return 0;
}
