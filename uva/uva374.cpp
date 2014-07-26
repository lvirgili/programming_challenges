#include <iostream>
using namespace std;

unsigned long modpow(unsigned long B, unsigned long p, long M) {
    unsigned long res = 1;
    B %= M;
    while (p > 0) {
        if (p % 2 == 1)
            res = (res * B) % M;
        p /= 2;
        B = (B * B) % M;
    }
    return res;
}

int main() {
    unsigned long B, p, M;
    while (cin >> B >> p >> M) {
        cout << modpow(B, p, M) << endl;
    }
    return 0;
}
