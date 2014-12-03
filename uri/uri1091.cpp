#include <iostream>
using namespace std;

int main() {
    int k;
    while (cin >> k, k) {
        int n, m;
        cin >> n >> m;
        while (k--) {
            int x, y;
            cin >> x >> y;
            x -= n;
            y -= m;
            if (x == 0 || y == 0) cout << "divisa\n";
            else if (x > 0 && y > 0) cout << "NE\n";
            else if (x > 0 && y < 0) cout << "SE\n";
            else if (x < 0 && y > 0) cout << "NO\n";
            else cout << "SO\n";
        }
    }
    return 0;
}
