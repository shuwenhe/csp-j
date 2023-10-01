#include <bits/stdc++.h>

using namespace std;

int main(){
	ifstream fin("pow.in");
	ofstream fout("pow.out");
	int a,b;
	fin>>a>>b;
	long long result = 1;
	for(int i = 0; i < b; i++){
		result *= a;
		if(result > 1e9){
			fout<<-1;
			return 0;
		}
	}

	fout<<result<<'\n';
	return 0;
}
