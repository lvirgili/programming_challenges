#include <iostream>
using namespace std;

int main() {
    int x, z;
    cin >> x;
    do {
        cin >> z;
    } while (x >= z);
    int soma = x;
    int cont = 1;
    while (soma < z) {
        ++x;
        ++cont;
        soma += x;
    }
    cout << cont << endl;
    return 0;
}
