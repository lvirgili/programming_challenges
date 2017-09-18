#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    while (cin >> m) {
        double num = 0, den = 0;
        while (m--) {
            int n, c;
            cin >> n >> c;
            num += n * c;
            den += c;
        }
        printf("%.4lf\n", num / (den * 100));
    }
    return 0;
}