#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
        int vx = cx - ax;
        int vy = cy - ay;
        if ((ax <= rx && rx <= ax + vx) && (ay <= ry && ry <= ay + vy))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
