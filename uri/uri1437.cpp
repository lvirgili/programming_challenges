#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        string s;
        cin >> s;
        int a = 0;
        for (auto &c : s) {
            if (c == 'D') a += 90;
            else a -= 90;
            a %= 360;
            if (a < 0) a = 360 + a;
        }
        if (a == 0) cout << "N\n";
        else if (a == 90) cout << "L\n";
        else if (a == 180) cout << "S\n";
        else cout << "O\n";
    }
    return 0;
}
