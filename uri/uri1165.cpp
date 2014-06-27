#include <iostream>
using namespace std;

bool prime(long x) {
    if (x < 2) return false;
    for (long i = 2; i*i <= x; (i > 2) ? i += 2: ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long x;
        cin >> x;
        if (prime(x))
            cout << x << " eh primo\n";
        else
            cout << x << " nao eh primo\n";
    }
    return 0;
}
