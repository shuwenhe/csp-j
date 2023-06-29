#include <iostream>
#include <fstream>

using namespace std;

// 判断一个数是否为素数
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// 解密函数
void decode(int n, int d, int e) {
    for (int p = 2; p < n; p++) {
        if (n % p == 0 && isPrime(p)) {
            int q = n / p;
            int phi = (p - 1) * (q - 1);
            if ((e * d) % phi == 1) {
                cout << p << " " << q << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int k;
    ifstream input("decode.in");
    ofstream output("decode.out");

    input >> k;
    for (int i = 0; i < k; i++) {
        int n, d, e;
        input >> n >> d >> e;
        decode(n, d, e);
    }

    input.close();
    output.close();

    return 0;
}
