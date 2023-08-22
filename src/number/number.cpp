#include <bits/stdc++.h>

using namespace std;

int main(){
	ifstream fin("number.in");
	ofstream fout("number.out");
	
	string str;
	fin>>str;

	long count = 0;
	for(long i = 0; i < str.length(); i++){
		if(str[i] == '1'){
			count++;
		}
	}
	fout<<count;
	fin.close();
	fout.close();
	return 0;
}
