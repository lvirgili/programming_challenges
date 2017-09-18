#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int b[n + 2][m + 2];
        memset(b, 0, sizeof b);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> b[i][j];
            }
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (b[i][j] == 1) cout << 9;
                else {
                    cout << b[i-1][j] + b[i+1][j] + b[i][j-1] + b[i][j+1];
                }
            }
            cout << endl;
        }
    }
    return 0;
}