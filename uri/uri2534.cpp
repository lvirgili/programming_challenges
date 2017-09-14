#include <bits/stdc++.h>
using namespace std;

bool comp (int i, int j) {
    return i > j;
}

int main() {
    int n, q;
    while (cin >> n >> q) {
        int c[n];
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }
        sort(c, c + n, comp);
        while (q--) {
            int p; cin >> p;
            cout << c[p - 1] << endl;
        }
    }
    return 0;
}