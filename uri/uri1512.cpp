#include <iostream>
using namespace std;

long gcd(long a, long b) {
    while (b) {
        long r = b;
        b = a % b;
        a = r;
    }
    return a;
}

int main() {
    long n, a, b;
    while (cin >> n >> a >> b, n) {
        long total = n / a + n / b;
        long g = gcd(a, b);
        long lcm = (a * b) / g;

        total -= n / lcm;
        cout << total << endl;
    }
    return 0;
}
