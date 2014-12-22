#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
    long a, b;
    while (cin >> a >> b, a) {
        set<long> ca, cb;
        for (long i = 0; i < a; ++i) {
            long x;
            cin >> x;
            ca.insert(x);
        }
        for (long i = 0; i < b; ++i) {
            long x;
            cin >> x;
            cb.insert(x);
        }
        vector<long> res((a > b) ? 2*a : 2*b);
        auto it = set_intersection(ca.begin(), ca.end(), cb.begin(), cb.end(), res.begin());
        res.resize(it - res.begin());
        if (ca.size() < cb.size()) {
            cout << ca.size() - res.size() << endl;
        } else {
            cout << cb.size() - res.size() << endl;
        }
    }
    return 0;
}
