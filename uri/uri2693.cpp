#include <bits/stdc++.h>
using namespace std;

struct p {
    char name[256];
    char region;
    int cost;
};

bool comp(struct p x, struct p y) {
    if (x.cost != y.cost) {
        return x.cost < y.cost;
    }
    if (x.region != y.region) {
        return x.region < y.region;
    }
    int a = strcmp(x.name, y.name);
    return a < 0;
}

int main() {
    int n;
    while (cin >> n) {
        p ps[n];
        for (int i = 0; i < n; ++i) {
            cin.ignore(256, '\n');
            scanf("%s %c %d", ps[i].name, &ps[i].region, &ps[i].cost);
        }
        
        sort(ps, ps + n, comp);
        for (int i = 0; i < n; ++i) {
            cout << ps[i].name << endl;
        }
    }
    return 0;
}