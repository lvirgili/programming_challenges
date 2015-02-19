#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long d;
        int in, b;
        cin >> d >> in >> b;
        int pin[in];
        for (int i = 0; i < in ; ++i) cin >> pin[i];
        long max = 0;
        for (int i = 0; i < b; ++i) {
            int qi;
            cin >> qi;
            long valor = 0;
            for (int j = 0; j < qi; ++j) {
                int ind, q;
                cin >> ind >> q;
                valor += q * pin[ind];
            }
            long numb = d / valor;
            if (numb > max) max = numb;
        }
        cout << max << endl;
    }
    return 0;
}
