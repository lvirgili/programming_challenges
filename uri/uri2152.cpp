#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int h, m, o;
        cin >> h >> m >> o;
        printf("%02d:%02d - A porta %s!\n", h, m, (o == 0) ? "fechou" : "abriu");
    }
    return 0;
}
