#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int m[n+1][n+1];
        for (int i = 1; i <= n; ++i) {
            int c = 1;
            for (int j = i; j <= n; ++j) {
                m[i][j] = m[j][i] = c;
                ++c;
            }
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                printf("%3d", m[i][j]);
                if (j < n) cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
}
