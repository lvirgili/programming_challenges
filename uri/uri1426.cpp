#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        long m[9][9];
        for (int i = 0; i < 9; i += 2) {
            for (int j = 0; j <= i; j += 2) {
                cin >> m[i][j];
            }
        }
        for (int i = 0; i < 8; i += 2) {
            for (int j = 0; j <= i; j += 2) {
               m[i+1][j] = (m[i][j] + m[i+2][j] - m[i+2][j+2]) / 2;
               m[i+1][j+1] = (m[i][j] - m[i+2][j] + m[i+2][j+2]) / 2;
               m[i+2][j+1] = m[i+1][j] - m[i+2][j];
            }
        }
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j <= i; ++j) {
                if (j > 0) cout << ' ';
                cout << m[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
