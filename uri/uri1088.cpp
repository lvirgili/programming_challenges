#include <iostream>
using namespace std;

const long N = 100010;

long inv;
long v[N];
long aux[N];

void merge(long l, long m, long r) {
    long i = l, j = m, k = l;
    while (i < m && j <= r) {
        if (v[i] <= v[j]) {
            aux[k] = v[i];
            ++i;
        } else {
            aux[k] = v[j];
            ++j;
            inv += m - i;
        }
        ++k;
    }

    while (i < m) {
        aux[k] = v[i];
        ++i; ++k;
    }

    while (j <= r) {
        aux[k] = v[j];
        ++j; ++k;
    }
    for (i=l; i <= r; i++)
        v[i] = aux[i];
}

void mergesort(long l, long r) {
    if (l < r) {
        long m = (l + r) / 2;
        mergesort(l, m);
        mergesort(m+1, r);
        merge(l, m+1, r);
    }
}

int main() {
    int t;
    while (cin >> t, t) {
        inv = 0;
        for (int i = 0; i < t; ++i) cin >> v[i];
        mergesort(0, t-1);
        if (inv % 2 != 0) cout << "Marcelo\n";
        else cout << "Carlos\n";
    }
    return 0;
}
