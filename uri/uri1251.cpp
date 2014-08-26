#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(const pair<char, unsigned long>& a, const pair<char, unsigned long>& b) {
    if (a.second == b.second) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main() {
    string s;
    int cont = 0;
    while (cin >> s) {
        if (cont) cout << endl;
        map<char, unsigned long> m;
        for (unsigned i = 0; i < s.size(); ++i) {
            if (m.count((int)s[i])) {
                ++m[s[i]];
            } else {
                m[s[i]] = 1;
            }
        }
        vector< pair<char, unsigned long> > v;
        for (auto &x : m)
            v.push_back(make_pair(x.first, x.second));
        sort(v.begin(), v.end(), comp);
        for (auto &x : v)
            cout << (int)x.first << ' ' << x.second << endl;
        ++cont;
    }
    return 0;
}
