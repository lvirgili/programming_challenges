#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, r;
    while (cin >> n >> r) {
        vector<bool> v(n+1, false);
        for (int i = 0; i < r; ++i) {
            int x; cin >> x;
            v[x] = true;
        }
        bool dead = false;
        for (int i = 1; i <= n; ++i) {
            if (v[i] == false) {
                cout << i << ' ';
                dead = true;
            }
        }
        if (!dead) cout << "*";
        cout << endl;
    }
    return 0;
}
