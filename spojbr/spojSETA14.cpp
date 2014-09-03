#include <iostream>
#include <string>
using namespace std;

enum dir {
    cima, direita, esquerda, baixo
};

struct celula {
    dir direcao;
    bool segura;
    bool visitada;
};

celula m[503][512];
int total = 0;

void visitar(int i, int j) {
    m[i][j].visitada = true;
    if (m[i][j].direcao == cima) {
        if (!m[i-1][j].visitada)
            visitar(i-1, j);
        m[i][j].segura = m[i-1][j].segura;
    } else if (m[i][j].direcao == direita) {
        if (!m[i][j+1].visitada)
            visitar(i, j+1);
        m[i][j].segura = m[i][j+1].segura;
    } else if (m[i][j].direcao == esquerda) {
        if (!m[i][j-1].visitada)
            visitar(i, j-1);
        m[i][j].segura = m[i][j-1].segura;
    } else {
        if (!m[i+1][j].visitada)
            visitar(i+1, j);
        m[i][j].segura = m[i+1][j].segura;
    }
    total += m[i][j].segura ? 1 : 0;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n+1; ++i) {
        for (int j = 0; j <= n+1; ++j) {
            m[i][j].segura = false;
            m[i][j].visitada = true;
        }
    }
    for (int i = 1; i <= n; ++i) {
        string s; cin >> s;
        for (unsigned j = 0; j < s.size(); ++j) {
            m[i][j+1].visitada = false;
            m[i][j+1].segura = true;
            if (s[j] == 'V')
                m[i][j+1].direcao = baixo;
            else if (s[j] == '<')
                m[i][j+1].direcao = esquerda;
            else if (s[j] == 'A')
                m[i][j+1].direcao = cima;
            else
                m[i][j+1].direcao = direita;
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (m[i][j].visitada == false)
                visitar(i, j);
        }
    }
    cout << total << endl;
    return 0;
}
