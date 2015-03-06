#include <iostream>
#include <string>
#include <cstring>
using namespace std;

typedef unsigned long long nat;
const nat r = 1000000007;

nat fat_mod(nat n, nat m) {
    nat p = 1;
    for (nat i = 2; i <= n; ++i) {
        p = (p * i) % m;
    }
    return p;
}

int main() {
    string w;
    while (cin >> w) {
        nat all = (nat)w.size();
        int seen[26];
        memset(seen, 0, sizeof seen);
        for (unsigned i = 0; i < w.size(); ++i) {
            ++seen[w[i] - 'A'];
        }
        cout << all << endl;
        nat x = fat_mod(all, r);
        nat den = 1;
        for (int i = 0; i < 26; ++i) {
            if (seen[i] > 1) {
                cout << (char)('A' + i) << ' ' << seen[i] << endl;
                den = (fat_mod(seen[i], r) * den) % r;
            }
        }
        cout << x << ' ' << den << endl;
        cout << x / den << endl;
    }
    return 0;
}
