#include <cstdio>

int main() {
    double soma = 1.0;
    unsigned long long pot = 2;
    for (int i = 3; i < 40; i += 2) {
        soma += 1.0 * i / pot;
        pot *= 2;
    }
    printf("%.2f\n", soma);
    return 0;
}
