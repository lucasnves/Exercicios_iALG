#include <iostream>

using namespace std;

struct loja{
	string nome;
	string descricao;
	float preco;
	int avaliacao;
};
void intercala(loja produtos[], int inicio, int meio, int fim, string procurado) {
	int i= inicio, j= meio+1;
	int N= fim-inicio+1;
	bool achou= true;
	loja aux= produtos[fim];
	/*
	bool achou= true;
	string vn[N];
	string vd[N];
	float vp[N];
	int va[N];
	*/
	for (int p=0; p < fim; p++){
		if (produtos[p].nome==procurado){
			achou= false;
	for (int k=0; k < N; k++){
		if (i <= meio and j <= fim){
			if (produtos[i].avaliacao >= produtos[j].avaliacao){
				aux= produtos[i];
				/*
				vn[k]= produtos[i].nome;
				vd[k]= produtos[i].descricao;
				vp[k]= produtos[i].preco;
				va[k]= produtos[i].avaliacao;
				*/
				i++;
			} else {
				/*aux= produtos[j];
				vn[k]= produtos[j].nome;
				vd[k]= produtos[j].descricao;
				vp[k]= produtos[j].preco;
				va[k]= produtos[j].avaliacao;
				*/
				j++;
			}
		} else if (i > meio){
			/*aux= produtos[j];
			vn[k]= produtos[j].nome;
			vd[k]= produtos[j].descricao;
			vp[k]= produtos[j].preco;
			va[k]= produtos[j].avaliacao;
			*/
			j++;
		} else {
			/*aux= produtos[i];
			vn[k]= produtos[i].nome;
			vd[k]= produtos[i].descricao;
			vp[k]= produtos[i].preco;
			va[k]= produtos[i].avaliacao;
			*/
			i++;
		}
	}
	for (int k=0; k < N; k++){
		/*produtos[inicio+k]= aux;
		produtos[inicio+k].nome= vn[k];
		produtos[inicio+k].descricao= vd[k];
		produtos[inicio+k].preco= vp[k];
		produtos[inicio+k].avaliacao= va[k];
		*/
	}
		}
	}
	if (achou==true){
		cout << -1;
	}
	cout << "TESTEE" <<endl;
}
void mergeSort(loja produtos[], int inicio, int fim, string procurado){
	int meio=0;
	if (inicio < fim){
		meio= (inicio+fim)/2; 
		mergeSort(produtos, inicio, meio, procurado);
		mergeSort(produtos, meio+1, fim, procurado);
		intercala(produtos, inicio, meio, fim, procurado);
	}
}
/*void buscaBinaria (int vetor[], int n, int busca){
	int fim=n-1, inicio=0, pos=0, qtdLaco=0;
	int meio=0;
	bool achou=false;
	while (achou==false)
	{
		meio=(fim+inicio)/2;
		if (vetor[meio]==busca)
		{
			pos=meio;
			qtdLaco++;
			achou=true;
		}
		else if (fim<inicio)
		{
			achou=true;
			pos=-1;
			qtdLaco++;
		}
		else if (vetor[meio]<busca)
		{
			meio--;
			fim=meio;
			qtdLaco++;
		}
		else if (vetor[meio]>busca)
		{
			meio++;
			inicio=meio;
			qtdLaco++;
		}
		
	}
	cout<<pos<<endl<<qtdLaco<<endl;
}
*/
/*void procurar(loja produtos[], string procurado, int N){
	bool achou= true;
	
	for (int i=0; i < N; i++){
		if (produtos[i].nome==procurado){
			mergeSort(produtos, 0, N);
			achou= false;
		}
	}
	if (achou==true){
		cout << -1;
	}
}
*/

int main (){
	int N;
	
	cin >> N;
	
	loja produtos[N];
	
	for (int i=0; i < N; i++){
		cin >> produtos[i].nome;
		cin >> produtos[i].descricao;
		cin >> produtos[i].preco;
		cin >> produtos[i].avaliacao;
	}
	
	string procurado;
	
	cin >> procurado;
	
	//procurar(produtos, procurado, N);
	mergeSort(produtos, 0, N, procurado);
	for (int i=0; i < N; i++){
		cout << produtos[i].nome <<" ";
		cout << produtos[i].descricao <<" ";
		cout << produtos[i].preco <<" ";
		cout << produtos[i].avaliacao <<endl;
	}
	
	return 0;
}
