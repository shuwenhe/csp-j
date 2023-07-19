// a^b = a * a * a ... * a 
// a^b > 1000000000 -> -1
// a^b -> pow.out

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("pow.in");
	ofstream fout("pow.out");

	int a,b; // 
	fin>>a>>b;

	long long result = 1;       // [1,b] 1,2,...,b      
	for(int i = 0; i < b;i++){ // [0,b) 1,2,...b-1 2^3 = 2*2*2
		result *= a;
	}
	fout<<result;
	return 0;
}
