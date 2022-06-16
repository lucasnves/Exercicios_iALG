#include <iostream>

using namespace std;

int pas(int n, int n2){
	int s;
	s= n + n2;
	return s;
}

int main (){
	int a, b;
	cin >> a >> b;
	cout << pas(a,b) << endl;
	
	return 0;
}
