#include <iostream>

using namespace std;

int main (){
	
	int M[3][3];
	int k=0;
	
	for (int i=0; i < 3; i++){
		for (int j=0; j < 3; j++){
			cin >> M[i][j];
		}
	}
		for (int i=0; i < 3; i++){
			if (M[i][0]==1 and M[i][1]==1 and M[i][2]==1){
				k=1;
			} else if (M[i][0]==2 and M[i][1]==2 and M[i][2]==2){
				k=2;
			}
		}
		for (int j=0; j < 3; j++){
			if (M[0][j]==1 and M[1][j]==1 and M[2][j]==1){
				k=1;
			} else if (M[0][j]==2 and M[1][j]==2 and M[2][j]==2){
				k=2;
			} 
		}
		if (M[0][0]==1 and M[1][1]==1 and M[2][2]==1){
			k=1;
		} else if (M[0][0]==2 and M[1][1]==2 and M[2][2]==2){
			k=2;
		} else if (M[0][2]==1 and M[1][1]==1 and M[2][0]==1){
			k=1;
		} else if (M[0][2]==2 and M[1][1]==2 and M[2][0]==2){
			k=2;
		}
		cout << k <<endl;
		
	return 0;
}
