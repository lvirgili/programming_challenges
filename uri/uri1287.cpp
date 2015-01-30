#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        long long x = 0;
        bool ok = true;
        bool op = false;
        for (auto i = 0u; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                x *= 10;
                x += s[i] - '0';
                op = true;
            } else if (s[i] == 'o' || s[i] == 'O') {
                x *= 10;
                op = true;
            } else if (s[i] == 'l') {
                x *= 10;
                x += 1;
                op = true;
            } else if (s[i] == ' ' || s[i] == ',') {
                continue;
            } else {
                ok = false;
                break;
            }
        }
        if (x < 0 || x > 2147483647 || s.size() == 0) ok = false;
        if (ok && op) cout << x << endl;
        else cout << "error\n";
    }
    return 0;
}
