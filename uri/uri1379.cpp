#include <iostream>
using namespace std;

int main() {
    long long x, y;
    while (cin >> x >> y, x) {
        if (x > y) swap(x, y);
        long long z = x - (y - x);
        cout << z << endl;
    }
    return 0;
}
