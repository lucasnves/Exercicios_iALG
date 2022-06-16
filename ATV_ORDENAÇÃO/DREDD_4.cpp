#include <iostream>
#include <math.h>

using namespace std;

struct pizzaria {
	string nome;
	int cordx;
	int cordy;
	float valor;
	float distancia;
};
float calcular(float x1, float y1, float x2,float y2){
	float t, total;
	t= pow(x1-x2,2) + pow(y1-y2,2);
	total= sqrt(t);
	return total;
}
void shellSort(pizzaria clientes[], int N){
	int gaps[9]= {1, 4, 10, 23, 57, 132, 301, 701, 1750};
	int gape= 8;
	
	while (gaps[gape] > N){
		gape--;
	}
	
	int gap= gaps[gape];
	pizzaria aux;
	
	while (gape >= 0){
		for (int i=gap; i < N; i++){
			aux= clientes[i];
			int j=i;
			while (j >= gap and aux.distancia < clientes[j-gap].distancia){
				clientes[j]=clientes[j-gap];
				j=j-gap;
			}
			clientes[j]=aux;
		}
		gape--;
		gap= gaps[gape];
	}
}
void imprimir(pizzaria clientes[], int T){
	float soma=0;
	for (int i=0; i < T; i++){
		soma+= clientes[i].valor;
	}
	cout << soma <<endl;
}

int main (){
	int T, codx, cody, N;
	
	cin >> T >> codx >> cody >> N;
	
	pizzaria clientes[N];
	
	for (int i=0; i < N; i++){
		cin >> clientes[i].nome;
		cin >> clientes[i].cordx;
		cin >> clientes[i].cordy;
		cin >> clientes[i].valor;
		clientes[i].distancia= calcular(clientes[i].cordx, clientes[i].cordy, codx, cody);
	}
	shellSort(clientes, N);
	imprimir(clientes, T);
	
	return 0;
}
