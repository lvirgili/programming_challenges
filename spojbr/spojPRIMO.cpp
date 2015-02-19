#include <iostream>
using namespace std;

int main() {
    long x;
    cin >> x;
    if (x < 2) {
        cout << "nao\n";
        return 0;
    }
    for (long i = 2; i*i <= x; ++i) {
        if (x % i == 0) {
            cout << "nao\n";
            return 0;
        }
    }
    cout << "sim\n";
    return 0;
}
