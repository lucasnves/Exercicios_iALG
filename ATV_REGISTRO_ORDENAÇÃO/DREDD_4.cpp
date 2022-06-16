#include <iostream>

using namespace std;

struct alimentos{
	string comida;
	int qnt;
};
struct professores{
	string prof;
	alimentos alim1;
	alimentos alim2;
};

int main (){
	
	int A, B;
	
	cin >> A;
	alimentos necess[A];
	
	for (int i=0; i < A; i++){
		cin >> necess[i].comida;
		cin >> necess[i].qnt;
	}
	
	cin >> B;
	professores dados[B];
	
	for (int i=0; i < B; i++){
		cin >> dados[i].prof;
		cin >> dados[i].alim1.comida;
		cin >> dados[i].alim1.qnt;
		cin >> dados[i].alim2.comida;
		cin >> dados[i].alim2.qnt;
	}
	
	
	for (int i=0; i < A; i++){
		int soma= necess[i].qnt;
		for (int j=0; j < B; j++){
			if (necess[i].comida == dados[j].alim1.comida){
				soma-= dados[j].alim1.qnt;
			} else if (necess[i].comida == dados[j].alim2.comida){
				soma-= dados[j].alim2.qnt;
			}
		}
		cout << necess[i].comida <<" "<< soma<<endl;
	}
	
	return 0;
}
