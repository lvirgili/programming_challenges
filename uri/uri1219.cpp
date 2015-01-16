#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        double s = (a + b + c) / 2.0;
        double at = sqrt(s * (s - a) * (s - b) * (s - c));
        double rc = (a * b * c) / (4.0 * at);
        double ac = M_PI * rc * rc;
        double ri = at / s;
        double ai = M_PI * ri * ri;
        printf("%.4lf %.4lf %.4lf\n", ac - at, at - ai, ai);
    }
    return 0;
}
