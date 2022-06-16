#include <iostream>

using namespace std;

void imprimir (int vetor[], int A, int B, bool troca, bool orden, int tam){
	for (int i=0; i < tam; i++){
		if (orden==0){
			if (i==A or i==B){
				if (troca==1){
					cout << vetor[i] <<" t	";
				}
				else{
					cout << vetor[i] <<" *	";
				}
			}else{
				cout << vetor[i] <<"	";
			}
		}else{
			cout << vetor[i] <<"	";
		}
	}
	cout << endl;
}
bool trocar (int vetor[], int A, int B){
	if (vetor[A] > vetor[B]){
		return true;
	}
	else{
		return false;
	}
}
void bubble (int vetor [], int tam){
	bool troca=false, orden=false;
	int A, B, k=tam-1, aux;
	for (int i=0; i < tam; i++){
		for (int j=0; j < k; j++){
			A=j;
			B=j+1;
			troca= trocar(vetor, A, B);
			if (troca==true){
				imprimir(vetor, A, B, troca, orden, tam);
				aux= vetor[j];
				vetor[j]= vetor[j+1];
				vetor[j+1]= aux;
			}
			else{
				imprimir(vetor, A, B, troca, orden, tam);
			}
		}
		k-=1;
	}
	imprimir(vetor, A, B, false, true, tam);
}
int main (){
	int N;
	
	cin >> N;
	int vetor[N];
	
	for (int i=0; i < N; i++){
		cin >> vetor[i];
	}
	
	bubble(vetor, N);
	
	return 0;
}
