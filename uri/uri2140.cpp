#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    int values[] = {2, 5, 10, 20, 50, 100};
    while (cin >> n >> m, n && m) {
        bool ok = false;
        int change = m - n;
        for (int i = 0; i < 6; ++i) {
            for (int j = 0; j < 6; ++j) {
                if (values[i] + values[j] == change) {
                    ok = true;
                }
            }
        }
        if (ok) {
            cout << "possible\n";
        } else {
            cout << "impossible\n";
        }
    }
    return 0;
}
