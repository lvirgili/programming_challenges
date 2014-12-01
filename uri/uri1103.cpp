#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d, a || b || c || d) {
        int min = d - b;
        int hora = c - a;
        if (min < 0) {
            min = 60 + min;
            hora--;
        }
        if (hora < 0) hora = 24 + hora;
        cout << hora * 60 + min << endl;
    }
    return 0;
}
