#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    int c = 1;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        cout << "Case " << c++ << ": " << a[n/2] << endl;
    }
    return 0;
}
