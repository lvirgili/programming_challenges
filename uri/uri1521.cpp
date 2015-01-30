#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int a[n+1];
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            a[i] = x;
        }
        int k;
        cin >> k;
        while (a[k] != k) {
            k = a[k];
        }
        cout << k << endl;
    }
    return 0;
}
