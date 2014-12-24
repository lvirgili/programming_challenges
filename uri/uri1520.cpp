#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int x, y;
        vector<int> s;
        for (int i = 0; i < n; ++i) {
            cin >> x >> y;
            for (int j = x; j <= y; ++j) {
                s.push_back(j);
            }
        }
        sort(s.begin(), s.end());
        int p;
        cin >> p;
        unsigned first = 10101;
        unsigned last;
        for (auto i = 0u; i < s.size(); ++i) {
            if (s[i] == p) {
                first = i;
                last = i;
                break;
            }
        }
        while (last < s.size() && s[last] == p) ++last;
        if (first != 10101) {
            cout << p << " found from " << first << " to " << last - 1 << endl;
        } else {
            cout << p << " not found\n";
        }
    }
    return 0;
}
