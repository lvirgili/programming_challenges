#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct mens {
    string nome;
    int a, t;
};

bool comp(const struct mens &a, const struct mens &b) {
    return (a.a - a.t) < (b.a - b.t);
}

int main() {
    int n;
    while (cin >> n, n) {
        struct mens m[n];
        for (int i = 0; i < n; ++i) {
            cin >> m[i].nome >> m[i].a >> m[i].t;
            cin.ignore(256, '\n');
        }
        sort(m, m + n, comp);
        cout << m[0].nome << endl;
    }
    return 0;
}
