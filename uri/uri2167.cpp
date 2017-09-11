#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i = 1; i < n; ++i) {
        if (v[i] < v[i-1]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
