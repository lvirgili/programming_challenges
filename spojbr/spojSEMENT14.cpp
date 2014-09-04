#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    long F, R;
    cin >> F >> R;
    long v[R];
    for (int i = 0; i < R; ++i) {
        cin >> v[i];
    }
    long total;
    total = max((v[0] - 1), (F - v[R-1]));
    for (int i = 0; i < R-1; ++i) {
        total = max(total, (v[i+1] - v[i]) / 2);
    }
    cout << total << endl;
    return 0;
}
