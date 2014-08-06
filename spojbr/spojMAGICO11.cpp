#include <iostream>
using namespace std;

typedef unsigned long long natural;

int main() {
    int N; cin >> N;
    natural m[N][N];
    bool magico = true;
    natural soma = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%llu", &m[i][j]);
            if (i == 0)
                soma += m[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        natural s = 0;
        for (int j = 0; j < N; ++j) {
            s += m[i][j];
        }
        if (s != soma) {
            magico = false;
            break;
        }
    }

    for (int i = 0; magico && i < N; ++i) {
        natural s = 0;
        for (int j = 0; j < N; ++j) {
            s += m[j][i];
        }
        if (s != soma) {
            magico = false;
            break;
        }
    }

    natural d = 0, a = 0;
    for (int i = 0; magico && i < N; ++i) {
        d += m[i][i];
        a += m[i][N - i - 1];
    }
    if (d != a || d != soma)
        magico = false;

    if (magico)
        cout << soma << endl;
    else
        cout << 0 << endl;

    return 0;
}
