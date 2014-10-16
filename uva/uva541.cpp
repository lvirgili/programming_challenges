#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n != 0) {
        int slin[n], scol[n];
        for (int i = 0; i < n; ++i)
            slin[i] = scol[i] = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int x; cin >> x;
                slin[i] += x;
                scol[j] += x;
            }
        }
        int lin = -1, col = -1;
        int wlines = 0, wcols = 0;
        for (int i = 0; i < n; ++i) {
            if (slin[i] % 2 != 0) {
                lin = i;
                ++wlines;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (scol[i] % 2 != 0) {
                col = i;
                ++wcols;
            }
        }
        if (wlines == 0 && wcols == 0) {
            cout << "OK\n";
        } else if (wlines == 1 && wcols == 1) {
            cout << "Change bit (" << lin+1 << "," << col+1 << ")\n";
        } else {
            cout << "Corrupt\n";
        }
    }
    return 0;
}
