#include <iostream>

using namespace std;

int main (){
	
	int N, maior=0;
	cin >> N;
	string palavra[N];
	
	for (int i=0; i < N; i++){
		cin >> palavra[i];
		
	int t= palavra[i].size();
		if (t > maior){
			maior= t;
		}
	}
	for (int i=0; i < N; i++){
		int t= palavra[i].size();
		if (t < maior){
			for (int i=0; i < maior - t; i++){
				cout << "*";
			}
		}
		cout << palavra[i] << endl;
	}
	
	return 0;
}
