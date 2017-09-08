#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    int s, t, f;
    cin >> s >> t >> f;
    int res = (s + t + f) % 24;
    if (res >= 0) cout << res << endl;
    else cout << 24 + res << endl;
    return 0;
}
