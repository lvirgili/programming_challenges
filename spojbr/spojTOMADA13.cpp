#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int t[4];
    for (int i = 0; i < 4; ++i) cin >> t[i];
    sort(t, t + 4, greater<int>());
    int s = 0;
    int r = 3;
    int i = 0;
    while (r) {
        if (t[i] >= r) {
            for (int j = i; j < 4; ++j) {
                s += t[j];
            }
            s -= r;
            r = 0;
        } else {
            r -= t[i];
            ++i;
        }
    }
    cout << s << endl;
    return 0;
}
