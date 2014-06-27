#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    if  (n == 2) {
        cout << 0 << ' ' << 1 << endl;
        return 0;
    }
    cout << 0 << ' ' << 1 << ' ';
    long a = 0, b = 1;
    for (int i = 2; i < (n - 1); ++i) {
        long aux = b;
        b += a;
        a = aux;
        cout << b << ' ';
    }
    cout << a + b << endl;
    return 0;
}
