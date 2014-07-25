#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        int a, f;
        cin >> a >> f;
        for (int i = 0; i < f; ++i) {
            for (int j = 1; j <= a; ++j) {
                for (int h = 1; h <= j; ++h) {
                    cout << j;
                }
                cout << endl;
            }
            for (int j = a-1; j >= 1; --j) {
                for (int h = 1; h <= j; ++h) {
                    cout << j;
                }
                cout << endl;
            }
            if (!(i == (f-1) && t == (T-1)))
                cout << endl;
        }
    }
    return 0;
}
