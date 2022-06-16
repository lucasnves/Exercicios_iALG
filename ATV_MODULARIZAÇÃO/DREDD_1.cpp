#include <iostream>

using namespace std;

int teste(int n){
	int soma=0;
	int resto=0;
	while (n != 0){
		resto = n%10;
		n = (n-resto)/10;
		soma+= resto;
	}
	return soma;
}
bool har(int n){
	if (n%teste(n)==0){
		return true;
	} 
	else {
		return false;
	}
}
int main (){
	int n;
	cin >> n;
	if (har(n)==true){
		cout <<"True"<<endl;
	} else {
		cout <<"False"<<endl;
	}
	return 0;
}
