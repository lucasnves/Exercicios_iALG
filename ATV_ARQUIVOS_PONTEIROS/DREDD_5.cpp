#include <iostream>
#include <iomanip>
using namespace std;

int **AlocarMatriz(int nroLinhas, int nroColunas){
	int **matriz= new int*[nroLinhas];
	for (int i=0; i < nroLinhas; i++){
		matriz[i]= new int[nroColunas];
	}
	return matriz;
}
	
void DesalocarMatriz(int **matriz, int nroLinhas){
	for (int i=0; i < nroLinhas; i++){
		delete[] matriz[i];
	}
	delete[] matriz;
}
	
void Somar(int **m1, int **m2, int nroLinhas, int nroColunas, int **resultado) {
	for (int lin = 0; lin < nroLinhas; ++lin) {
		for (int col = 0; col < nroColunas; ++col) {
			resultado[lin][col] = m1[lin][col] + m2[lin][col];
		}
	}
}
	
void LerMatriz(int **matriz, int nroLinhas, int nroColunas){
	for (int lin = 0; lin < nroLinhas; ++lin) {
		for (int col = 0; col < nroColunas; ++col) {
			cin >> matriz[lin][col];
		}
	}
}
	
int main() {
	int nLins, nCols;
	cin >> nLins >> nCols;
	
	int** m1 = AlocarMatriz(nLins, nCols);
	LerMatriz(m1, nLins, nCols);
	
	int** m2 = AlocarMatriz(nLins, nCols);
	LerMatriz(m2, nLins, nCols);
	
	int** m3 = AlocarMatriz(nLins, nCols);
	Somar(m1, m2, nLins, nCols, m3);
	
	for (int lin = 0; lin < nLins; ++lin){
		for (int col = 0; col < nCols; ++col){
			cout << setw(5) << m3[lin][col];
		}
		cout << "\n";
	}
	
	DesalocarMatriz(m1, nLins);
	DesalocarMatriz(m2, nLins);
	DesalocarMatriz(m3, nLins);
	return 0;
}
