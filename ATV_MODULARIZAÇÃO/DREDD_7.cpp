#include <iostream>

using namespace std;

void seque(int n, int i=0){
	cout << i <<" ";
	if (n > i){
		seque(n, i+1);
	}
}
int main (){
	int n;
	cin >> n;
	seque(n);
	
	return 0;
}
