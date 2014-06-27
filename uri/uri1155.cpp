#include <cstdio>

int main() {
    double soma = 1.0;
    for (int i = 2; i <= 100; ++i) {
        soma += 1.0 / i;
    }
    printf("%.2f\n", soma);
    return 0;
}
