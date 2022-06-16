#include <iostream>
#include <math.h>

using namespace std;

struct empresa{
	int ID;
	int salario;
};
int particiona(empresa dados[], int A, int B){
	empresa aux=dados[A];
	int i=A+1, j=B;
	while (i <= j){
		if (dados[i].ID <= aux.ID){
			i++;
		} else if (aux.ID <= dados[j].ID){
			j--;
		} else {
			swap (dados[i], dados[j]);
			i++;
			j--;
		}
	}
	dados[A]= dados[j];
	dados[j]= aux;
	return j;
}
void quicksort(empresa dados[], int pos_pivo, int B){
	if (pos_pivo < B){
		int novo_pivo= particiona(&dados[0], pos_pivo, B);
		quicksort(&dados[0], pos_pivo, novo_pivo-1);
		quicksort(&dados[0], novo_pivo+1, B);
	}
}
void saida(empresa dados[], int N){
	int cont=0;
	for (int i=0; i < N*N; i++){
		cout << dados[i].ID <<" "<< dados[i].salario <<" ";
		cont++;
		if (cont==N){
			cout << endl;
			cont=0;
		}
	}
}

int main (){
	int A;
	cin >> A;
	
	int N= sqrt(A);
	
	empresa dados[N][N];
	
	for (int i=0; i < N; i++){
		for (int j=0; j < N; j++){
			cin >> dados[i][j].ID;
			cin >> dados[i][j].salario;
		}
	}
	quicksort(&dados[0][0], 0, A-1);
	saida(&dados[0][0], N);
	
	return 0;
}
/* FOMRA DE PONTEIRO
 * 
 * void altera(int *p, int tam){
 * 		for (int i=0; i < tam; i++){
 * 			p[i]= p[i]*2;
 * 		}
 * }
 * void imprimir(int *p, int tam){
 * 		for (int i=0; i < tam; i++){
 * 			cout << p[i] <<" ";
 * 		}
 * 		cout <<endl;
 * }
 * 
 * main--
 * int l=2, c=2;
 * int m[l][c];
 * for (int i=0; i < l; i++){
 * 		for (int j=0; j < c; j++){
 * 			cin >> m[i][j];
 * 		}
 * }
 * int *p= (int*)m;
 * 
 * altera (p, l*c);
 * imprimir (p, l*c);
 */
