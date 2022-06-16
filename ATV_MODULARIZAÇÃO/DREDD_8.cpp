#include <iostream>

using namespace std;

int discos(int n){
	if (n==1){
		return 1;
	} else{
		return 2*discos(n-1)+1;
	}
}

int main (){
	int num;
	cin >> num;
	cout << discos(num) << endl;
	
	return 0;
}
