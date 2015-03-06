#include <iostream>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    while (n--) {
        bool done = false;
        int m[4][4];
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                cin >> m[i][j];
                if (m[i][j] == 2048) {
                    done = true;
                }
            }
        }
        bool l = false, r = false, d = false, u = false;
        for (int i = 0; i < 4; ++i) {
            for (int j = 1; j < 4; ++j) {
                if (m[i][j]) {
                    if (m[i][j-1] == 0 || m[i][j-1] == m[i][j]) {
                        l = true;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (m[i][j]) {
                    if (m[i][j+1] == 0 || m[i][j+1] == m[i][j]) {
                        r = true;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (m[j][i]) {
                    if (m[j+1][i] == 0 || m[j+1][i] == m[j][i]) {
                        d = true;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < 4; ++i) {
            for (int j = 1; j < 4; ++j) {
                if (m[j][i]) {
                    if (m[j-1][i] == 0 || m[j-1][i] == m[i][j]) {
                        u = true;
                        break;
                    }
                }
            }
        }
        if (done) {
            cout << "NONE\n";
            continue;
        }
        bool p = false;
        if (d) {
            cout << "DOWN";
            p = true;
        }
        if (l) {
            if (p) cout << " ";
            cout << "LEFT";
            p = true;
        }
        if (r) {
            if (p) cout << " ";
            cout << "RIGHT";
            p = true;
        }
        if (u) {
            if (p) cout << " ";
            cout << "UP";
            p = true;
        }
        if (!p) cout << "NONE";
        cout << endl;
    }
    return 0;
}
