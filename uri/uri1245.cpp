#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int v[32][2];
        memset(v, 0, sizeof v);
        while (n--) {
            int t;
            char l;
            cin >> t >> l;
            if (l == 'D') ++v[t - 30][0];
            else ++v[t-30][1];
        }
        long total = 0;
        for (int i = 0; i < 31; ++i) {
            total += min(v[i][0], v[i][1]);
        }
        cout << total << endl;
    }
    return 0;
}
