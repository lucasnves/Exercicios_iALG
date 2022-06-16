#include <iostream>

using namespace std;

int h(int n);

int funcao(int n){
	if (n==0){
		return 1;
	} else if (n%2==0){
		return 2*h(n)+funcao(n-1);
	} else{
		return 2*h(n)-funcao(n-1);
	}
}
int h(int n){
	if (n > 0){
		return h(n-1)+funcao(n-1);
	} else{
		return 0;
	}
}
int main (){
	int num;
	cin >> num;
	cout << funcao(num) << endl;
	
	return 0;
}
