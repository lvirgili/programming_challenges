#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, c;
        cin >> l >> c;
        string s[l];
        for (int i = 0; i < l; ++i) cin >> s[i];
        int n;
        cin >> n;
        while (n--) {
            string a;
            cin >> a;
            int cont = 0;
            if (a.size() == 1) {
                for (auto &c1 : s) {
                    for (auto &c2 : c1) {
                        if (c2 == a[0]) ++cont;
                    }
                }
            } else {
                for (int i = 0; i < l; ++i) {
                    for (int j = 0; j < c; ++j) {
                        string nova;
                        for (int k = j; k < c; ++k) {
                            nova += s[i][k];
                            if (nova.size() == a.size()) {
                                if (a == nova) ++cont;
                            }
                        }
                    }
                }
                for (int i = 0; i < c; ++i) {
                    for (int j = 0; j < l; ++j) {
                        string nova;
                        for (int k = j; k < l; ++k) {
                            nova += s[k][i];
                            if (nova.size() == a.size()) {
                                if (a == nova) ++cont;
                            }
                        }
                    }
                }
            }
            cout << cont << endl;
        }
    }
    return 0;
}
