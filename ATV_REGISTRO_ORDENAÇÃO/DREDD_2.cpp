#include <iostream>

using namespace std;

struct dispo{
	string cesta;
	int quant;
};
struct preparo{
	string visi;
	string cesta;
};

int main(){
	int A, B, soma=0;
	
	cin >> A;
	dispo preparar[A];
	
	for (int i=0; i < A; i++){
		cin >> preparar[i].cesta;
		cin >> preparar[i].quant;
	}
	
	cin >> B;
	preparo vender[B];
	
	for (int i=0; i < B; i++){
		cin >> vender[i].visi;
		cin >> vender[i].cesta;
	}
	
	for (int i=0; i < A; i++){
		for (int j=0; j < B; j++){
			if ((preparar[i].cesta) == (vender[j].cesta)){
				soma+= preparar[i].quant;
			}
		}
	}
	cout << soma <<endl;
	
	 return 0;
}
