#include <iostream>
using namespace std;

int main() {
    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;
    int esq = p1 * c1,
        dir = p2 * c2;
    if (esq == dir) {
        cout << "0\n";
    } else if (esq < dir) {
        cout << "1\n";
    } else {
        cout << "-1\n";
    }
    return 0;
}
