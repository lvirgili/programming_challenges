#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v, v + n, greater<int>());
    int taken = 0;
    int i;
    for (i = 0; i < n; ++i) {
        taken += v[i];
        sum -= v[i];
        if (taken > sum) break;
    }
    cout << i + 1 << endl;
    return 0;
}
