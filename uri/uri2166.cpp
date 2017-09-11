#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double sq = 1.0;
    double den = 0;
    while (n--) {
        den = 1.0 / (2.0 + den);
    }
    printf("%.10lf\n", sq + den);
    return 0;
}
