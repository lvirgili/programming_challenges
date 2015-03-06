#include <iostream>
#include <cstring>
using namespace std;

const int N = 1024;

bool g[N][N];
int comp[N];
int c;

int n, m;

void dfs(int v) {
    comp[v] = c;
    for (int i = 1; i <= n; ++i) {
        if (g[v][i] && comp[i] == 0) {
            dfs(i);
        }
    }
}

int main() {
    cin >> n >> m;
    memset(g, 0, sizeof g);
    memset(comp, 0, sizeof comp);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        g[a][b] = g[b][a] = 1;
    }
    c = 1;
    for (int i = 1; i <= n; ++i) {
        if (comp[i] == 0) {
            dfs(i);
            ++c;
        }
    }
    cout << c - 1 << endl;
    return 0;
}
