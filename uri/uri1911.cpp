#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        map<string, string> ass;
        int total = 0;
        while (n--) {
            string s, t;
            cin >> s >> t;
            ass[s] = t;
        }
        int m; cin >> m;
        while (m--) {
            string s, t;
            cin >> s >> t;
            string a = ass[s];
            int cont = 0;
            for (unsigned i = 0; i < a.size(); ++i) {
                if (a[i] != t[i]) ++cont;
            }
            if (cont >= 2) {
                ++total;
            }
        }
        cout << total << endl;
    }
    return 0;
}