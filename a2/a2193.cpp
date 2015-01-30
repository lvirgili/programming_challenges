#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore(256, '\n');
        string s;
        cin >> s;
        int f[26];
        memset(f, 0, sizeof f);
        for (unsigned i = 0; i < s.size(); ++i) {
            char c = s[i];
            ++f[c - 'a'];
        }
        int m = f[0];
        int p = 0;
        for (unsigned i = 1; i < 26; ++i) {
            if (f[i] > m) {
                m = f[i];
                p = i;
            }
        }
        cout << m << ' ' << (char)(p + 'a') << endl;
    }
    return 0;
}
