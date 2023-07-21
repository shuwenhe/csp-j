#include <iostream>
#include <fstream>

using namespace std;

int gcd(int a,int b){
    return b ? gcd(b,a%b) : a;
}

int main(){
    ifstream fin("gcd.in");
    ofstream fout("gcd.out");

    int a,b;
    fin>>a>>b;
    int num = gcd(a,b);
    fout<<num;
    return 0;
}