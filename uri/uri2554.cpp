#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    while (scanf("%d %d", &n, &d) != EOF) {
        int day, month, year;
        bool printed = false;
        for (int j = 0; j < d; ++j) {
            scanf("%d/%d/%d", &day, &month, &year);
            int total = 0;
            for (int i = 0; i < n; ++i) {
                int x;
                scanf("%d", &x);
                total += x;
            }
            if (total == n && !printed) {
                printf("%d/%d/%d\n", day, month, year);
                printed = true;
            }
        }
        if (!printed) printf("Pizza antes de FdI\n");
    }
    return 0;
}