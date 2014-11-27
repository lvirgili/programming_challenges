#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double f;
    cin >> f;
    double novo, r, p;
    if (f <= 400) {
        p = 0.15;
    } else if (f <= 800) {
        p = 0.12;
    } else if (f <= 1200) {
        p = 0.1;
    } else if (f <= 2000) {
        p = 0.07;
    } else {
        p = 0.04;
    }
    r = f * p;
    novo = f + r;
    printf("Novo salario: %.2lf\n", novo);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: %d \%\n", (int)(100 * p));
    return 0;
}
