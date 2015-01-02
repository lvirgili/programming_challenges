#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int l;
        cin >> l;
        int v[l];
        for (int i = 0; i < l; ++i) cin >> v[i];
        int p = 0;
        int b = 0;
        while (b < l) {
            for (int i = l - 1; i > b; --i) {
                if (v[i] < v[i - 1]) {
                    swap(v[i], v[i - 1]);
                    ++p;
                }
            }
            ++b;
        }
        cout << "Optimal train swapping takes " << p << " swaps.\n";
    }
    return 0;
}
