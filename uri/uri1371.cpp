#include <iostream>
#include <cstring>
using namespace std;

typedef unsigned long long nat;
const nat m = 25000010;
bool divs[m];

int main() {
    memset(divs, 0, sizeof divs);
    for (nat i = 1; i*i <= m; ++i) {
        divs[i*i] = true;
    }
    nat n;
    while (cin >> n, n) {
        bool p = false;
        for (nat i = 1; i <= n; ++i) {
            if (divs[i]) {
                if (p) cout << ' ';
                p = true;
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}
