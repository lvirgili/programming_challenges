#include <iostream>
using namespace std;

int main() {
    int m, h;
    char ch;
    while (cin >> h >> ch >> m) {
        if (m == h && h == 0) break;
        double min_pos = 6 * m;
        double hour_pos = h * 30;
        hour_pos += m / 2.0;
        double angle = min_pos - hour_pos;
        if (angle < 0) angle = -angle;
        if (angle > 180) angle = 360.0 - angle;
        cout.precision(3);
        cout << fixed << angle << endl;
    }
    return 0;
}
