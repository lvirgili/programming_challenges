#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    while (cin >> s >> t) {
        if (s.size() > t.size()) {
            cout << "No\n";
        } else {
            long i = (long)s.size() - 1;
            for (long j = (long)t.size() - 1; j >= 0; --j) {
                if (t[j] == s[i]) {
                    --i;
                }
            }
            if (i == -1) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}
