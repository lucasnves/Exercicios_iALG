#include <iostream>

using namespace std;

int maior(int n, int n2, int n3, int n4, int n5){
	cout << n <<" "<< n2 <<" "<< n3 <<" "<< n4 <<" "<< n5 << endl;
	if (n > n2 and n > n3 and n > n4 and n > n5){
		return n;
	} 
	else if (n2 > n and n2 > n3 and n2 > n4 and n2 > n5){
		return n2;
	} 
	else if (n3 > n and n3 > n2 and n3 > n4 and n3 > n5){
		return n3;
	} 
	else if (n4 > n and n4 > n2 and n4 > n3 and n4 > n5){
		return n4;
	} 
	else if (n5 > n and n5 > n2 and n5 > n3 and n5 > n4){
		return n5;
	}
	return 0;
}
int main (){
	
	int n, n2, n3, n4, n5;
	cin >> n >> n2 >> n3 >> n4 >> n5;
	cout << maior(n, n2, n3, n4, n5) <<endl;
	
	return 0;
}
