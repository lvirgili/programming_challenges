#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    double v, d;
    while (cin >> v >> d) {
        double area = (d / 2) * (d / 2) * 3.14;
        double height = v / area;
        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }
    return 0;
}
