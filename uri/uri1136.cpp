#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, b;
    while (cin >> n >> b, n && b) {
        vector<bool> v(n + 1, false);
        int nums[b];
        for (int i = 0; i < b; ++i) {
            cin >> nums[i];
        }
        for (int i = 0; i < b; ++i) {
            for (int j = 0; j < b; ++j) {
                v[fabs(nums[i] - nums[j])] = true;
            }
        }
        bool y = true;
        for (int i = 0; i <= n; ++i) {
            if (v[i] == false) {
                y = false;
                break;
            }
        }
        if (y) cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}
