#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore(256, '\n');
    while (t--) {
        string a, b, c;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        int p1 = -1, p2;
        for (unsigned i = 0; i < c.size(); ++i) {
            if (c[i] == '_') {
                if (p1 == -1) {
                    p1 = i;
                } else {
                    p2 = i;
                }
            }
        }
        if (a[p1] == b[p2] || a[p2] == b[p1]) {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}