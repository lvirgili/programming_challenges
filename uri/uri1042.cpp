#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int v[3], w[3];
    for (int i = 0; i < 3; ++i) {
        cin >> v[i];
        w[i] = v[i];
    }
    sort(w, w+3);
    for (int i = 0; i < 3; ++i) cout << w[i] << endl;
    cout << endl;
    for (int i = 0; i < 3; ++i) cout << v[i] << endl;
    return 0;
}
