#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("decode.in");
	ofstream fout("decode.out");
	int k;
	fin>>k;
	for(int i = 0; i < k;i++){
		long long n,d,e;
		bool found = false;
		for(long long p = 2;p * p <= n;p++){
			if (n % p == 0){
				long long q = n / p;
				if ((p - 1)*(q - 1) + 1 == d * e ){
					fout<<p<<""<<q<<endl;
					found = true;
					break;
				}
			}

		}
		if (!found){
			fout<<"NO"<<endl;
		}
	}
	fin.close();
	fout.close();
	return 0;
}
