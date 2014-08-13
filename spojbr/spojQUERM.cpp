#include <iostream>
using namespace std;

int main() {
    int n;
    int t = 1;
    while (cin >> n, n != 0) {
        for (int i = 1; i <= n; ++i) {
            int x; cin >> x;
            if (x == i) {
                cout << "Teste " << t++ << endl;
                cout << x << endl << endl;
            }
        }
    }
    return 0;
}
