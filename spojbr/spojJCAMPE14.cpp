#include <iostream>
using namespace std;

int main() {
    int cv, ce, cs, fv, fe, fs;
    cin >> cv >> ce >> cs >> fv >> fe >> fs;
    int pc = 3 * cv + ce;
    int pf = 3 * fv + fe;
    if (pc > pf) cout << "C\n";
    else if (pf > pc) cout << "F\n";
    else if (cs > fs) cout << "C\n";
    else if (fs > cs) cout << "F\n";
    else cout << "=\n";
    return 0;
}
