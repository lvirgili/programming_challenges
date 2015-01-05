#include <iostream>
#include <algorithm>
using namespace std;

struct a {
    int pos, nota;
};

bool comp(const a &x, const a &y) {
    return x.nota > y.nota;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        a aa[m];
        for (int i = 0; i < m; ++i) {
            aa[i].pos = i;
            cin >> aa[i].nota;
        }
        sort(aa, aa + m, comp);
        int c = 0;
        for (int i = 0; i < m; ++i) {
            if (aa[i].pos == i) ++c;
        }
        cout << c << endl;
    }
    return 0;
}
