#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int p[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    int pm = 0, m = p[0];
    for (int i = 1; i < n; ++i) {
        if (p[i] < m) {
            pm = i;
            m = p[i];
        }
    }
    cout << pm + 1 << endl;
    return 0;
}
