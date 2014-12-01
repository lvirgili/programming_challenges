#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                int x;
                if (i == j && i != n - j + 1) x = 1;
                else if (i == n - j + 1) x = 2;
                else x = 3;
                cout << x;
            }
            cout << endl;
        }
    }
}
