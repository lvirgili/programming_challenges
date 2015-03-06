#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main() {
    int n, h;
    while (cin >> n >> h) {
        vector<int> m[1024];
        for (int i = 0; i < n; ++i) {
            int v, t;
            cin >> v >> t;
            m[t-1].push_back(v);
        }
        for (int i = 0; i < h; ++i) {
            sort(m[i].begin(), m[i].end(), greater<int>());
        }
        // for (int i = 0; i < h; ++i) {
        //     cout << "t = " << i << " -> ";
        //     for (auto j = 0u; j < m[i].size(); ++j) {
        //         cout << m[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        for (int i = 1; i < h; ++i) {
            for (int j = 1; j < m[i].size() && j <= i; ++j) {
                m[i-j].push_back(m[i][j]);
                m[i][j] = 0;
            }
        }
        for (int i = 0; i < h; ++i) {
            sort(m[i].begin(), m[i].end(), greater<int>());
        }
        // for (int i = 0; i < h; ++i) {
        //     cout << "t = " << i << " -> ";
        //     for (auto j = 0u; j < m[i].size(); ++j) {
        //         cout << m[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        long total = 0;
        for (int i = 0; i < h; ++i) {
            for (auto j = 1u; j < m[i].size(); ++j) {
                total += m[i][j];
            }
        }
        cout << total << endl;
    }
    return 0;
}
