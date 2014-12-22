#include <iostream>
#include <algorithm>
using namespace std;

long gcd(long a, long b) {
    while (a % b) {
        long r = a % b;
        a = b;
        b = r;
    }
    return b;
}

int main() {
    long a, b, c;
    while (cin >> a >> b >> c) {
        if (a < b) swap(a, b);
        if (b < c) swap(b, c);
        if (a < b) swap(a, b);
        if (a*a != b*b + c*c) {
            cout << "tripla\n";
        } else {
            if (gcd(a, b) == 1 && gcd(a, c) == 1) {
                cout << "tripla pitagorica primitiva\n";
            } else {
                cout << "tripla pitagorica\n";
            }
        }
    }
    return 0;
}
