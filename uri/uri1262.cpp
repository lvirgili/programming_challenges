#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    while (cin >> s >> n) {
        int m = 0;
        int r = 1;
        for (unsigned i = 0; i < s.size(); ++i) {
            if (s[i] == 'W') {
                ++m;
            } else {
                ++m;
                ++i;
                r = 1;
                while (r < n && i < s.size() && s[i] == 'R') {
                    ++r;
                    ++i;
                }
                --i;
            }
        }
        cout << m << endl;
    }
    return 0;
}
