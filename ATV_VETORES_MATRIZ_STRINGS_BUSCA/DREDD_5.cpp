#include <iostream>

using namespace std;

int main (){
	
	string palavra;
	cin >> palavra;
	int cont=0;
	
	for (unsigned i=0; i < palavra.size(); i++){
		if (palavra[i]=='a' or palavra[i]=='e' or palavra[i]=='i' 
			or palavra[i]=='o' or palavra[i]=='u'){
				cont++;
		}
	}
	cout << cont << endl;
	
	return 0;
}
