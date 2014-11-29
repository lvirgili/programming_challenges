#include <iostream>
using namespace std;

int main() {
    int comb[] = {0, 0, 0, 0};
    int c = 0;
    while (c != 4) {
        int x;
        do {
            cin >> x;
        } while (x < 1 || x > 4);
        c = x;
        ++comb[c];
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << comb[1] << endl;
    cout << "Gasolina: " << comb[2] << endl;
    cout << "Diesel: " << comb[3] << endl;
    return 0;
}
