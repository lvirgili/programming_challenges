#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long nat;

int main() {
    int n;
    while (cin >> n) {
        int m, l;
        cin >> m >> l;
        int bm[m][n], bl[l][n];
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> bm[i][j];
            }
        }
        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> bl[i][j];
            }
        }
        int cm, cl;
        cin >> cm >> cl;
        --cm; --cl;
        int a;
        cin >> a;
        --a;
        if (bm[cm][a] > bl[cl][a]) {
            cout << "Marcos\n";
        } else if (bm[cm][a] < bl[cl][a]) {
            cout << "Leonardo\n";
        } else {
            cout << "Empate\n";
        }
    }
    return 0;
}