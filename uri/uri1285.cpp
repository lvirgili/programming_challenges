#include <iostream>
#include <vector>
using namespace std;

bool repeats(int n) {
    vector<bool> dig(10, false);
    while (n) {
        int d = n % 10;
        if (dig[d]) return true;
        dig[d] = true;
        n /= 10;
    }
    return false;
}

int main() {
    bool v[5001];
    for (int i = 1; i <= 5000; ++i) {
        v[i] = repeats(i);
    }
    int n, m;
    while (cin >> n >> m) {
        int t = 0;
        for (int i = n; i <= m; ++i)
            if (!v[i]) ++t;
        cout << t << endl;
    }
    return 0;
}
