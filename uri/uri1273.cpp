#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int n;
    bool print = false;
    while (cin >> n, n) {
        string ss[n];
        unsigned s = 0;
        for (int i = 0; i < n; ++i) {
            cin >> ss[i];
            s = (s > ss[i].size()) ? s : ss[i].size();
        }
        if (print) cout << endl;
        print = true;
        for (auto &x : ss) {
            printf("%*s\n", s, x.c_str());
        }
    }
    return 0;
}
