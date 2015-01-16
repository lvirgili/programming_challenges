#include <iostream>
#include <algorithm>
using namespace std;

long m;

bool comp(long const &a, long const &b) {
    long ra = a % m;
    long rb = b % m;
    if (ra != rb) {
        if (ra < rb) return true;
        else return false;
    } else {
        if (a % 2 == 0 && b % 2 != 0) {
            return false;
        } else if (a % 2 != 0 && b % 2 == 0) {
            return true;
        } else if (a % 2 == 0 && b % 2 == 0) {
            return a <b;
        } else {
            return a > b;
        }
    }
}

int main() {
    int n;
    while (cin >> n >> m, n) {
        int v[n];
        for (int i = 0; i < n; ++i) cin >> v[i];
        sort(v, v + n, comp);
        cout << n << ' ' << m << endl;
        for (int i = 0; i < n; ++i) cout << v[i] << endl;
    }
    cout << "0 0\n";
    return 0;
}
