#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        unsigned long tot = 0;
        while (n--) {
            unsigned long x, y;
            cin >> x >> y;
            if (y % 2 == 0) tot += y;
            else tot += y-1;
        }
        cout << tot / 4 << endl;
    }
    return 0;
}
