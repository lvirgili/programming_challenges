#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c < a) {
            swap(a, c);
            swap(b, d);
        }
        double diff = (d - b) / (c - a);
        unsigned long long i = diff;
        unsigned long long dec = 100 * (diff - i);
        printf("%llu,%02llu\n", i, dec);
    }
    return 0;
}
