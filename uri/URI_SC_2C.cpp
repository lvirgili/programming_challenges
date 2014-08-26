#include <iostream>
#include <set>
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        unsigned N; cin >> N;
        set<unsigned long> s;
        for (unsigned n = 0; n < N; ++n) {
            unsigned long x; cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
    return 0;
}
