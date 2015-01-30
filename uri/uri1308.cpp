#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    while (n--) {
        unsigned long long x;
        cin >> x;
        cout << (unsigned long long)((1 + sqrt(1 + 8*x)) / 2 - 1) << endl;
    }
    return 0;
}
