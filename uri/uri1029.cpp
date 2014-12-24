#include <iostream>
using namespace std;

unsigned long long calls;

unsigned long long fib(unsigned long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    else {
        calls += 2;
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calls = 0;
        int n;
        cin >> n;
        unsigned long long f = fib(n);
        cout << "fib(" << n << ") = " << calls << " calls = " << f << endl;
    }
    return 0;
}
