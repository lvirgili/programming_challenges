#include <iostream>
#include <string>
#include <set>
#include <cctype>
#include <sstream>
using namespace std;

set<string> w;

void words(string &s) {
    unsigned ini = 0, last = 0;
    while (ini < s.size() && last < s.size()) {
        string curr;
        while (ini < s.size() && !isalpha(s[ini])) ++ini;
        if (ini == s.size()) break;
        curr += tolower(s[ini]);
        last = ini + 1;
        while (last < s.size() && isalpha(s[last])) {
            curr += tolower(s[last]);
            ++last;
        }
        if (s.size()) w.insert(curr);
        ini = last;
    }
}

int main() {
    string l;
    while(getline(cin, l)) {
        stringstream ss(l);
        string s;
        while (ss >> s)
            words(s);
    }
    for (auto &s : w) cout << s << endl;
    return 0;
}

