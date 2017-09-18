#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    while (cin >> x >> y) {
        cout << ceil(1.0 * x / (y - x)) + 1 << endl;
    }
    return 0;
}