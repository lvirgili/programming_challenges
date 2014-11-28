#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    for (int j = 1; j <= 3; ++j) printf("I=0 J=%d\n", j);
    for (double i = 0.2; i < 0.9; i += 0.2) {
        for (int j = 1; j <= 3; ++j) {
            printf("I=%.1lf J=%.1lf\n", i, i + j);
        }
    }
    for (int j = 1; j <= 3; ++j) printf("I=1 J=%d\n", j + 1);
    for (double i = 1.2; i < 1.9; i += 0.2) {
        for (int j = 1; j <= 3; ++j) {
            printf("I=%.1lf J=%.1lf\n", i, i + j);
        }
    }
    for (int j = 1; j <= 3; ++j) printf("I=2 J=%d\n", j + 2);
    return 0;
}
