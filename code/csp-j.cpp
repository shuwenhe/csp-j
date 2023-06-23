#include <iostream>
#include <fstream>

using namespace std;

// 2022CSP-J2-pow乘方
int pow() {
    ifstream fin("pow.in");
    ofstream fout("pow.out");

    int a, b;
    fin >> a >> b;

    long long result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
        if (result > 1000000000) {
            fout << -1 << endl;
            return 0;
        }
    }

    fout << result << endl;

    fin.close();
    fout.close();

    return 0;
}

// 2022CSP-J2-decode解密
bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int decode() {
    ifstream inputFile("decode.in");
    ofstream outputFile("decode.out");

    int k;
    inputFile >> k;

    for (int i = 0; i < k; ++i) {
        int n, d, e;
        inputFile >> n >> d >> e;

        int p = -1, q = -1;
        for (int j = 2; j * j <= n; ++j) {
            if (n % j == 0 && isPrime(j)) {
                p = j;
                break;
            }
        }
        if (p == -1) {
            outputFile << "NO\n";
            continue;
        }
        q = n / p;

        if ((p - 1) * (q - 1) + 1 != e * d) {
            outputFile << "NO\n";
            continue;
        }

        outputFile << p << " " << q << "\n";
    }

    inputFile.close();
    outputFile.close();

    return 0;
}

int main(){
	decode();
}
