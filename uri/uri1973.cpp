#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    unsigned long long v[n], sheep = 0;
    bool yes[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sheep += v[i];
    }
    for (int i = 0; i < n; ++i) yes[i] = false;
    unsigned long total = 0, vis = 0;
    int pos = 0;
    while (true) {
        if (pos < 0 || pos >= n) break;
        if (v[pos] > 0) {
            if (yes[pos] == false) {
                yes[pos] = true;
                ++vis;
            }
            if (v[pos] % 2 == 0) {
                --v[pos];
                --pos;
            } else {
                --v[pos];
                 ++pos;
            }
            ++total;
        } else if (v[pos] == 0) --pos;
    }
    cout << vis << ' ' << sheep - total << endl;
    return 0;
}
