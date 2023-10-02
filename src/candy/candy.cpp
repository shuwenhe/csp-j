#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("candy.in");
	ofstream fout("candy.out");
	int n,l,r;
	int k;
	fin>>n>>l>>r;
	if(l<n*(r/n)&&n*(r/n)<r){
		k = n * (r/n) -1-n*(r/n-1);
	}else if(n*(r/n)<l){
		k = r - n;
	}
	fout<<k;
	return 0;
}