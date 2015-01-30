#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    long n, m;
    while (cin >> n >> m) {
        map<long, vector<long> > pos;
        for (long i = 1; i <= n; ++i) {
            long x;
            cin >> x;
            if (pos.count(x)) pos[x].push_back(i);
            else {
                vector<long> v(1, i);
                pos[x] = v;
            }
        }
        while (m--) {
            long k, w;
            cin >> k >> w;
            if (pos.count(w) == 1) {
                if (pos[w].size() < k) {
                    cout << 0 << endl;
                } else {
                    cout << pos[w][k-1] << endl;
                }
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
