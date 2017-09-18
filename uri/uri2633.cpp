#include <bits/stdc++.h>
using namespace std;

struct carne {
    string nome;
    int val;
};

typedef struct carne carne;bool comp (carne a, carne b) {
    return a.val < b.val;
}

int main() {
    int n;
    while (cin >> n) {
        carne cs[n];
        for (int i = 0; i < n; ++i) {
            cin.ignore(256, '\n');
            cin >> cs[i].nome >> cs[i].val;
        }
        sort(cs, cs + n, comp);
        for (int i = 0; i < n - 1; ++i) {
            cout << cs[i].nome << ' ';
        }
        cout << cs[n - 1].nome << endl;
    }
    return 0;
}