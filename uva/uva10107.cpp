#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    unsigned long v[16384];
    while (cin >> v[n]) {
        ++n;
        sort(v, v + n);
        if (n % 2 == 1) {
            cout << v[n/2] << endl;
        } else {
            cout << (v[n/2 -1] + v[n/2]) / 2 << endl;
        }
    }
    return 0;
}
