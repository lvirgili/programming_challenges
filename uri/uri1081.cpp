#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int m[21][32];
int lbl[21];
int level;
int V, E;
bool yeah;

void dfs(int v) {
    level += 2;
    for (int u = 0; u < V; ++u) {
        if (m[v][u]) {
            if(lbl[u] == -1) {
                yeah = true;
                lbl[u] = v;
                printf("%*c%d-%d pathR(G,%d)\n", level, ' ', v, u, u);
                dfs(u);
            } else {
                printf("%*c%d-%d\n", level, ' ', v, u);
            }
        }
    }
    level -= 2;
}

int main() {
    int N; cin >> N;
    for (int n = 0; n < N; ++n) {
        cin >> V >> E;
        memset(m, 0, sizeof(m));
        memset(lbl, -1, sizeof(lbl));
        for (int i = 0; i < E; ++i) {
            int a, b; cin >> a >> b;
            m[a][b] = 1;
        }
        cout << "Caso " << n + 1 << ":\n";
        for (int v = 0; v < V; ++v) {
            level = 0;
            yeah = false;
            if (lbl[v] == -1) {
                lbl[v] = v;
                dfs(v);
                if (yeah)
                    cout << endl;
            }
        }
    }
    return 0;
}
