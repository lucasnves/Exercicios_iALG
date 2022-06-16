#include <iostream>
#include <fstream>

using namespace std;

int main (){
	string entrada, saida;
	
	cin >> entrada;
	cin >> saida;
	
	ifstream entrar(entrada.c_str());
	ofstream sair(saida.c_str());
	
	string dados;
	
	while (entrar >> dados){
		sair << dados;
	}
	
	return 0;
}
