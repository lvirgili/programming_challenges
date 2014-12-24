#include <iostream>
using namespace std;

long gcd(long a, long b) {
    while (b) {
        long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        long f1, f2;
        cin >> f1 >> f2;
        cout << gcd(f1, f2) << endl;
    }
    return 0;
}
