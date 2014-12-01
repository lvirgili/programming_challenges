#include <iostream>
using namespace std;

int n;
int m[128][128];

void fill(int ini, int fim, int num) {
    for (int i = ini; i <= fim; ++i) {
        for (int j = ini; j <= fim; ++j) {
            if (i == ini || i == fim || j == ini || j == fim) {
                m[i][j] = num;
            }
        }
    }
    if (ini + 1 <= fim - 1)
        fill(ini + 1, fim - 1, num + 1);
}

int main() {
    while (cin >> n, n) {
        fill(1, n, 1);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                printf("%3d", m[i][j]);
                if (j < n) cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
}
