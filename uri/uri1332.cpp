#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s.size() > 3) cout << 3 << endl;
        else {
            int t = 0;
            if (s[0] != 'o') ++t;
            if (s[1] != 'n') ++t;
            if (s[2] != 'e') ++t;
            if (t > 1) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}
