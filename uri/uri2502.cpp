#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, n;
    while (cin >> c >> n) {
        string x, y;
        cin.ignore(256, '\n');
        getline(cin, x);
        getline(cin, y);
        map<char, char> decode;
        for (unsigned i = 0; i < y.size(); ++i) {
            if (!isalpha(y[i])) {
                decode[y[i]] = tolower(x[i]);
            } else {
                decode[tolower(y[i])] = tolower(x[i]);
                decode[toupper(y[i])] = toupper(x[i]);
            }
            if (!isalpha(x[i])) {
                decode[x[i]] = tolower(y[i]);
            } else {
                decode[tolower(x[i])] = tolower(y[i]);
                decode[toupper(x[i])] = toupper(y[i]);
            }
        }
        while (n--) {
            string line; getline(cin, line);
            for (unsigned i = 0; i < line.size(); ++i) {

                if (decode.count(line[i])) cout << decode[line[i]];
                else cout << line[i];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
