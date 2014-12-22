#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int g, p;
    while (cin >> g >> p, g || p) {
        int posicoes[p + 1][g];
        for (int i = 0; i < g; ++i) {
            for (int j = 1; j <= p; ++j) {
                int posicao;
                cin >> posicao;
                posicoes[posicao][i] = j;
            }
        }
        int s;
        cin >> s;
        while (s--) {
            int pontos[p + 1];
            memset(pontos, 0, sizeof pontos);
            int q;
            cin >> q;
            for (int i = 1; i <= q; ++i) {
                int val;
                cin >> val;
                for (auto piloto : posicoes[i]) {
                    pontos[piloto] += val;
                }
            }
            int max = 0;
            for (int i = 1; i <= p; ++i) {
                if (pontos[i] > max) max = pontos[i];
            }
            bool has_printed = false;
            for (int i = 1; i <= p; i++) {
                if (pontos[i] == max) {
                    if (has_printed) cout << ' ';
                    cout << i;
                    has_printed = true;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
