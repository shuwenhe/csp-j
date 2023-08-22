#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("number.in");
	ofstream fout("number.out");
	string str;
	fin>>str;
	int result = 0;
	for(int i = 0;i < str.length();i++){
		if(str[i] == '1'){
			result += 1;
		}
	}
	fout<<result;
	return 0;
}
