#include <bits/stdc++.h>
using namespace std;


int main() {
    map<char, char> m;
    int n, x;
    cin >> n >> x;
    while (n--) {
        cin.ignore(256, '\n');
        char c, t;
        scanf("%c %c", &c, &t);
        m[c] = t;
        m[t] = c;
        
    }
    cin.ignore(256, '\n');
    while (x--) {
        string s;
        getline(cin, s);
        for (char c : s) {
            if (m.count(c)) {
                cout << m[c];
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}