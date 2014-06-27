#include <iostream>
using namespace std;

int main() {
    int Q, D, P;
    while (cin >> Q, Q != 0) {
        cin >> D >> P;
        int p = Q * (1.0 * P * D / (P - Q));
        cout << p << " pagina";
        if (p != 1)
            cout << "s";
        cout << endl;
    }
    return 0;
}
