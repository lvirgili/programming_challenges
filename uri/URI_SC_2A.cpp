#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int C; cin >> C;
    for (int c = 0; c < C; ++c) {
        string s, t;
        cin >> s >> t;
        unsigned long soma = 0;
        for (unsigned i = 0; i < s.size(); ++i) {
            if (s[i] <= t[i])
                soma += t[i] - s[i];
            else
                soma += 26 - s[i] + t[i];
        }
        cout << soma << endl;
    }
    return 0;
}
