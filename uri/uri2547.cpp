#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, min_h, max_h;
    while (cin >> n >> min_h >> max_h) {
        int total = 0;
        while (n--) {
            int h; cin >> h;
            if (min_h <= h && h <= max_h) ++total;
        }
        cout << total << endl;
    }
    return 0;
}