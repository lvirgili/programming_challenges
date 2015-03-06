#include <iostream>
#include <vector>
using namespace std;

bool has3(long long x) {
    while (x) {
        if (x % 10 == 3) return true;
        x /= 10;
    }
    return false;
}

int main() {
    vector<long long> fib(2, 1), trib;
    unsigned i = 2;
    while (trib.size() < 60) {
        long long n = fib[i-1] + fib[i-2];
        if (n % 3 == 0 || has3(n)) trib.push_back(n);
        fib.push_back(n);
        ++i;
    }
    int n;
    while (cin >> n) {
        cout << trib[n-1] << endl;
    }
    return 0;
}
