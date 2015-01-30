#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

const long M = 200010;
const long I = LONG_MAX;

vector< pair<long, long> > g[M];
typedef pair< pair<long, long>, long> pll;

bool comp(const pll &a, const pll &b) {
    return a.second < b.second;
}

long p[M];
long m, n;

long cor[M];
long sz[M];

long cst[M], fr[M];
long k;
pair < pair<long, long>, long > mst[M];
pair < pair<long, long>, long > a[M];

void init() {
    for (long v = 0; v < m; ++v) {
        cor[v] = v;
        sz[v] = 1;
    }
}

long find(long i) {
    while (i != cor[i]) i = cor[i];
    return i;
}

long ufind(long i, long w) {
    return (find(i) == find(w));
}

void uunion(long v0, long w0) {
    long v = find(v0), w = find(w0);
    if (v == w) return;
    if (sz[v] < sz[w]) {
        cor[v] = w;
        sz[w] += sz[v];
    } else {
        cor[w] = v;
        sz[v] += sz[w];
    }
}

void kruskal() {
    k = 0;
    sort(a, a + n, comp);
    init();
    for (long i = k = 0; i < n && k < m - 1; ++i) {
        if (!ufind(a[i].first.first, a[i].first.second)) {
            uunion(a[i].first.first, a[i].first.second);
            mst[k] = a[i];
            k++;
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
            a[i].first = make_pair(x, y);
            a[i].second = z;
        }
        kruskal();
        long t = 0;
        for (long i = 0; i < k; ++i) t += mst[i].second;
        for (long i = 1; i < m; ++i) {
            t += cst[i];
        }
        cout << total - t << endl;
        for (long i = 0; i < m; ++i) g[i].clear();
    }
    return 0;
}
