#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

const long M = 200010;
const long I = LONG_MAX;

vector< pair<long, long> > g[M];

long p[M];
long m, n;

long cst[M], fr[M];

vector<long> q;

void push(long x) {
    q.push_back(x);
}

long pop() {
    long i = q[0];
    long m = cst[0];
    long pos = 0;
    for (long j = 1; j < q.size(); ++j) {
        if (cst[q[j]] < m) {
            m = cst[q[j]];
            i = q[j];
            pos = j;
        }
    }
    swap(q[pos], q[q.size() - 1]);
    q.pop_back();
    return i;
}

void prim() {
    for (long i = 0; i < m; ++i) {
        p[i] = -1;
        cst[i] = I;
    }
    fr[0] = 0;
    cst[0] = 0;
    push(0);
    while (q.size()) {
        long v = pop();
        p[v] = fr[v];
        for (auto &w : g[v]) {
            if (p[w.first] == -1) {
                if (cst[w.first] == I) {
                    cst[w.first] = w.second;
                    fr[w.first] = v;
                    push(w.first);
                } else if (cst[w.first] > w.second) {
                    cst[w.first] = w.second;
                    fr[w.first] = v;
                }
            }
        }
    }
}

int main() {
    while (cin >> m >> n, m) {
        long long total = 0;
        for (long i = 0; i < n; ++i) {
            long x, y, z;
            cin >> x >> y >> z;
            g[x].push_back(make_pair(y, z));
            g[y].push_back(make_pair(x, z));
            total += z;
        }
        prim();
        long t = 0;
        // for (long i = 0; i < m; ++i) cout << p[i] << ' ';
        // cout << endl;
        for (long i = 1; i < m; ++i) {
            t += cst[i];
        }
        cout << total - t << endl;
        for (long i = 0; i < m; ++i) g[i].clear();
        q.clear();
    }
    return 0;
}
