#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int h, c, l;
        cin >> h >> c >> l;
        double x = sqrt(h*h + c*c);
        printf("%.4lf\n", n * x * l * 0.0001);
    }
    return 0;
}