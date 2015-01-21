#include <iostream>
#include <string>
using namespace std;

bool subs(string s, string t) {
    unsigned j = 0;
    for (unsigned i = 0; i < s.size(); ++i) {
        if (s[i] == t[j]) ++j;
    }
    if (j == t.size()) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string base;
        cin >> base;
        int q;
        cin >> q;
        cin.ignore(256, '\n');
        while (q--) {
            string n;
            cin >> n;
            if (subs(base, n)) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
