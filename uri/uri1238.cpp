#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;
        string r;
        unsigned i = 0;
        for (i = 0; i < min(s.size(), t.size()); ++i) {
            r += s[i];
            r += t[i];
        }
        if (s.size() > t.size()) {
            for (; i < s.size(); ++i) r += s[i];
        } else {
            for (; i < t.size(); ++i) r += t[i];
        }
        cout << r << endl;
    }
    return 0;
}
