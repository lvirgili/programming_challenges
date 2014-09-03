#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int t;
    int v[n];
    for (int i = 0; i < n; ++i)
        v[i] = m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> t;
            if (t != 0 && v[i] == m)
                v[i] = j;
        }
    }

    bool ok = true;
    bool z = (v[0] == m) ? true : false;
    for (int i = 1; i < n; ++i) {
        if (v[i] == m && !z)
            z = true;
        if (z && v[i] != m) {
            ok = false;
            break;
        }
        if (!z && v[i] <= v[i-1]) {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}
