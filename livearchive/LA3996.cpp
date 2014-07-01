#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        int n; cin >> n;
        int v[10]; memset(v, 0, 10 * sizeof(int));
        for (int i = 0; i <= n; ++i) {
            int num = i;
            while (num > 0) {
                v[num % 10]++;
                num /= 10;
            }
        }
        for (int i = 0; i < 9; ++i) {
            cout << v[i] << ' ';
        }
        cout << v[9] << endl;
    }
    return 0;
}
