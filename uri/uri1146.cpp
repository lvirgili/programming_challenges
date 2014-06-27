#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n != 0) {
        for (int i = 1; i < n; ++i) {
            cout << i << ' ';
        }
        cout << n << endl;
    }
    return 0;
}
