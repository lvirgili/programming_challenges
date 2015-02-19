#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int p = 0;
        bool t[n];
        for (int i = 0; i < n; ++i) cin >> t[i];
        int cont = 1;
        if (t[0] == 0) {
            // going backwards
            int i = n - 1;
            while (t[i] == 0 && i >= 0) {
                ++cont;
                t[i] = 1;
                --i;
            }
            if (i > 0) {
                // going ahead
                int j = 1;
                while (t[j] == 0) {
                    ++cont;
                    t[j] = 1;
                    ++j;
                }
            }
        }
        p += cont / 2;
        int i = 1;
        cont = 0;
        while (i < n) {
            if (t[i] == 0) {
                ++cont;
                t[i] = 1;
            } else {
                p += cont / 2;
                cont = 0;
            }
            ++i;
        }
        p += cont / 2;
        cout << p << endl;
    }
    return 0;
}
