#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int m, m1;
        int im = 0, im1 = 1;
        cin >> m >> m1;
        if (m < m1) {
            swap(m, m1);
            swap(im, im1);
        }
        for (int i = 2; i < n; ++i) {
            int x; cin >> x;
            if (x > m) {
                m1 = m;
                m = x;
                im1 = im;
                im = i;
            } else if (x < m && x > m1) {
                m1 = x;
                im1 = i;
            }
        }
        cout << im1+1 << endl;
    }
    return 0;
}
