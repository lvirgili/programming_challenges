#include <iostream>
using namespace std;

int main() {
    unsigned long long h[64];
    h[0] = 1;
    for (int i = 1; i <= 60; ++i) {
        if (i % 2 == 0) {
            h[i] = h[i-1] + 1;
        } else {
            h[i] = 2 * h[i-1];
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << h[n] << endl;
    }
    return 0;
}
