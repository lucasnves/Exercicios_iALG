#include <iostream>

using namespace std;

int main (){
	
	int A, m1=0, m2=0;
	float soma1=0, soma2=0;
	cin >> A;
	int M[A][A];
	
	for (int i=0; i < A; i++){
		for (int j=0; j < A; j++){
			cin >> M[i][j];
		}
	}
	
	for (int i=0; i < A; i++){
		for (int j=0; j < A; j++){
			if (i > j or i==j){
				soma1+=M[i][j];
				m1++;
			} if (i+j >= A-1){
				soma2+=M[i][j];
				m2++;
			}
		}
	}
	float media1= soma1/m1;
	float media2= soma2/m2;
	cout<< media1 <<endl;
	cout << media2 <<endl;
	
	return 0;
}
