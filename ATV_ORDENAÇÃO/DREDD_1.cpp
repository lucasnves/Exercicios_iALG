#include <iostream>

using namespace std;

struct trabalho{
	int funcionario;
	float horas;
	float valor;
	float salario;
};
int ler_dados(trabalho dados[], int A){
	int cont=0;
	for (int i=0; i < A; i++){
		cin >> dados[i].funcionario;
		if (dados[i].funcionario < 0){
			return cont;
		}
		cin >> dados[i].horas;
		cin >> dados[i].valor;
		dados[i].salario= dados[i].horas*dados[i].valor;
		cont++;
	}
	return A;
}
int particiona(trabalho dados[], int A, int B){
	int i=A+1, j=B;
	float pivo= dados[A].salario;
	while (i <= j){
		if (dados[i].salario <= pivo){
			i++;
		} else if (pivo <= dados[j].salario){
			j--;
		} else {
			swap (dados[i], dados[j]);
			i++;
			j--;
		}
	}
	swap (dados[A], dados[j]);
	return j;
}
void quicksort(trabalho dados[], int pos_pivo, int B){
	if (pos_pivo < B){
		int novo_pivo= particiona(dados, pos_pivo, B);
		quicksort(dados, pos_pivo, novo_pivo-1);
		quicksort(dados, novo_pivo+1, B);
	}
}
void saida (trabalho dados[], int A){
	for (int i=0; i < A; i++){
		cout << dados[i].funcionario <<" "<< dados[i].salario <<endl;
	}
}
int main (){
	int A=100;
	
	trabalho dados[A];
	int cont= ler_dados(dados, A);
	quicksort(dados, 0, cont-1);
	saida(dados, cont);
	
	return 0;
}
