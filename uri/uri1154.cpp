#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int idade;
    double total = 0;
    int n = 0;
    while (cin >> idade, idade >= 0) {
        total += idade;
        ++n;
    }
    printf("%.2f\n", (double)total/n);
    return 0;
}
