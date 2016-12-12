#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        string p1, p1c, p2, p2c;
        cin >> p1 >> p1c >> p2 >> p2c;
        unsigned long long x, y; cin >> x >> y;
        if ((x + y) % 2 == 0) {
            if (p1c == "PAR") cout << p1 << endl;
            else cout << p2 << endl;
        } else {
            if (p1c == "IMPAR") cout << p1 << endl;
            else cout << p2 << endl;
        }
    }
    return 0;
}
