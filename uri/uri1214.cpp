#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int notas[n];
        long soma = 0;
        for (int i = 0; i < n; ++i) {
            cin >> notas[i];
            soma += notas[i];
        }
        double avg = 1.0 * soma / n;
        int cont = 0;
        for (int i = 0; i < n; ++i) {
            if (notas[i] > avg) ++cont;
        }
        printf("%.3lf%%\n", 100.0 * cont / n);
    }
    return 0;
}
