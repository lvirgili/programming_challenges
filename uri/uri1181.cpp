#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double m[12][12];
    int linha;
    cin >> linha;
    char op;
    cin >> op;
    cin.ignore(256, '\n');
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin >> m[i][j];
        }
    }
    double soma = 0;
    for (int j = 0; j < 12; ++j) {
        soma += m[linha][j];
    }
    if (op == 'S') printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/12);
    return 0;
}
