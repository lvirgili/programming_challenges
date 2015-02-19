#include <iostream>
using namespace std;

int main() {
    double a, g, ra, rg;
    cin >> a >> g >> ra >> rg;
    double ea = ra / a;
    double eg = rg / g;
    if (ea > eg) cout << "A\n";
    else cout << "G\n";
    return 0;
}
