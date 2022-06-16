#include <iostream>
#include <fstream>

using namespace std;

float aureo(int N){
	if (N==1){
		return 1;
	} else {
		return (1 + (1/aureo(N-1)));
	}
}

int main (){
	int N;
	
	cin >> N;
	cout << aureo(N) <<endl;
	
	ofstream arquivo("phi.txt");
	
	for (int i=1; i <=N; i++){
		arquivo << aureo(i) << endl;
	}
	
	
	return 0;
}
