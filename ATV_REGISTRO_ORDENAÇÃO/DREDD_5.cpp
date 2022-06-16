#include <iostream>

using namespace std;

struct cartinha{
	string nome;
	string presente;
};
struct brinquedo{
	string brinque;
	int dispo;
	int qnt;
};
void faltando (cartinha cartas[], brinquedo presente[], int A, int B) {
	for (int i=0; i < B; i++){
		presente[i].qnt=0;
		for (int j=0; j < A; j++){
			if (cartas[j].presente == presente[i].brinque){
				presente[i].qnt+=1;
				if (presente[i].dispo - presente[i].qnt < 0){
					cout << presente[i].brinque <<" ";
				}
			}
		}
	}
}

int main (){
	int A, B;
	
	cin >> A;
	cartinha cartas[A];
	
	for (int i=0; i < A; i++){
		cin >> cartas[i].nome;
		cin >> cartas[i].presente;
	}
	
	cin >> B;
	brinquedo presente[B];
	
	for (int i=0; i < B; i++){
		cin >> presente[i].brinque;
		cin >> presente[i].dispo;
	}
	
	faltando (cartas, presente, A, B);
	
	return 0;
}
