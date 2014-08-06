#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s; cin >> s;
    for (unsigned i = 0; i < s.size(); ++i) {
        if (isdigit(s[i]) || s[i] == '-') {
            cout << s[i];
        } else if (s[i] >= 'A' && s[i] <= 'C') {
            cout << 2;
        } else if (s[i] >= 'D' && s[i] <= 'F') {
            cout << 3;
        } else if (s[i] >= 'G' && s[i] <= 'I') {
            cout << 4;
        } else if (s[i] >= 'J' && s[i] <= 'L') {
            cout << 5;
        } else if (s[i] >= 'M' && s[i] <= 'O') {
            cout << 6;
        } else if (s[i] >= 'P' && s[i] <= 'S') {
            cout << 7;
        } else if (s[i] >= 'T' && s[i] <= 'V') {
            cout << 8;
        } else {
            cout << 9;
        }
    }
    cout << endl;
    return 0;
}
