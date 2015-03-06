#include <iostream>
#include <algorithm>
#include <cmath>
#include <cfloat>
using namespace std;

struct t {
    long pontos;
    long marcados, recebidos;
    int ins;
};

bool comp(const t &a, const t &b) {
    if (a.pontos != b.pontos) return a.pontos > b.pontos;
    double aavg, bavg;
    if (a.recebidos == 0) aavg = a.marcados;
    else aavg = 1.0 * a.marcados / a.recebidos;
    if (b.recebidos == 0) bavg = b.marcados;
    else bavg = 1.0 * b.marcados / b.recebidos;
    //if (fabs(aavg - bavg) > DBL_EPSILON) return aavg > bavg;
    if (aavg < bavg) return false;
    else if (aavg > bavg) return true;
    if (a.marcados != b.marcados) return a.marcados > b.marcados;
    return a.ins < b.ins;
}

int main() {
    bool p = false;
    int n;
    int c = 1;
    while (cin >> n, n) {
        if (p) cout << endl;
        p = true;
        t tt[n+1];
        long nn = n * (n-1) / 2;
        for (int i = 1; i <= n; ++i) {
            tt[i].ins = i;
            tt[i].pontos = tt[i].marcados = tt[i].recebidos = 0;
        }
        for (long i = 0; i < nn; ++i) {
            int x, y, z, w;
            cin >> x >> y >> z >> w;
            tt[x].marcados += y;
            tt[x].recebidos += w;
            tt[z].marcados += w;
            tt[z].recebidos += y;
            if (y > w) {
                tt[x].pontos += 2;
                tt[z].pontos += 1;
            } else {
                tt[x].pontos += 1;
                tt[z].pontos += 2;
            }
        }
        sort (tt + 1, tt + n + 1, comp);
        cout << "Instancia " << c++ << endl;
        for (int i = 1; i < n; ++i) cout << tt[i].ins << ' ';
        cout << tt[n].ins << endl;
    }
    return 0;
}
