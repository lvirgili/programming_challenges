#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int t[n][m];
    int linha;
    int max = 0;
    for (int i = 0; i < n; ++i) {
        linha = 0;
        for (int j = 0; j < m; ++j) {
            cin >> t[i][j];
            linha += t[i][j];
        }
        if (linha > max) max = linha;
    }
    int coluna;
    for (int i = 0; i < m; ++i) {
        coluna = 0;
        for (int j = 0; j < n; ++j) {
            coluna += t[j][i];
        }
        if (coluna > max) max = coluna;
    }
    cout << max << endl;
    return 0;
}
