#include <iostream>
#include <string>
#include <algorithm>
#include <cfloat>
#include <cmath>
using namespace std;

struct rena {
    string nome;
    int idade, peso;
    long altura;
};

bool comp(const rena &a, const rena &b) {
    if (a.peso != b.peso) return a.peso > b.peso;
    if (a.idade != b.idade) return a.idade < b.idade;
    if (a.altura != b.altura) return a. altura < b.altura;
        return a.altura < b.altura;
    return a.nome > b.nome;
}

int main() {
    long t;
    cin >> t;
    long c = 1;
    while (t--) {
        long n, m;
        cin >> n >> m;
        cin.ignore(256, '\n');
        rena rr[n];
        for (int i = 0; i < n; ++i) {
            double alt;
            cin >> rr[i].nome >> rr[i].peso >> rr[i].idade >> alt;
            rr[i].altura = 100 * alt;
            cin.ignore(256, '\n');
        }
        sort(rr, rr + n, comp);
        cout << "CENARIO {" << c++ << "}\n";
        for (int i = 0; i < m; ++i) {
            cout << i + 1 << " - " << rr[i].nome << endl;
        }
    }
    return 0;
}
