#include <iostream>
#include <cstring>
using namespace std;

int main() {
    long long v[100010];
    memset(v, 0, sizeof v);
    v[1] = 0;
    v[2] = 1;
    v[3] = 1;
    for (long long i = 4; i <= 100000; ++i) {
        long long j = i / 3;
        if (i % 3 != 0) ++j;
        v[i] = j + v[j];
    }

    long n;
    while (cin >> n, n) {
        cout << v[n] << endl;
    }
    return 0;
}
