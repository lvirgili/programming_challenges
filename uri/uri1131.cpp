#include <iostream>
using namespace std;

int main() {
    int cont = 0;
    int i = 0, g = 0;
    int vi = 0, vg = 0, e = 0;
    int c;
    do {
        int gi, gg;
        cin >> gi >> gg;
        ++cont;
        i += gi;
        g += gg;
        if (gi > gg) ++vi;
        else if (gg > gi) ++vg;
        else ++e;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> c;
    } while (c == 1);
    cout << cont << " grenais\n";
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << e << endl;
    if (vi == vg) cout << "Nao houve vencedor\n";
    else if (vg > vi) cout << "Gremio venceu mais\n";
    else cout << "Inter venceu mais\n";
    return 0;
}
