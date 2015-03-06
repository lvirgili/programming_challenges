#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    const double pi = 3.141592654;
    double a, b, c;
    while (cin >> a >> b >> c) {
        double rad = a * pi / 180;
        double h = tan(rad) * b;
        cout << 5 * (h + c) << endl;
    }
    return 0;
}
