#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m, n) {
        set<int> s, rep;
        for (int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            auto p = s.insert(x);
            if (!p.second) {
                rep.insert(x);
            }
        }
        cout << rep.size() << endl;
    }
    return 0;
}
