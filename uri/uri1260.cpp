#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    cin.ignore(256, '\n');
    bool p = false;
    while (n--) {
        if (p) cout << endl;
        p = true;
        string tree;
        long all = 0;
        map<string, long> ts;
        while (getline(cin, tree), tree != "") {
            if (ts.count(tree)) ++ts[tree];
            else ts[tree] = 1;
            ++all;
        }
        for (auto &e : ts) {
            printf("%s %.4lf\n", e.first.c_str(), 100.0 * e.second / all);
        }

    }
    return 0;
}
