#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        double best = 0;
        for (int i = 1; i <= n; ++i) {
            int t, d;
            cin >> t >> d;
            double new_time = 1.0 * d / t;
            if (new_time > best) {
                best = new_time;
                cout << i << endl;
            }
        }
    }
    return 0;
}