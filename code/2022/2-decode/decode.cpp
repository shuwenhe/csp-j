#include <iostream>
#include <fstream>

using namespace std;

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
