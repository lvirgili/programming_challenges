#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long a, b;
    while (cin >> a >> b, a || b) {
        int c = 0;
        int total = 0;
        if (a < b) swap(a, b);
        while (b > 0) {
            int da = a % 10;
            int db = b % 10;
            if (da + db + c >= 10) {
                c = 1;
                ++total;
            } else {
                c = 0;
            }
            a /= 10;
            b /= 10;
        }
        while (a > 0) {
            int da = a % 10;
            if (da + c >= 10) {
                c = 1;
                ++total;
            } else {
                c = 0;
            }
            a /= 10;
        }
        if (total > 1) cout << total << " carry operations.\n";
        else if (total == 1) cout << "1 carry operation.\n";
        else cout << "No carry operation.\n";
    }
    return 0;
}
