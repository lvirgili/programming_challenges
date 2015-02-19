#include <iostream>
#include <cmath>
#include <cfloat>
using namespace std;

int main() {
    double eps = DBL_EPSILON;
    double x;
    cin >> x;
    if (x + eps < 0 || fabs(x - eps) > 100) {
        cout << "Fora de intervalo\n";
    } else if (0 <= fabs(x - eps) && fabs(x - eps) <= 25) {
        cout << "Intervalo [0,25]\n";
    } else if (25 < fabs(x - eps) && fabs(x - eps) <= 75) {
        cout << "Intervalo (25,50]\n";
    } else if (75 < fabs(x - eps) && fabs(x - eps) <= 100) {
        cout << "Intervalo (75,100]\n";
    }
    return 0;
}
