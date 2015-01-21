#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        long v[n], w[n];
        for (long i = 0; i < n; ++i) {
            cin >> v[i];
            w[i] = i + 1;
        }
        long s = 0, j = 0;
        for (long i = 0; i < n; ++i) {
            if (v[i] == w[j]) ++j;
            else ++s;
        }
        cout << s << endl;
    }
    return 0;
}
