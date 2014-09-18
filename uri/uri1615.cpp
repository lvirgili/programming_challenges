#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        int N, M;
        cin >> N >> M;
        long v[N+1];
        memset(v, 0, sizeof(v));
        long max = 0;
        int who;
        for (int m = 0; m < M; ++m) {
            int x; cin >> x;
            ++v[x];
            if (v[x] > max) {
                max = v[x];
                who = x;
            }
        }
        if (max > (M / 2))
            cout << who << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
