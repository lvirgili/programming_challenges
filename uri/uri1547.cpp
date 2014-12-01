#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int min = 0x7fffffff;
        int a;
        bool done = false;
        for (int i = 0; i < n; ++i) {
            int k;
            cin >> k;
            int diff = abs(k - x);
            if (diff == 0 && !done) {
                cout << i + 1 << endl;
                done = true;
            } else if (diff < min) {
                min = diff;
                a = i + 1;
            }
        }
        if (!done) cout << a << endl;
    }
    return 0;
}
