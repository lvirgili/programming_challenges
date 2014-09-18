#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 10000;
int v, e;

vector<int> g[N+1];
int lbl[N+1];

bool f;

void dfs(int i) {
    if (lbl[i] == -1) {
        f = false;
        return;
    }
    if (lbl[i] == 1)
        return;
    lbl[i] = -1;
    for (auto &j : g[i]) {
        dfs(j);
        if (!f) break;
    }
    lbl[i] = 1;
}

int main() {
    int T; scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%d %d", &v, &e);
        for (int i = 1; i <= v; ++i) {
            g[i].clear();
            lbl[i] = -2;
        }
        for (int i = 0; i < e; ++i) {
            int a, b; scanf("%d %d", &a, &b);
            if (count(g[a].begin(), g[a].end(), b) == 0)
                g[a].push_back(b);
        }
        f = true;
        for (int i = 1; i <= v; ++i) {
            if (lbl[i] == -2) {
                dfs(i);
                if (!f) break;
            }
        }
        if (f)
            cout << "NAO\n";
        else
            cout << "SIM\n";
    }
    return 0;
}
