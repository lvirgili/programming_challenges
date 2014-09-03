#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>
#include <utility>
using namespace std;

bool comp(const pair<char, int> &a, const pair<char, int> &b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main() {
    int T; cin >> T;
    cin.ignore(256, '\n');
    for (int t = 0; t < T; ++t) {
        string s;
        getline(cin, s, '\n');
        map<char, int> m;
        int max = 0;
        for (unsigned i = 0; i < s.size(); ++i) {
            if (isalpha(s[i])) {
                s[i] = (char)tolower(s[i]);
                if (m.count(s[i])) {
                    ++m[s[i]];
                } else {
                    m[s[i]] = 1;
                }
                if (m[s[i]] > max) {
                    max = m[s[i]];
                }
            }
        }
        for (auto &x : m)
            if (x.second == max)
                cout << x.first;
        cout << endl;
    }
    return 0;
}
