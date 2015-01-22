#include <iostream>
using namespace std;

int main() {
    long long fib[41];
    fib[0] = fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i < 41; ++i) fib[i] = fib[i-1] + fib[i-2];
    int n;
    while (cin >> n, n) {
        cout << fib[n] << endl;
    }
    return 0;
}
