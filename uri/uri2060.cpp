#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> m(6, 0);
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        if (x % 2 == 0) ++m[2];
        if (x % 3 == 0) ++m[3];
        if (x % 4 == 0) ++m[4];
        if (x % 5 == 0) ++m[5];
    }
    printf("%d Multiplo(s) de %d\n", m[2], 2);
    printf("%d Multiplo(s) de %d\n", m[3], 3);
    printf("%d Multiplo(s) de %d\n", m[4], 4);
    printf("%d Multiplo(s) de %d\n", m[5], 5);
    return 0;
}
