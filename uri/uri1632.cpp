#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore(256, '\n');
    while (t--) {
        string s;
        getline(cin, s);
        unsigned long long total = 1;
        for (unsigned i = 0; i < s.size(); ++i) {
            char l = tolower(s[i]);
            if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 's') total *= 3;
            else total *= 2;
        }
        cout << total << endl;
    }
    return 0;
}