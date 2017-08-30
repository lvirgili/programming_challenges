#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        long x; cin >> x;
        long diff = 2015 - x;
        if (diff > 0) {
            cout << diff << " D.C.\n";
        } else {
            --diff;
            cout << -diff << " A.C.\n";
        }
    }
    return 0;
}
