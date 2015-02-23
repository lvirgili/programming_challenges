#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int v[n];
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v, v+n, greater_equal<int>());
    for (int i = 0; i < m; ++i) cout << v[i] << endl;
    return 0;
}
