#include <iostream>
using namespace std;

int main() {
    int r;
    while (cin >> r, r) {
        int m = 0, l = 0;
        int lm[r], ll[r];
        for (int i = 0; i < r; ++i) {
            cin >> lm[i];
        }
        for (int i = 0; i < r; ++i) {
            cin >> ll[i];
        }
        bool extra = false;
        for (int i = 0; i < r; ++i) {
            m += lm[i];
            l += ll[i];
            if (i > 1 && !extra) {
                bool samem = false, samel = false;
                if (lm[i-2] == lm[i-1] && lm[i-1] == lm[i])
                    samem = true;
                if (ll[i-2] == ll[i-1] && ll[i-1] == ll[i])
                    samel = true;
                if (samem && !samel) {
                    m += 30;
                    extra = true;
                } else if (!samem && samel) {
                    l += 30;
                    extra = true;
                } else if (samem && samel) {
                    extra = true;
                }
            }
        }
        if (m > l) cout << "M\n";
        else if (m < l) cout << "L\n";
        else cout << "T\n";
    }
    return 0;
}
