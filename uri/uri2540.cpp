#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    while (cin >> m) {
        int t = 0;
        for (int i = 0; i < m; ++i) {
            int x; cin >> x;
            t += x;
        }
        if (t >= (2.0 * m) / 3) {
            cout << "impeachment\n";
        } else {
            cout << "acusacao arquivada\n";
        }
    }
    return 0;
}