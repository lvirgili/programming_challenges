#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int p; cin >> p;
    double total = 0.0;
    while (p--) {
        int code, q; cin >> code >> q;
        total += ((code % 1000) + 0.5) * q;
    }
    printf("%.2lf\n", total);
    return 0;
}
