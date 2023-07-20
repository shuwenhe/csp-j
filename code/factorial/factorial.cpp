#include <iostream>
#include <fstream>

using namespace std;

long long factorial(int num){
long long result = 1;
for(int i = 1; i <= num; i++){
result *= i;
}
return result;
}

int main(){
ifstream fin("factorial.in");
ofstream fout("factorial.out");

int num;
long long result;
fin>>num;
result = factorial(num);
fout>>result;
return 0;
}
