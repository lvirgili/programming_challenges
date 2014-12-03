#include <iostream>
using namespace std;

int main() {
    int b, n;
    while (cin >> b >> n, b) {
        int r[b + 1];
        for (int i = 1; i <= b; ++i) {
            cin >> r[i];
        }
        while (n--) {
            int d, c, v;
            cin >> d >> c >> v;
            r[d] -= v;
            r[c] += v;
        }
        bool yeap = true;
        for (int i = 1; i <= b; ++i) {
            if (r[i] < 0) {
                yeap = false;
                break;
            }
        }
        if (yeap) cout << "S\n";
        else cout << "N\n";
    }
    return 0;
}
