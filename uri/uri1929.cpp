#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 4; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    bool yes = false;
    do {
        if (v[0] + v[1] > v[2] && v[0] + v[2] > v[1] && v[1] + v[2] > v[0]) {
            yes = true;
            break;
        }
    } while (next_permutation(v.begin(), v.end()));
    if (yes) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    return 0;
}
