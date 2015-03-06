#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int l;
    cout << fixed << setprecision(2);
    while (cin >> l) {
        double s = (2 * l * l * sqrt(3)) / 5.0;
        cout << s << endl;
    }
    return 0;
}
