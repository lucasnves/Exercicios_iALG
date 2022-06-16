#include <iostream>

using namespace std;

int res(int &n){
	int ante= n-1;
	n++;
	return ante;
}
int main (){
	int n;
	cin >> n;
	int numero=n;
	int ante= res(n);
	cout << ante <<" "<< numero <<" "<< n << endl;
	
	return 0;
}
