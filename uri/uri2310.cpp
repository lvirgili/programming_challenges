#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long nat;

int main() {
    int n; cin >> n;
    int total[3] = {0, 0, 0};
    int good[3] = {0, 0, 0};
    while (n--) {
        string s;
        cin.ignore(256, '\n');
        cin >> s;
        int a, b, c;
        cin >> a >> b >> c;
        total[0] += a;
        total[1] += b;
        total[2] += c;
        cin >> a >> b >> c;
        good[0] += a;
        good[1] += b;
        good[2] += c;
    }
    printf("Pontos de Saque: %.2lf %%.\n", 100.0 * good[0] / total[0]);
    printf("Pontos de Bloqueio: %.2lf %%.\n", 100.0 * good[1] / total[1]);
    printf("Pontos de Ataque: %.2lf %%.\n", 100.0 * good[2] / total[2]);
    return 0;
}
