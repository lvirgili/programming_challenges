#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long d, vf, vc;
    while (cin >> d >> vf >> vc) {
        double deltatf = 12.0 / vf;
        double distc = hypot(12, d);
        double deltatc = distc / vc;
        if (deltatc <= deltatf) cout << "S\n";
        else cout << "N\n";
    }
    return 0;
}
