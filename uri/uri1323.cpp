#include <iostream>
#include <cstring>
using namespace std;

int main() {
    unsigned long v[101];
    memset(v, 0, sizeof v);
    for (int i = 1; i <= 100; ++i) {
        v[i] = i * i;
        for (int j = 2; j <= i; ++j) {
            v[i] += (i + 1 - j) * (i + 1 - j);
        }
    }
    int n;
    while (cin >> n, n) cout << v[n] << endl;
    return 0;
}
