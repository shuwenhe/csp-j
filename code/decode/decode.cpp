#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("decode.in");
	ofstream fout("decode.out");
	int k;
	fin>>k;
	for(int i = 0;i < k;i++){
		long long n,d,e;
		fin>>n>>d>>e;
		long long s = n - d * e + 2;
		long long l = 1,r = s - 1;
		long long p = -1, q = -1;

		while(l <= r){
			long long mid  = l + (r - l) / 2;
			if(mid * (s - mid) == n){
				p = mid;


			}
		}

	}
}
