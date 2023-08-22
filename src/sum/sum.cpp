#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("sum.in");
	ofstream fout("sum.out");

	int n;
	fin>>n;
	// 等差数列求和公式 = (首项+末项)*项数/2
	// Gauss function
	int sum = 0;
	sum = (1+n)*n/2; // O(1) < O(lgn) < O(n) < O(n*lgn) < O(n*n = n^2)  

	fout<<sum;
	return 0;
}
