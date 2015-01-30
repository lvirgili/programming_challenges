#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

const long MAXV = 2048;

bool g[MAXV][MAXV];
bool rg[MAXV][MAXV];

long n, m;
long comp[MAXV];
long sp[MAXV];
long rsp[MAXV];
long r;

stack<long> s;

void dfs(long v) {
    sp[v] = 1;
    for (long i = 1; i <= n; ++i) {
        if (g[v][i] && sp[i] == 0) {
            dfs(i);
        }
    }
    s.push(v);
}

void rdfs(long v) {
    rsp[v] = 1;
    for (long i = 1; i <= n; ++i) {
        if (rg[v][i] && rsp[i] == 0) {
            rdfs(i);
        }
    }
    ++r;
}


int main() {
    while (cin >> n >> m, n) {
        memset(g, 0, sizeof g);
        memset(rg, 0, sizeof rg);
        memset(comp, 0, sizeof comp);
        memset(sp, 0, sizeof sp);
        memset(rsp, 0, sizeof rsp);
        r = 0;
        long a, b, t;
        for (long i = 0; i < m; ++i) {
            cin >> a >> b >> t;
            if (t == 1) {
                g[a][b] = true;
                rg[b][a] = true;
            } else {
                g[a][b] = g[b][a] = true;
                rg[a][b] = rg[b][a] = true;
            }
        }
        for (long i = 1; i <= n; ++i) {
            if (sp[i] == 0) {
                dfs(i);
            }
        }
        long v = s.top();
        rdfs(v);
        if (r == n) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
