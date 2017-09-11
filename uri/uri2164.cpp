#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double res = pow((1 + sqrt(5))/ 2, n) - pow((1 - sqrt(5))/ 2, n);
    res /= sqrt(5);
    printf("%.1lf\n", res);
    return 0;
}
