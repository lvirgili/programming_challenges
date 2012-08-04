#include <iostream>
using namespace std;

int board[102][102];

int main() {
    int n, m, f = 1;
    while (cin >> n >> m) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                board[i][j] = 0;
            }
        }
        if (n == 0) break;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                char ch; cin >> ch;
                if (ch == '*') {
                    board[i][j] = -9;
                    ++board[i-1][j-1];
                    ++board[i-1][j];
                    ++board[i-1][j+1];
                    ++board[i][j-1];
                    ++board[i][j+1];
                    ++board[i+1][j-1];
                    ++board[i+1][j];
                    ++board[i+1][j+1];
                }
            }
        }
        if (f > 1) cout << endl;
        cout << "Field #" << f << ":\n";
        ++f;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (board[i][j] < 0) {
                    cout << "*";
                } else {
                    cout << board[i][j];
                }
                board[i][j] = 0;
            }
            cout << endl;
        }
    }

    return 0;
}
