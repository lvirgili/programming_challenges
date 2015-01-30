#include <iostream>
#include <cstring>
using namespace std;

int main() {
    bool b[32][1024];
    memset(b, false, sizeof b);
    for (int i = 1; i <= 30; ++i) {
        int turns = i;
        int pos = 0;
        while (turns >= 1 && pos <= 1000) {
            for (int j = 0; j < turns; ++j) {
                pos += turns;
                b[i][pos] = true;
                if (pos > 1000) break;
            }
            --turns;
        }
    }
    int n, v;
    while (cin >> n >> v, n) {
        bool f = false;
        for (int i = v; i > 0; --i) {
            if (b[i][n]) {
                f = true;
                break;
            }
        }
        if (f) cout << "possivel\n";
        else cout << "impossivel\n";
    }
    return 0;
}
