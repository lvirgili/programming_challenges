#include <iostream>
using namespace std;

const int V = 128;

bool g[V][V];
int lbl[V];

int n, m;
int c;

void dfs(int v) {
    lbl[v] = 1;
    ++c;
    for (int i = 1; i <= n; ++i) {
        if (g[v][i] && lbl[i] == 0)
            dfs(i);
    }
}

int main() {
    int t = 1;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        for (int i = 0; i <= n; ++i) {
            lbl[i] = 0;
            for (int j = 0; j <= n; ++j) {
                g[i][j] = 0;
            }
        }
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            g[x][y] = g[y][x] = 1;
        }
        c = 0;
        dfs(1);
        cout << "Teste " << t++ << endl;
        if (c == n)
            cout << "normal\n\n";
        else
            cout << "falha\n\n";
    }
    return 0;
}

