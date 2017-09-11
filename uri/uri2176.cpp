#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long nat;

int main() {
    string s; cin >> s;
    nat t = 0;
    for (unsigned i = 0; i < s.size(); ++i) {
        if (s[i] == '1') ++t;
    }
    if (t % 2 == 0) cout << s + "0\n";
    else cout << s + "1\n";
    return 0;
}
