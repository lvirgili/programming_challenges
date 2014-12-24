#include <iostream>
#include <limits>
#include <string>
using namespace std;

unsigned long long efat(int n, int k) {
    long c = 1;
    unsigned long long prod = n;
    while (n - c*k >= 1) {
        prod = prod * (n - c*k);
        ++c;
    }
    return prod;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << efat(n, (int)s.size()) << endl;
    }
    return 0;
}
