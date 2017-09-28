#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long seq[18];
    seq[1] = 0;
    seq[2] = 1;
    for (int i = 3; i < 18; ++i) {
        if (i % 2 == 0) {
            seq[i] = seq[i - 1] * seq[i - 2];
        } else {
            seq[i] = seq[i - 1] + seq[i - 2];
        }
    }
    int x;
    while (cin >> x) {
        cout << seq[x] << endl;
    }
    return 0;
}