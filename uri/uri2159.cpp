#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n; cin >> n;
    double min = n / log(n);
    double max = 1.25506 * min;
    printf("%.1f %.1f\n", min, max);
    return 0;
}
