#include <iostream>
#include <string>
#include <istream>
using namespace std;

int main() {
    string s;
    bool space = false;
    while (cin >> s) {
        if (space) cout << ' ';
        for (unsigned i = 0; i < s.size(); ++i) {
            if (i % 2 == 1)
                cout << s[i];
        }
        space = true;
    }
    cout << endl;
    return 0;
}
