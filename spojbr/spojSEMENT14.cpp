#include <iostream>
#include <cstring>
using namespace std;

int main() {
    long F, R;
    cin >> F >> R;
    bool fita[2][F + 2];
    memset(fita[0], false, sizeof(fita[0]));
    memset(fita[1], false, sizeof(fita[1]));
    long total = 0;
    for (long i = 0; i < R; ++i) {
        long x; cin >> x;
        fita[0][x] = true;
        ++total;
    }
    long turns = 0;
    int t = 0;
    fita[0][0] = fita[0][F+1] = true;
    fita[1][0] = fita[1][F+1] = true;
    while (total < F) {
        int o = (t + 1) % 2;
        for (long i = 1; i <= F; ++i) {
            if (fita[t][i]) {
                fita[o][i] = true;
                if (!fita[t][i-1]) {
                    fita[o][i-1] = true;
                    ++total;
                }
                if (!fita[t][i+1]) {
                    fita[o][i+1] = true;
                    ++total;
                }
            }
        }
        t = (t + 1) % 2;
        ++turns;
        cout << turns << endl;
    }
    cout << turns << endl;
    return 0;
}
