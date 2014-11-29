#include <iostream>
#include <cstdio>
using namespace std;

void func() {
    int val = 0;
    double notas[2];
    do {
        double nota;
        cin >> nota;
        if (nota >= 0 && nota <= 10) {
            notas[val] = nota;
            ++val;
        } else {
            cout << "nota invalida\n";
        }
    } while (val < 2);
    printf("media = %.2lf\n", (notas[0] + notas[1]) / 2);
}

int main() {
    int x = 1;
    while (x == 1) {
        func();
        do {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> x;
        } while (!(x == 1 || x == 2));
    }
    return 0;
}
