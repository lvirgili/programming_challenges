#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned n;
    while (cin >> n, n != 0) {
        if (sqrt(n) == floor(sqrt(n))) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
