#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int L = 110;
    vector<bool> v(L, true);
    vector<int> luck;
    for (unsigned i = 2; i <= L-1; i++) {
        if (v[i]) {
            luck.push_back(i);
            int k = i + i;
            while (k <= L-1) {
                v[k] = false;
                k += i;
            }
        }
    }
    for (unsigned i = 0; i < luck.size(); ++i) {
        cout << i+1 << ' ' << luck[i] << endl;
    }
    int n;
    while (cin >> n, n) {
        cout << luck[n-1] << endl;
    }
    return 0;
}
