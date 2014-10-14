#include <iostream>
using namespace std;

const int V = 512;

bool g[V][V];
int lbl[V];

int n;

bool yes;

void dfs(int v) {
    for (int i = 1; i <= n ; ++i) {
        if (g[v][i]) {
            if (lbl[i] == 0) {
                lbl[i] = -lbl[v];
                dfs(i);
            } else if (lbl[i] == lbl[v]) {
                yes = false;
                return;
            }
        }
    }
}

int main() {
    while (cin >> n, n != 0) {
        for (int i = 1; i <= n; ++i) {
            lbl[i] = 0;
            for (int j = 1; j <= n; ++j) {
                g[i][j] = 0;
            }
        }
        int a, b;
        while (cin >> a >> b) {
            if (a == 0 && b == 0) break;
            g[a][b] = g[b][a] = 1;
        }
        yes = true;
        for (int i = 1; i <= n; ++i) {
            if (lbl[i] == 0) {
                lbl[i] = 1;
                dfs(i);
            }
            if (!yes) break;
        }
        if (yes) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
