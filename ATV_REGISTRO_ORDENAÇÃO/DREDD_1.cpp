#include <iostream>

using namespace std;

struct viloes{
	string vilao;
	string alvo;
};
struct plano{
	string nplano;
	string nvilao;
	int preju;
};

int main (){
	
	int a, b;
	string busca;
	bool ntem=true;
	
	cin >> a;
	viloes Valvos[a];
	
	for (int i=0; i < a; i++){
		cin >> Valvos[i].vilao;
		cin >> Valvos[i].alvo;
	}
	
	cin >> b;
	plano planos[b];
	
	for (int i=0; i < b; i++){
		cin >> planos[i].nplano;
		cin >> planos[i].nvilao;
		cin >> planos[i].preju;
	}
	
	cin >> busca;
	for (int i=0; i < a; i++){
		for (int j=0; j < b; j++){
			if (Valvos[i].alvo == busca and Valvos[i].vilao == planos[j].nvilao){
				cout << planos[j].nplano <<" "<< planos[j].preju << endl;
				ntem= false;
			}
		}
	}
	if (ntem==true){
		cout << -1;
	}
	
	return 0;
}
