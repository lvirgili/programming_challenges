#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct aluno {
    string nome, cor;
    char t;
};

bool comp(const aluno &a, const aluno &b) {
    if (a.cor != b.cor) {
        return a.cor < b.cor;
    } else if (a.t != b.t) {
        if (a.t == 'P') return true;
        if (a.t == 'M' && b.t == 'P') return false;
        if (a.t == 'M' && b.t == 'G') return true;
        if (a.t == 'G') return false;
    }
    return a.nome < b.nome;
}

int main() {
    int n;
    bool p = false;
    while (cin >> n, n) {
        cin.ignore(256, '\n');
        aluno aa[n];
        for (int i = 0; i < n; ++i) {
            getline(cin, aa[i].nome);
            cin >> aa[i].cor;
            cin >> aa[i].t;
            cin.ignore(256, '\n');
        }
        sort(aa, aa + n, comp);
        if (p) cout << endl;
        p = true;
        for (auto &e : aa) {
            cout << e.cor << ' ' << e.t << ' ' << e.nome << endl;
        }
    }
    return 0;
}
