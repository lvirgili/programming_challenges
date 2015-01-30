#include <iostream>
#include <algorithm>
using namespace std;

const long M = 128;

struct e {
    int a, b;
    long k;
    int tipo;
};

bool comp(const e &aa, const e &ab) {
    if (aa.tipo == 0 && ab.tipo == 1) return true;
    else if (aa.tipo == 1 && ab.tipo == 0) return false;
    return aa.k < ab.k;
}

long m, n;

long cor[M];
long sz[M];

long k;
e mst[M];
e a[M*M];

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
    for (long i = 0; i < n && k < m; ++i) {
        if (!ufind(a[i].a, a[i].b)) {
            uunion(a[i].a, a[i].b);
            mst[k] = a[i];
            ++k;
        }
    }
}

int main() {
    long f, r;
    cin >> m >> f >> r;
    long i;
    for (i = 0; i < f; ++i) {
        long x, y, z;
        cin >> x >> y >> z;
        a[i].a = x;
        a[i].b = y;
        a[i].k = z;
        a[i].tipo = 0;
    }
    for (long j = 0; j < r; ++j) {
        long x, y, z;
        cin >> x >> y >> z;
        a[i].a = x;
        a[i].b = y;
        a[i].k = z;
        a[i].tipo = 1;
        ++i;
    }
    n = i;
    kruskal();
    long t = 0;
    for (long j = 0; j < k; ++j) {
        t += mst[j].k;
    }
    cout << t << endl;
    return 0;
}
