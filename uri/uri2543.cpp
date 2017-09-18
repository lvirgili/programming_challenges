#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, id;
    while (cin >> n >> id) {
        int x, y;
        int total = 0;
        while (n--) {
            cin >> x >> y;
            if (x == id && y == 0) ++total;
        }
        cout << total << endl;
    }
    return 0;
}