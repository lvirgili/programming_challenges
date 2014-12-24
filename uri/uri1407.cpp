#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, c, k;
    while (cin >> n >> c >> k, n) {
        vector<long> numbers(k + 1, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < c; ++j) {
                int x;
                cin >> x;
                ++numbers[x];
            }
        }
        long min = *min_element(numbers.begin() + 1, numbers.end());
        bool p = false;
        for (auto i = 1u; i < numbers.size(); ++i) {
            if (numbers[i] == min) {
                if (p) cout << ' ';
                cout << i;
                p = true;
            }
        }
        cout << endl;
    }
    return 0;
}
