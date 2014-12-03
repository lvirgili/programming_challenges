#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        while (n--) {
            int p = 0;
            int c;
            for (int i = 0; i < 5; ++i) {
                int a;
                cin >> a;
                if (a <= 127) {
                    ++p;
                    c = i;
                }
            }
            if (p == 1) cout << (char)('A' + c) << endl;
            else cout << "*\n";
        }
    }
    return 0;
}
