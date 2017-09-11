#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long nat;

int main() {
    int a, b, c; cin >> a >> b >> c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cout << "Invalido\n";
        return 0;
    }
    if (a == b && a == c) {
        cout << "Valido-Equilatero\n";
        cout << "Retangulo: N\n";
    } else if (a == b || a == c || b == c) {
        cout << "Valido-Isoceles\n";
        if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
            cout << "Retangulo: S\n";
        } else {
            cout << "Retangulo: N\n";
        }
    } else {
        cout << "Valido-Escaleno\n";
        if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
            cout << "Retangulo: S\n";
        } else {
            cout << "Retangulo: N\n";
        }
    }
    return 0;
}
