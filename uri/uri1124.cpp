#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l, c, r1, r2;
    while (cin >> l >> c >> r1 >> r2, l) {
        if (2*r1 <= l && 2*r1 <= c && 2*r2 <= l && 2*r2 <= c) {
            double d = hypot(c - r2 - r1, l - r2 - r1);
            if (d >= r1 + r2) {
                cout << "S\n";
            } else {
                cout << "N\n";
            }
        } else {
            cout << "N\n";
        }
    }
    return 0;
}
