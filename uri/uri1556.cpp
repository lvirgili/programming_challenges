#include <iostream>
#include <string>
#include <set>
using namespace std;

set<string> words;

void gen(string &s) {
    words.insert(s);
    for (unsigned i = 0; i < s.size(); ++i) {
        string ns = s;
        ns.erase(ns.begin() + i);
        if (ns.size() && words.count(ns) == 0) {
            words.insert(ns);
            gen(ns);
        }
    }
}

int main() {
    string s;
    while (cin >> s) {
        words.clear();
        gen(s);
        for (auto &w : words) cout << w << endl;
        cout << endl;
    }
    return 0;
}
