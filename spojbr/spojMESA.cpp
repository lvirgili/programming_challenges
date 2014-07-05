#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;

int g[109][109];
int c[109];
int m, n;
bool f;

void color(int v) {
    for (int u = 1; u <= n; ++u) {
        if (g[v][u]) {
            if (c[u] == 0) {
                c[u] = -c[v];
                color(u);
            } else {
                if (c[u] == c[v]) {
                    f = false;
                    return;
                }
            }
        }
    }
}

int main() {
    int t = 1;
    while (cin >> n >> m) {
        f = true;
        for (int i = 1; i <= n; ++i) {
            c[i] = 0;
            for (int j = 1; j <= n; ++j) {
                g[i][j] = 0;
            }
        }
        for (int i = 0; i < m; ++i) {
            int x, y;
            scanf("%d %d", &x, &y);
            g[x][y] = g[y][x] = 1;
        }
        for (int i = 1; i <= n; ++i) {
            if (c[i] == 0) {
                c[i] = 1;
                color(i);
            }
        }
        printf("Instancia %d\n%s\n\n", t, f ? "sim" : "nao");
        ++t;
    }
    return 0;
}
