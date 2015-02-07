#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int w[n+1], v[n+1];
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
            cin >> w[i];
        }
        long k;
        cin >> k;
        long r;
        cin >> r;
        long m[n + 1][k + 10];
        for (int i = 0; i <= k; ++i) m[0][i] = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= k; ++j) {
                if (w[i] <= j) {
                    m[i][j] = max(m[i-1][j], m[i-1][j-w[i]] + v[i]);
                } else {
                    m[i][j] = m[i-1][j];
                }
            }
        }
        if (m[n][k] < r) cout << "Falha na missao\n";
        else cout << "Missao completada com sucesso\n";
    }
    return 0;
}
