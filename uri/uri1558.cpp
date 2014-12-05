#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n = 0;
    bool sq[10010];
    memset(sq, 0, sizeof sq);
    while (n*n <= 10000) {
        sq[n*n] = true;
        ++n;
    }
    int x;
    while (cin >> x) {
        if (x < 0) cout << "NO\n";
        else {
            bool yeap = false;
            for (int i = 0; i*i <= x; ++i) {
                if (sq[x - i*i] == true) {
                    yeap = true;
                    break;
                }
            }
            if (yeap) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
