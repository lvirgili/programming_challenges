#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    vector<bool> pp(1000000, true);
    vector<long long> p;
    p.push_back(0);
    for (unsigned i = 2; i < pp.size(); ++i) {
        if (pp[i]) {
            p.push_back(i);
            if (p.size() > 3502) break;
            unsigned k = i + i;
            while (k < pp.size()) {
                pp[k] = false;
                k += i;
            }
        }
    }
    vector<int> safe(3503, 0);
    for (int n = 1; n <= 3502; ++n) {
        list<int> l;
        for (int i = 1; i <= n; ++i) {
            l.push_back(i);
        }
        unsigned posp = 1;
        while (l.size() > 1) {
            auto it = l.begin();
            for (long long cont = 0; cont < p[posp] - p[posp-1]; ++cont) {
                ++it;
                if (it == l.end()) it = l.begin();
            }
            auto it2 = it;
            ++it2;
            l.erase(it);
            it = it2;
            ++posp;
        }
        safe[n] = l.front();
    }
    cout << safe[6] << endl;
    return 0;
}
