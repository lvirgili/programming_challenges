#include <iostream>
using namespace std;

int main() {
    int v[101];
    int n; cin >> n;
    int cont = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] % 2 == 0) ++cont;
    }
    if (cont > 1) {
        for (int i = 0; i < n; ++i) {
            if (v[i] % 2 == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (v[i] % 2 == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;

}
