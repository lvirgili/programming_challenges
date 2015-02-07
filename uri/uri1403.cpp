#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct j {
    int num, ap;
};

bool comp(const j &a, const j &b) {
    return a.ap > b.ap;
}

int main() {
    int n, m;
    j js[10010];
    while (cin >> n >> m, n) {
        for (int i = 1; i <= 10000; ++i) {
            js[i].num = i;
            js[i].ap = 0;
        }
        while (n--) {
            for (int i = 0; i < m; ++i) {
                int jog; cin >> jog;
                js[jog].ap++;
            }
        }
        stable_sort(js + 1, js + 10001, comp);
        int val = js[2].ap;
        int i = 2;
        while (js[i].ap == val) cout << js[i++].num << ' ';
        cout << endl;
    }
    return 0;
}
