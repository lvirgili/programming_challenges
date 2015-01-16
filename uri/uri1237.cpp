#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int m[64][64];

int lcs(string s, string t) {
    memset(m, 0, sizeof m);
    int z = 0;
    for (unsigned i = 1; i <= s.size(); ++i) {
        for (unsigned j = 1; j <= t.size(); ++j) {
            if (s[i-1] == t[j-1]) {
                if (i == 1 || j == 1) m[i][j] = 1;
                else m[i][j] = m[i-1][j-1] + 1;
                if (m[i][j] > z) z = m[i][j];
            } else {
                m[i][j] = 0;
            }
        }
    }
    return z;
}

int main() {
    string s, t;
    while (getline(cin, s)) {
        getline(cin, t);
        cout << lcs(s, t) << endl;
    }
    return 0;
}
