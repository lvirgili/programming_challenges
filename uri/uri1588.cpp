#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct time {
    int pos;
    string nome;
    int v;
    long g;
    long pontos;
};

bool comp(const struct time &a, const struct time &b) {
    if (a.pontos > b.pontos) return true;
    else if (a.pontos < b.pontos) return false;
    else {
        if (a.v > b.v) return true;
        else if (a.v < b.v) return false;
        else {
            if (a.g > b.g) return true;
            else if (a.g < b.g) return false;
            else return a.pos < b.pos;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        struct time times[n];
        for (int i = 0; i < n; ++i) {
            string nome;
            cin >> nome;
            times[i].pos = i;
            times[i].nome = nome;
            times[i].v = 0;
            times[i].g = 0;
            times[i].pontos = 0;
        }
        for (int i = 0; i < m; ++i) {
            int a, b;
            string sa, sb;
            cin >> a >> sa >> b >> sb;
            int posa, posb;
            for (int j = 0; j < n; ++j) {
                if (times[j].nome == sa) posa = j;
                if (times[j].nome == sb) posb = j;
            }
            times[posa].g += a;
            times[posb].g += b;
            if (a > b) {++times[posa].v; times[posa].pontos += 3;}
            else if (a < b) {++times[posb].v; times[posb].pontos += 3;}
            else {
                times[posa].pontos += 1;
                times[posb].pontos += 1;
            }
        }
        sort(times, times + n, comp);
        for (auto &e : times) cout << e.nome << endl;
    }
    return 0;
}
