#include <iostream>
using namespace std;

int main() {
    int t[5], q[5];
    for (int i = 0; i < 5; ++i)
        cin >> t[i];
    for (int i = 0; i < 5; ++i)
        cin >> q[i];
    bool ok = true;
    for (int i = 0; i < 5; ++i) {
        if (t[i] == q[i]) {
            ok = false;
            break;
        }
    }
    if (ok) cout << "Y\n";
    else cout << "N\n";
    return 0;
}
