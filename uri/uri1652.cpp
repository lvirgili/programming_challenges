#include <iostream>
#include <string>
#include <map>
using namespace std;

bool is_vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}

bool is_cons(char c) {
    return !is_vowel(c);
}

bool third(string& s) {
    auto t = s.size();
    if (s.back() == 'h' && (s[t - 2] == 'c' || s[t - 2] == 's')) {
        return true;
    } else {
        return false;
    }
}

int main() {
    map<string, string> irr;
    int l, n;
    cin >> l >> n;
    while (l--) {
        string s, p;
        cin >> s >> p;
        irr[s] = p;
    }
    while (n--) {
        string s;
        cin >> s;
        auto it = irr.find(s);
        if (it != irr.end()) {
            cout << it->second << endl;
        } else if (is_cons(s[s.size() - 2]) && s.back() == 'y') {
            for (unsigned i = 0; i < s.size() - 1; ++i) cout << s[i];
            cout << "ies\n";
        } else if (s.back() == 'o' || s.back() == 's' || s.back() == 'x' || third(s)) {
            cout << s << "es\n";
        } else {
            cout << s << "s\n";
        }
    }
    return 0;
}
