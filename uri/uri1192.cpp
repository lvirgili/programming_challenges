#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d1, d2;
        char c;
        scanf("%d%c%d\n", &d1, &c, &d2);
        if (d1 == d2) cout << d1 * d2 << endl;
        else if (isupper(c)) cout << d2 - d1 << endl;
        else cout << d1 + d2 << endl;
    }
    return 0;
}
