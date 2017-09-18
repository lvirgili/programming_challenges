#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int m; cin >> m;
    int v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v, v + n);
    int total = 0;
    int p = n - 1;
    int last;
    while (total < m) {
        last = v[p];
        --p;
        ++total;
    }
    while (v[p] == last) {
        --p; ++total;
    }
    cout << total << endl;
    return 0;
}