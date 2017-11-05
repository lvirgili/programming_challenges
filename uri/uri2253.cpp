#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        if (!std::cin) break;
        int upper = 0, lower = 0, number = 0;
        bool nope = false;
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (islower(c)) ++lower;
            else if (isupper(c)) ++upper;
            else if (isdigit(c)) ++number;
            else nope = true;
        }
        if (!nope && upper && lower && number && 6 <= s.size() && s.size() <= 32) {
            cout << "Senha valida.\n";
        } else {
            cout << "Senha invalida.\n";
        }
    }
    return 0;
}