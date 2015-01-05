#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int quant[181];
    memset(quant, 0, sizeof quant);
    int x = 0, y = 0;
    while (x < 360) {
        y = (y + 6) % 360;
        if (y % 72 == 0) x += 6;
        int ang = max(x-y, y-x);
        if (ang > 180) ang = 360 - ang;
        ++quant[ang];
    }
    int a;
    while (cin >> a) {
        if (quant[a] > 0) cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}
