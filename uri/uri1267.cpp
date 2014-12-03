#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, d;
    while (cin >> n >> d, n) {
        int a[n + 1];
        memset(a, 0, sizeof a);
        for (int i = 0; i < d; ++i) {
            for (int j = 0; j < n; ++j) {
                int x;
                cin >> x;
                a[j] += x;
            }
        }
        bool yeap = false;
        for (auto &e : a) {
            if (e == d) {
                yeap = true;
                break;
            }
        }
        if (yeap) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
