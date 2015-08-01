#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = -1000; i <= 1000; ++i) {
        int total = b * i;
        int r = a - total;
        if (r >= 0 && r < abs(b)) {
            cout << i << ' ' << r << endl;
            break;
        }
    }
    return 0;
}
