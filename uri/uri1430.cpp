#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string s;
    map<char, double> m;
    m['W'] = 1.0;
    m['H'] = 1.0 / 2;
    m['Q'] = 1.0 / 4;
    m['E'] = 1.0 / 8;
    m['S'] = 1.0 / 16;
    m['T'] = 1.0 / 32;
    m['X'] = 1.0 / 64;
    while (cin >> s, s.size() > 1) {
        int cont = 0;
        int j;
        for (auto i = 0u; i < s.size() - 1;) {
            j = i + 1;
            double val = 0.0;
            while (s[j] != '/') {
                val += m[s[j]];
                ++j;
            }
            if (val == 1.0) ++cont;
            i = j;
        }
        cout << cont << endl;
    }
    return 0;
}
