#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct p {
    int i;
    double d;
};

bool comp(const p &a, const p &b) {
    if (fabs(a.d - b.d) < 0.1) return a.i < b.i;
    return a.d < b.d;
}

int main() {
    int c;
    cin >> c;
    while (c--) {
        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        p pp[50];
        for (int i = 1; i <= n; ++i) {
            int px, py;
            cin >> px >> py;
            double d = hypot(x-px, y-py);
            p lixo = {.i = i, .d = d};
            pp[i-1] = lixo;
        }
        sort(pp, pp + n, comp);
        cout << pp[0].i << endl;
    }
}
