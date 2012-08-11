#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n, n != 0) {
        for (int m = 1;; ++m) {
            vector<bool> cities(n, true);
            int city = 0;
            int already = 0;
            bool flag = true;
            while (true) {
                if (city >= n) city %= n;
                if (city == 12) {
                    if (already != (n - 1)) {
                        flag = false;
                    } else {
                        flag = true;
                    }
                    break;
                }
                cities[city] = false;
                ++already;
                int next = 0;
                while (true) {
                    if (city >= n) {
                        city %= n;
                    }
                    if (cities[city] == true) {
                        ++next;
                        if (next == m) break;
                    }
                    ++city;
                }
            }
            if (flag == true) {
                cout << m << endl;
                break;
            }
        }
    }
    return 0;
}
