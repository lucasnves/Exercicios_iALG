#include <iostream>

using namespace std;

struct mercado{
	string produto;
	string marca;
	float preco;
};
void saida(mercado armazenado[], int N){
	for (int i=0; i < N; i++){
		cout << armazenado[i].produto <<" "
			 << armazenado[i].marca <<" "
			 << armazenado[i].preco <<endl;
	}
}
void shellSort(mercado armazenado[], int N){
	int gaps[9]= {1, 4, 10, 23, 57, 132, 301, 701, 1750};
	int gape= 8;
	
	while (gaps[gape] > N){
		gape--;
	}
	
	int gap= gaps[gape];
	mercado aux;
	
	while (gape >= 0){
		for (int i=gap; i < N; i++){
			aux= armazenado[i];
			int j=i;
			while ((j >= gap) and ((aux.preco < armazenado[j-gap].preco) or (aux.preco==armazenado[j-gap].preco and aux.produto < armazenado[j-gap].produto))){
				armazenado[j]=armazenado[j-gap];
				j=j-gap;
			}
			armazenado[j]=aux;
		}
		gape--;
		gap= gaps[gape];
	}
}
int main (){
	int N;
	cin >> N;
	
	mercado armazenado[N];
	
	for (int i=0; i < N; i++){
		cin >> armazenado[i].produto;
		cin >> armazenado[i].marca;
		cin >> armazenado[i].preco;
	}
	
	shellSort(armazenado, N);
	saida(armazenado, N);
	
	return 0;
}
