#include <iostream>
using namespace std;

int main() {
    int r;
    int t = 1;
    while (cin >> r, r) {
        int a = 0, b = 0;
        while (r--) {
            int x, y;
            cin >> x >> y;
            a += x;
            b += y;
        }
        cout << "Teste " << t++ << endl;
        if (a > b) cout << "Aldo\n\n";
        else cout << "Beto\n\n";
    }
}
