#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(256, '\n');
    while (t--) {
        string s;
        getline(cin, s);
        long cont = 0;
        unsigned pos = 0;
        for (unsigned i = 1; i < s.size(); ++i) {
            if (s[pos] == s[i]) ++cont;
            else pos = i;
        }
        cout << cont << endl;
    }
    return 0;
}
