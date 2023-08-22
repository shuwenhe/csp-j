#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("pow.in");
	ofstream fout("pow.out");
	
	long long a,b;
	fin>>a>>b;

	long long result = 1;
	for(long i = 0; i < b; i++){
		result *= a;
		if(result > 1e9){
			fout<<-1;
			return 0;
		}
	}
	fout<<result;

	fin.close();
	fout.close();

	return 0;
}
