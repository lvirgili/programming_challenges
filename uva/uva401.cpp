#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

map<char, char> r;

bool ispal(string &s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

bool ismirror(string &s) {
    string t = s;
    bool f = true;
    unsigned j = t.size() - 1;
    for (unsigned i = 0; i < (s.size() / 2 + 1); ++i) {
        if (s[i] != r[t[j]]) {
            f = false;
            break;
        }
        --j;
    }
    return f;
}

int main() {
    r['A'] = 'A';
    r['E'] = '3';
    r['H'] = 'H';
    r['I'] = 'I';
    r['J'] = 'L';
    r['L'] = 'J';
    r['M'] = 'M';
    r['O'] = 'O';
    r['S'] = '2';
    r['T'] = 'T';
    r['U'] = 'U';
    r['V'] = 'V';
    r['W'] = 'W';
    r['X'] = 'X';
    r['Y'] = 'Y';
    r['Z'] = '5';
    r['1'] = '1';
    r['2'] = 'S';
    r['3'] = 'E';
    r['5'] = 'Z';
    r['8'] = '8';
    string s;
    while (cin >> s) {
        bool pal = ispal(s);
        bool mirror = ismirror(s);
        cout << s;
        if (pal && mirror) {
            cout << " -- is a mirrored palindrome.\n";
        } else if (pal && !mirror) {
            cout << " -- is a regular palindrome.\n";
        } else if (!pal && mirror) {
            cout << " -- is a mirrored string.\n";
        } else {
            cout << " -- is not a palindrome.\n";
        }
        cout << endl;
    }
    return 0;
}
