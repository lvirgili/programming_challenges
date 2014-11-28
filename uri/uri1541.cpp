#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    while (cin >> a, a) {
        cin >> b >> c;
        long area = a * b;
        double real_area = area * (double)(100.0 / c);
        cout << (long)(sqrt(real_area)) << endl;
    }
    return 0;
}
