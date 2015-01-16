#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int c;
        cin >> c;
        int v[n];
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            v[i] -= c;
        }
        long max = 0;
        for (int i = 0; i < n; ++i) {
            long w = 0;
            for (int j = i; j < n; ++j) {
                w += v[j];
                if (max < w) {
                    max = w;
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}
