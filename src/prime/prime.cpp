#include<iostream>
#include<fstream>

using namespace std;

bool is_prime(int num){
    if (num < 2) return false;
    for (int i = 2; i <= num/i; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main(){
    ifstream fin("prime.in");
    ofstream fout("prime.out");
    int num;
    fin>>num;
    bool b = is_prime(num);
    fout<<b;
    return 0;
}