#include <bits/stdc++.h>
using namespace std;

int n;
int ds[20000];
int trans[20000][4];
pair<int, int> long_cons;

void dets() {
    for (int i = 0; i < n; ++i) {
        ds[i] = trans[i][0] * trans[i][3] - trans[i][1] * trans[i][2];
    }
}

void longest_cons() {
    int max_l = -1;
    int mbeg = -1, mend = -1;
    int beg = -1, end = -1;
    int l = 0;
    for (int i = 0; i < n; ++i) {
        if (ds[i] != 0) {
            if (beg == -1) {
                beg = i;
            }
        } else {
            if (beg != -1) {
                end = i - 1;
                if (end - beg > max_l) {
                    max_l = end - beg;
                    mbeg = beg;
                    mend = end;
                }
            }
        }
    }
    if (beg != -1 && mbeg == -1) {
        mbeg = beg;
        mend = n - 1;
    }
    long_cons = make_pair(mbeg, mend);
}

void print_trans() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << trans[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    int t; cin >> t;
    int ex = 1;
    while (t--) {
        printf("Experimento #%d:\n", ex++);
        int w, y;
        cin >> w >> y;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 4; ++j) {
                cin >> trans[i][j];
            }
        }
        print_trans();
        dets();
        longest_cons();
        int m; cin >> m;
        while (m--) {
            cin.ignore(256, '\n');
            char op; cin >> op;
            if (op == 'Q') {
                int a, b;
                cin >> a >> b;
                --a; --b;
                bool ok = true;
                for (int i = a; i < b; ++i) {
                    if (ds[i] == 0) {
                        ok = false;
                    }
                }
                if (ok) {
                    printf("%02d/%04d a %02d/%04d: dados consistentes (D > 0)\n", w + a, y, (w + b) % 52, (w + b) > 52 ? y + 1 : y);
                } else {
                    printf("%02d/%04d a %02d/%04d: dados corrompidos\n", w + a, y, (w + b) % 52, (w + b) > 52 ? y + 1 : y);
                }
            } else if (op == 'U') {
                int week;
                cin >> week; --week;
                for (int i = 0; i < 4; ++i) {
                    cin >> trans[week][i];
                }
                print_trans();
                dets();
                longest_cons();
            } else {
                printf("Maior periodo consistente: %02d/%04d a %02d/%04d\n", w + long_cons.first, y, (w + long_cons.second) % 52, (w + long_cons.second) > 52 ? y + 1 : y);
            }
        }
    }
    return 0;
}