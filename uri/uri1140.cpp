#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    while (getline(cin, s), s != "*") {
        char l = tolower(s[0]);
        bool f = true;
        for (auto i = 1u; i < s.size(); ++i) {
            if (s[i - 1] == ' ') {
                if (tolower(s[i]) != l) {
                    f = false;
                    break;
                }
            }
        }
        if (f) cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}
