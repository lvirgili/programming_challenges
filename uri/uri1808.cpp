#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int p = 0;
    double sum = 0;
    for (unsigned i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (c == '0' || ('2' <= c && c <= '9')) {
            sum += c - '0';
            ++p;
        } else if (c == '1') {
            if (i == s.size() - 1) {
                sum += 1;
                ++p;
            } else {
                char next = s[i + 1];
                if (next == '0') {
                    ++i;
                    sum += 10;
                } else {
                    sum += 1;
                }
                ++p;
            }
        }
    }
    printf("%.2lf\n", sum / p);
    return 0;
}