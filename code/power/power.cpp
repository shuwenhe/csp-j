#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	ifstream fin("power.in");
	ofstream fout("power.out");
	int n;
	vector<int> partition;
	fin>>n;
	for(int i = 30; i >= 0; i--){
		int power = 1<<i;
		if(n >= power){
			cout<<"power = "<<power<<endl;
			partition.push_back(power);
			n -= power;
		}
	}
	for(int i = 0; i <= partition.size();i++){
		if(partition[i] != 0){
			fout<<partition[i];
			fout<<" ";
		}
	}
	fin.close();
	fout.close();
	return 0;
}
