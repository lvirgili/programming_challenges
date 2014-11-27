#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n - 1; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int j = 1;
    unsigned i = 0;
    while (v[i] == j) {
        ++i; ++j;
    }
    cout << j << endl;
    return 0;
}
