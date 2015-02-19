#include <iostream>
using namespace std;

int main() {
    int t = 1;
    int n;
    while (cin >> n, n) {
        cout << "Teste " << t++ << endl;
        int a = 0, b = 0;
        while (n--) {
            int x, y;
            cin >> x >> y;
            a += x;
            b += y;
            cout << a - b << endl;
        }
        cout << endl;
    }
    return 0;
}
