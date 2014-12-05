#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << (n / 3) * (m / 3) << endl;
    }
    return 0;
}
