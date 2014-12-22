#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        unsigned long long n, m;
        cin >> n;
        m = n;
        unsigned long long s = 0;
        while (n) {
            int d = n % 10;
            if (d && m % d == 0) ++s;
            n /= 10;
        }
        cout << s << endl;
    }
    return 0;
}
