#include <iostream>
#include <map>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;

int main() {
    int n;
    while (cin >> n) {
        map<ll, ll> v;
        set<ll> u;
        for (int i = 1; i <= n; ++i) {
            ll x;
            cin >> x;
            v[i] = x;
            u.insert(i);
        }
        long q;
        cin >> q;
        while (q--) {
            int op;
            ll x, y;
            cin >> op;
            if (op != 3) cin >> x >> y;
            else cin >> x;
            if (op == 4) {
                bool dec = true, inc = true, eq = true;
                for (long long i = x; i < y; ++i) {
                    if (u.count(i) == 0 || u.count(i+1) == 0) continue;
                    if (v[i] != v[i + 1]) eq = false;
                    if (v[i] < v[i + 1]) inc = false;
                    if (v[i] > v[i + 1]) dec = false;
                }
                if (eq) cout << "ALL EQUAL\n";
                else if (dec) cout << "NON DECREASING\n";
                else if (inc) cout << "NON INCREASING\n";
                else cout << "NONE\n";
            } else if (op == 0) {
                swap(v[x], v[y]);
            } else if (op == 1) {
                v[x] = y;
            } else if (op == 2) {
                v[x] = y;
            } else {
                v.erase(3);
                u.erase(3);
            }
            for (auto &e : v) {
                if (u.count(e.first) == 0) continue;
                cout << e.first << ' ' << e.second << endl;
            }
            cout << "-------\n";
        }
    }
    return 0;
}
