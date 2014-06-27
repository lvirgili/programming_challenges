#include <iostream>
using namespace std;

long sum(long x) {
    long s = 0;
    for (long i = 1; i < x; ++i) {
        if (x % i == 0)
            s += i;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long x;
        cin >> x;
        if (sum(x) == x)
            cout << x << " eh perfeito\n";
        else
            cout << x << " nao eh perfeito\n";
    }
    return 0;
}
