#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("pow.in");
	ofstream fout("pow.out");

	int a,b; 
	fin>>a>>b;

	long long result = 1;           
	for(int i = 1; i <= b;i++){ 
		result *= a;
	}
	if(result > 1000000000){
		fout<<-1;
	}else{
		fout<<result;
	}
	return 0;
}
