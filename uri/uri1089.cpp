#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int v[n];
        for (int i = 0; i < n; ++i) cin >> v[i];
        int p = 0;
        for (int i = 0; i < n; ++i) {
            int bef, aft;
            bef = (i - 1) % n;
            aft = (i + 1) % n;
            if (bef < 0) bef += n;
            if ((v[i] > v[bef] && v[i] > v[aft]) ||
                (v[i] < v[bef] && v[i] < v[aft])) {
                ++p;
            }
        }
        cout << p << endl;
    }
    return 0;
}
