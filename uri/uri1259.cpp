#include <iostream>
#include <algorithm>
using namespace std;

bool comp(const unsigned long &a, const unsigned long &b) {
    unsigned long pa = a % 2, pb = b % 2;
    if (pa == 0 && pb != 0) return true;
    else if (pa != 0 && pb == 0) return false;
    else if (pa == 0 && pb == 0) return a < b;
    else return a > b;
}

int main() {
    long n;
    cin >> n;
    unsigned long v[n];
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v, v + n, comp);
    for (int i = 0; i < n; ++i) {
        cout << v[i] << endl;
    }
    return 0;
}
