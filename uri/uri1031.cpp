#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    int max[101];
    for (n = 13; n <= 100; ++n) {
        for (int m = 1;; ++m) {
            list<int> v;
            for (int i = 0; i < n; ++i) {
                v.push_back(i+1);
            }
            auto it = v.begin();
            v.erase(it);
            it = v.begin();
            while (v.size() > 1) {
                for (int i = 1; i < m; ++i) {
                    ++it;
                    if (it == v.end()) it = v.begin();
                }
                auto it2 = it;
                ++it2;
                if (it2 == v.end()) it2 = v.begin();
                v.erase(it);
                it = it2;
            }
            if (v.front() == 13) {
                max[n] = m;
                break;
            }
        }
    }
    while (cin >> n, n) {
        cout << max[n] << endl;
    }
    return 0;
}
