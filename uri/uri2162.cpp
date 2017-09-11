#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i) cin >> v[i];
    if (n == 1) {
        cout << "1\n";
        return 0;
    }
    if (n == 2) {
        if (v[0] != v[1]) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
        return 0;
    }
    bool sit;
    if (v[0] < v[1]) sit = true;
    else if (v[0] > v[1]) sit = false;
    else {cout << "0\n"; return 0;}
    for (int i = 1; i < n - 1; ++i) {
        if (sit) {
            // next has to be smaller
            if (v[i] > v[i + 1]) {
                sit = false;
            } else {
                cout << "0\n";
                return 0;
            }
        } else {
            if (v[i] < v[i + 1]) {
                sit = true;
            } else {
                cout << "0\n";
                return 0;
            }
        }
    }
    cout << "1\n";
    return 0;
    return 0;
}
