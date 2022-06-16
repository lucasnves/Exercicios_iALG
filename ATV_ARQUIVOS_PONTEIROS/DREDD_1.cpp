#include <iostream>

using namespace std;

struct Hidrocarboneto{
	int C;
	int H;
};
int massa (Hidrocarboneto* composto){
	return (*composto).C*12 + (*composto).H*1;
}
int main (){
	Hidrocarboneto* composto= new Hidrocarboneto;
	
	cin >> (*composto).C;
	cin >> (*composto).H;
	
	cout << massa(composto) <<endl;
	
	delete composto;
	
	return 0;
}
