#include <iostream>
#include <cmath>
using namespace std;

double dist(int x1, int x2, int y1, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    int x1, x2, y1, y2, rc, rf;
    while (cin >> rc >> x1 >> y1 >> rf >> x2 >> y2) {
        if (dist(x1, x2, y1, y2) + rf <= rc) {
            cout << "RICO\n";
        } else {
            cout << "MORTO\n";
        }
    }
    return 0;
}
