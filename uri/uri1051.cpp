#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double f;
    cin >> f;
    double i = 0;
    if (f > 2000 && f <= 3000) {
        i = (f - 2000) * 0.08;
    } else if (f > 3000 && f <= 4500) {
        i = 1000 * 0.08 + (f - 3000) * 0.18;
    } else if (f > 4500){
        i = 1000 * 0.08 + 1500 * 0.18 + (f - 4500) * 0.28;
    }
    printf("R$ %.2lf\n", i);
    return 0;
}
