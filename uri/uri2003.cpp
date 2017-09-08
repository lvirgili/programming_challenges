#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int h, m;
    while (scanf("%d:%d", &h, &m) != EOF) {
        ++h;
        m = (m + 60) % 60;
        int atraso;
        if (h < 8) {
            atraso = 0;
        } else {
            atraso = (h - 8) * 60 + m;
        }
        printf("Atraso maximo: %d\n", atraso);
    }
    return 0;
}
