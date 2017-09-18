#include <bits/stdc++.h>
using namespace std;

double sin_deg(double angle) {
    return sin(angle * M_PI / 180);
}

int main() {
    double pent_side;
    while (cin >> pent_side) {
        printf("%.10lf\n", pent_side * sin_deg(108) / sin_deg(117));
    }
    return 0;
}