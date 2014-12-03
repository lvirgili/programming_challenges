#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int pos[n + 10];
        memset(pos, 0, sizeof pos);
        bool yeap = true;
        for (int i = 0; i < n; ++i) {
            int r;
            long var;
            cin >> r >> var;
            long pos_start = i + var;
            if (pos_start >= 0 && pos_start < n && pos[pos_start] == 0) {
                pos[pos_start] = r;
            } else {
                yeap = false;
            }
        }
        if (yeap) {
            for (int i = 0; i < n; ++i) {
                if (i > 0) cout << ' ';
                cout << pos[i];
            }
            cout << endl;
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
