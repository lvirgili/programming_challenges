#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n, m;
    long s;
    while (cin >> n >> m >> s, n && m && s) {
        cin.ignore(256, '\n');
        char a[n][m], o;
        int pos_i, pos_j;
        for (int i = 0; i < n; ++i) {
            string k;
            getline(cin, k);
            for (unsigned j = 0; j < k.size(); ++j) {
                a[i][j] = k[j];
                if (isalpha(k[j])) {
                    pos_i = i;
                    pos_j = j;
                    o = k[j];
                }
            }
        }
        string ins;
        getline(cin, ins);
        long figs = 0;
        for (auto c : ins) {
            if (c == 'D') {
                if (o == 'N') o = 'L';
                else if (o == 'L') o = 'S';
                else if (o == 'S') o = 'O';
                else o = 'N';
            }
            else if (c == 'E') {
                if (o == 'N') o = 'O';
                else if (o == 'L') o = 'N';
                else if (o == 'S') o = 'L';
                else o = 'S';
            }
            else if (c == 'F') {
                int x = 0, y = 0;
                if (o == 'N') --y;
                if (o == 'L') ++x;
                if (o == 'S') ++y;
                if (o == 'O') --x;
                if (pos_i + y >= 0 && pos_i + y < n &&
                    pos_j + x >= 0 && pos_j + x < m) {
                    if (a[pos_i+y][pos_j+x] != '#') {
                        pos_i = pos_i + y;
                        pos_j = pos_j + x;
                        if (a[pos_i][pos_j] == '*') {
                            ++figs;
                            a[pos_i][pos_j] = '.';
                        }
                    }
                }
            }
        }
        cout << figs << endl;
    }
    return 0;
}
