#include <iostream>
#include <fstream>

using namespace std;

struct registro{
	string nome;
	int chave;
};

int particiona(registro v[], int c, int f){
	registro pivo= v[c];
	int i= c+1, j= f;
	while (i <= j){
		if (v[i].chave <= pivo.chave){
			i++;
		} else if (pivo.chave <= v[j].chave){
			j--;
		} else {
			swap (v[i],v[j]);
			i++;
			j--;
		}
	}
	v[c]= v[j];
	v[j]= pivo;
	return j;
}
void quicksort(registro a[], int pos_pivo, int fim){
	int pos_novo_pivo;
	if (pos_pivo < fim){
		pos_novo_pivo = particiona(a, pos_pivo, fim);
		quicksort(a, pos_pivo, pos_novo_pivo - 1);
		quicksort(a, pos_novo_pivo + 1, fim);
	}
}
void buscar(int A, int buscando, string nome_arq, registro *P){
	fstream arquivo(nome_arq.c_str());
	
	int i=0, achou= -1;
	
	while (i < A and achou== -1){
		
		arquivo.seekp(i*sizeof(registro));
		arquivo.read((char *) P, sizeof(registro));
		
		if(buscando == (*P).chave){
			cout << (*P).nome <<endl;
			achou= i;
		}
		i++;
	}
	if (achou == -1){
		cout << "-1" <<endl;
	}
	arquivo.close();
}
int main()
{
	int A;
	cin >> A;
	
	registro *P= new registro[A];
	
	for (int i=0; i < A; i++){
		cin >> P[i].nome >> P[i].chave;
	}
	
	quicksort(P, 0, A-1);
	
	string nome_arq;
	cin >> nome_arq;
	
	ofstream arquivo(nome_arq.c_str());
	
	arquivo.write((const char *) P, sizeof(registro)*A);
	arquivo.close();
	
	int buscando;
	cin >> buscando;
	
	buscar(A, buscando, nome_arq, P);
	
	P= NULL;
	delete P;
	
	return 0;
}
