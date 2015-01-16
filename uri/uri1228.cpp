#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int l[n], c[n], pos[n+1];
        for (int i = 0; i < n; ++i) {
            cin >> l[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
            pos[c[i]] = i;
        }
        int s = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (pos[l[i]] > pos[l[j]]) ++s;
            }
        }
        cout << s << endl;
    }
    return 0;
}
