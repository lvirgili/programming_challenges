#include <iostream>
using namespace std;

int main() {
    int par[5], impar[5], p = 0, i = 0;
    for (int t = 0; t < 15; ++t) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            par[p] = x;
            ++p;
            if (p == 5) {
                for (int j = 0; j < 5; ++j)
                    cout << "par[" << j << "] = " << par[j] << endl;
                p = 0;
            }
        } else {
            impar[i] = x;
            ++i;
            if (i == 5) {
                for (int j = 0; j < 5; ++j)
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                i = 0;
            }
        }
    }
    for (int j = 0; j < i; ++j) {
        cout << "impar[" << j << "] = " << impar[j] << endl;
    }
    for (int j = 0; j < p; ++j) {
        cout << "par[" << j << "] = " << par[j] << endl;
    }
    return 0;
}
