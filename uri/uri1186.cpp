#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double m[12][12];
    char op;
    cin >> op;
    cin.ignore(256, '\n');
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin >> m[i][j];
        }
    }
    double soma = 0;
    int cont = 0;
    for (int i = 1; i < 12; ++i) {
        for (int j = 11; j >= 12 - i; --j) {
            soma += m[i][j];
            ++cont;
        }
    }
    if (op == 'S') printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/cont);
    return 0;
}
