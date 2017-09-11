#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long nat;

int main() {
    int t; cin >> t;
    while (t--) {
        int b; cin >> b;
        int ad, dd, lb, ag, dg, lg;
        cin >> ad >> dd >> lb;
        cin >> ag >> dg >> lg;
        double vd = (ad + dd) / 2.0;
        double vg = (ag + dg) / 2.0;
        if (lb % 2 == 0) vd += b;
        if (lg % 2 == 0) vg += b;
        if (vd > vg) {
            cout << "Dabriel\n";
        } else if (vd < vg) {
            cout << "Guarte\n";
        } else {
            cout << "Empate\n";
        }
    }
    return 0;
}
