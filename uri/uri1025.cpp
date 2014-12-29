#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long n, q;
    int c = 1;
    while (cin >> n >> q, n || q) {
        long m[n];
        for (int i = 0; i < n; ++i)
            cin >> m[i];
        sort(m, m + n);
        cout << "CASE# " << c++ << ":\n";
        while (q--) {
            long x;
            cin >> x;
            auto lower = lower_bound(m, m + n, x);
            if (m[lower - m] == x) {
                cout << x << " found at " << lower - m + 1 << endl;
            } else {
                cout << x << " not found\n";
            }
        }
    }
    return 0;
}
