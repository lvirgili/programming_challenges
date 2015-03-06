#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n+1][n+1];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            m[i][j] += x;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            cout << m[i][j] << ' ';
        }
        cout << m[i][n-1] << endl;
    }
    return 0;
}
