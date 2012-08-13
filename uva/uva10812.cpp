#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int s, d; cin >> s >> d;
        if (s == d && s == 0) {
            cout << "0 0\n";
            continue;
        }
        if (s <= d) {
            cout << "impossible\n";
            continue;
        } else {
            double x = (s + d) / 2.0,
                y = (s - d) / 2.0;
            if (x >= 0 && y >= 0 && floor(x) == x && floor(y) == y) {
                cout << (int)x << ' ' << (int)y << endl;
            } else {
                cout << "impossible\n";
            }
        }
    }
    return 0;
}
