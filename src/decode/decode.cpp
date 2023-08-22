#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("decode.in");
	ofstream fout("decode.out");

	long long k;
	fin>>k;
	for(long long i = 1;i <= k; i++ ){
		long long n,d,e;
		fin>>n>>d>>e;
		long long s;
		s = n - d*e +2;
		long long left = 1,right = s-1;
		long long p = -1,q = -1;
		while(left <= right){
			long long mid = left + (right - left)/2;
			if(mid*(s-mid)==n){
				p = mid;
				q = s - mid;
				break;
			}else if(mid*(s - mid)<n){
				left = mid + 1;
			}else{
				right = mid - 1;
			}
		}
		if(p != -1 && q != -1 && p<q){
			fout<<p<<" "<<q<<endl;
		}else{
			fout<<"NO"<<endl;
		}
	}
	fin.close();
	fout.close();
	return 0;
}
