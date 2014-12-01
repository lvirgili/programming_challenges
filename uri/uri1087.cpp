#include <iostream>
using namespace std;

int main() {
    int x, y, a, b;
    while (cin >> x >> y >> a >> b, x) {
        if (x == a && y == b) cout << 0 << endl;
        else if ((x == a && y != b) || (x != a && y == b))
            cout << 1 << endl;
        else if (x - a == y - b) cout << 1 << endl;
        else if (x + y == a + b) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
