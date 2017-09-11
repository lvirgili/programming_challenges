#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int t[n + 2][m + 2];
    for (int i = 0; i < n + 2; ++i) {
        for (int j = 0; j < m + 2; ++j) {
            t[i][j] = 0;
        }
    }
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            cin >> t[i][j];
        }
    }

    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            if (t[i][j] == 42) {
                bool found = true;
                for (int k = i - 1; k <= i + 1; ++k) {
                    for (int l = j - 1; l <= j + 1; ++l) {
                        if (k == i && l == j) continue;
                        if (t[k][l] != 7) {
                            found = false;
                            break;
                        }
                    }
                }
                if (found) {
                    cout << i << ' ' << j << endl;
                    return 0;
                }
            }
        }
    }
    cout << "0 0\n";
    return 0;
}
