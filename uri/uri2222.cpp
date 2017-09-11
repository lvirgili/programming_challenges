#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long nat;

int main() {
    int t; cin >> t;
    for (int tt = 0; tt < t; ++tt) {
        int n; scanf("%d", &n);
        int ss[n][61];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 61; ++j) {
                ss[i][j] = 0;
            }
        }
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            while (x--) {
                int y; scanf("%d", &y);
                ss[i][y] = 1;
            }
        }
        int nop; cin >> nop;
        while (nop--) {
            int op, set1, set2;
            scanf("%d %d %d", &op, &set1, &set2);
            --set1; --set2;
            if (op == 1) { // i
                int total = 0;
                for (int i = 1; i <= 60; ++i) {
                    if (ss[set1][i] == 1 && ss[set2][i] == 1) ++total;
                }
                printf("%d\n", total);
            } else if (op == 2) { // u
                int total = 0;
                for (int i = 1; i <= 60; ++i) {
                    if (ss[set1][i] || ss[set2][i]) ++total;
                }
                printf("%d\n", total);
            }
        }
    }
    return 0;
}
