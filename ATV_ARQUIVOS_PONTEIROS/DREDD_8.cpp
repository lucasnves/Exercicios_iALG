#include <iostream>
#include <fstream>

using namespace std;

int main (){
	ifstream arquivo("matriz.txt");
	
	int t;
	
	arquivo >> t;
	
	int M[t][t];
	bool simetrica= true;
	
	while (not arquivo.eof()){
		for (int i=0; i < t; i++){
			for (int j=0; j < t; j++){
				arquivo >> M[i][j];
			}
		}
	}
	for (int i=0; i < t; i++){
		for (int j=0; j < t; j++){
			if (M[i][j] != M[j][i] and simetrica){
				simetrica= false;
			}
		}
	}
	if (simetrica==false){
		cout << "nao simetrica" <<endl;
	} else {
		cout << "simetrica" <<endl;
	}
	
	return 0;
}
