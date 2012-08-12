#include <iostream>
using namespace std;

bool adj[101][101];
int lbl[101], ts[101];

int n, m, cnt;

void dfs(int v) {
    lbl[v] = 0;
    for (int i = 1; i <= n; ++i) {
        if (adj[v][i] == true && lbl[i] == -1) {
            dfs(i);
        }
    }
    ts[cnt] = v;
    --cnt;
}

int main() {
    while (cin >> n >> m) {
        if (n == m && m == 0) {
            break;
        }
        cnt = n;
        for (int i = 1; i <= n; ++i) {
            lbl[i] = -1;
            ts[i] = -1;
            for (int j = 0; j < n; ++j) {
                adj[i][j] = false;
            }
        }
        for (int i = 0; i < m; ++i) {
            int v, w;
            cin >> v >> w;
            adj[v][w] = true;
        }
        for (int i = 1; i <= n; ++i) {
            if (lbl[i] == -1) {
                dfs(i);
            }
        }
        for (int i = 1; i <= n; ++i) {
            cout << ts[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
