#include <iostream>
using namespace std;

unsigned long fat[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

long long to_dec(long x) {
    long long ret = 0;
    int pos = 1;
    while (x) {
        ret += (x % 10) * fat[pos++];
        x /= 10;
    }
    return ret;
}

int main() {
    long x;
    while (cin >> x, x) {
        cout << to_dec(x) << endl;
    }
    return 0;
}
