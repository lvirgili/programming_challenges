#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool print = false;
    while (n--) {
        if (print) cout << endl;
        print = true;
        int m, c;
        cin >> m >> c;
        vector<int> v[m];
        for (int i = 0; i < c; ++i) {
            int x;
            cin >> x;
            v[x % m].push_back(x);
        }
        for (int i = 0; i < m; ++i) {
            cout << i << " -> ";
            for (auto &e : v[i]) {
                cout << e << " -> ";
            }
            cout << "\\" << endl;
        }
    }
    return 0;
}
