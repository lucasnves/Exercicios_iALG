#include <iostream>

using namespace std;

struct politico{
	string partido;
	string nome;
};
struct operacao{
	string opf;
	string nome;
	int valor;
};

int main (){
	
	int A, B;
	
	cin >> A;
	politico cadastrar[A];
	
	for (int i=0; i < A; i++){
		cin >> cadastrar[i].partido;
		cin >> cadastrar[i].nome;
	}
	
	cin >> B;
	operacao cadastro[B];
	
	for (int i=0; i < B; i++){
		cin >> cadastro[i].opf;
		cin >> cadastro[i].nome;
		cin >> cadastro[i].valor;
	}
	
	string part, busca;
	int soma=0;
	cin >> part >> busca;
	
	for (int i=0; i < A; i++){
		if (cadastrar[i].partido == part){
			for (int j=0; j < B; j++){
				if (cadastrar[i].nome == cadastro[j].nome and
					cadastro[j].opf == busca){
						soma+= cadastro[j].valor;
				}
			}
		}
	}
	cout << soma <<endl;
	
	return 0;
}
