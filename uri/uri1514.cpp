#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m, n) {
        vector<int> solved(n, false);
        vector<int> problems(m, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                bool x;
                cin >> x;
                if (x) {
                    ++solved[i];
                    ++problems[j];
                }
            }
        }
        vector<bool> c(4, true);
        for (int i = 0; i < n; ++i) {
            if (solved[i] == 0) {
                c[3] = false;
            }
            if (solved[i] == m) {
                c[0] = false;
            }
        }
        for (int i = 0; i < m; ++i) {
            if (problems[i] == n) {
                c[2] = false;
            }
            if (problems[i] == 0) {
                c[1] = false;
            }
        }
        int t = c[0] + c[1] + c[2] + c[3];
        cout << t << endl;
    }
    return 0;
}
