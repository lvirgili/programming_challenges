#include <iostream>
#include <cstring>
using namespace std;

int main() {
    bool yes[1000010];
    memset(yes, 0, sizeof yes);
    for (long i = 3; i <= 1000000; ++i) {
        long n = i;
        if (n % 3 == 0) n /= 3;
        if (n % 5 == 0) n /= 5;
        if (n % 17 == 0) n /= 17;
        if (n % 257 == 0) n /= 257;
        if (n % 65537 == 0) n /= 65537;
        while (n % 2 == 0) n /= 2;
        if (n == 1) yes[i] = true;
    }
    int t;
    cin >> t;
    while (t--) {
        long x;
        cin >> x;
        if (yes[x]) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
