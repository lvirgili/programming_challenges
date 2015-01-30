#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

bool isword(string s) {
    for (unsigned i = 0; i < s.size(); ++i) {
        if (s[i] == '.') {
            if (i != s.size() - 1 || i == 0) return false;
        } else if (!(isalpha(s[i]))) {
            return false;
        }
    }
    return true;
}

int main() {
    string line;
    while (getline(cin, line)) {
        stringstream ss(line);
        string s;
        long long n = 0;
        long long total = 0;
        while (ss >> s) {
            if (isword(s)) {
                ++n;
                if (s[s.size() - 1] == '.') total += s.size() - 1;
                else total += s.size();
            }
        }
        if (n == 0) cout << 250 << endl;
        else {
            double frac = total / n;
            if (frac <= 3) cout << 250 << endl;
            else if (frac >= 6) cout << 1000 << endl;
            else cout << 500 << endl;
        }

    }
    return 0;
}
