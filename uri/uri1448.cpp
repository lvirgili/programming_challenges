#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(256, '\n');
    int inst = 1;
    while (t--) {
        string orig, s, t;
        getline(cin, orig);
        getline(cin, s);
        getline(cin, t);
        int a = 0, b = 0;
        for (unsigned i = 0; i < orig.size(); ++i) {
            if (orig[i] == s[i]) ++a;
            if (orig[i] == t[i]) ++b;
        }
        cout << "Instancia " << inst++ << endl;
        if (a > b) cout << "time 1\n";
        else if (a < b) cout << "time 2\n";
        else {
            int k = 0;
            for (unsigned i = 0; i < orig.size(); ++i) {
                if (orig[i] == s[i] && orig[i] != t[i]) {
                    k = 1;
                    break;
                }
                if (orig[i] != s[i] && orig[i] == t[i]) {
                    k = 2;
                    break;
                }
            }
            if (k == 1) cout << "time 1\n";
            if (k == 2) cout << "time 2\n";
            if (k == 0) cout << "empate\n";
        }
        cout << endl;
    }
    return 0;
}
