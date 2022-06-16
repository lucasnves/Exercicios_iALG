#include <iostream>

using namespace std;

double aureo(int n){
	if (n==1){
		return 1;
	} else {
		return 1+(1/(aureo(n-1)));
	}
}

int main (){
	int num;
	cin >> num;
	cout << aureo(num) << endl;

	return 0;
}
