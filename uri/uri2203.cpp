#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long nat;

int main() {
    int xf, yf, xi, yi, vi, r1, r2;
    while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2) {
        double delta_x = 1.0 * xf - 1.0 * xi;
        double delta_y = 1.0 * yf - 1.0 * yi;
        double dist = sqrt(delta_x * delta_x + delta_y * delta_y);
        double disti = dist + 1.5 * vi;
        double max = r1 + r2;
        if (max >= disti) {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}
