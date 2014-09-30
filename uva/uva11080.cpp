#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int V = 210;

vector<int> g[V];
int lbl[V];
int comp[V];

int n, m;
bool nope;
int c;

void dfs(int v) {
    comp[v] = c;
    for (int &u : g[v]) {
        if (lbl[u] == 0) {
            lbl[u] = -lbl[v];
            dfs(u);
        } else if (lbl[u] == lbl[v]) {
            nope = true;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            g[i].clear();
            lbl[i] = 0;
            comp[i] = 0;
        }
        for (int i = 0; i < m; ++i) {
            int a, b; cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        nope = false;
        c = 1;
        for (int i = 0; i < n; ++i) {
            if (lbl[i] == 0) {
                lbl[i] = 1;
                dfs(i);
            }
            ++c;
            if (nope)
                break;
        }
        if (!nope) {
            int total = 0;
            for (int i = 0; i < c; ++i) {
                int one = 0, minus = 0;
                for (int j = 0; j < n; ++j) {
                    if (comp[j] == i) {
                        if (lbl[j] == 1) ++one;
                        else ++minus;
                    }
                }
                if (one > 0 && minus > 0) {
                    total += min(one, minus);
                } else if (one == 0 && minus > 0) {
                    total += minus;
                } else if (one > 0 && minus == 0) {
                    total += one;
                }
            }
            cout << total << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
