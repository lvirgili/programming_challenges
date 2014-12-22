#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        unsigned a, b;
        cin >> a >> b;
        int digb = floor(log10(b)) + 1;
        if (a % (unsigned)pow(10, digb) == b) {
            cout << "encaixa\n";
        } else {
            cout << "nao encaixa\n";
        }
    }
    return 0;
}
