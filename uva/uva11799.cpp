#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N; cin >> N;
        int max = 0;
        for (int n = 0; n < N; ++n) {
            int c;
            cin >> c;
            if (c > max) {
                max = c;
            }
        }
        cout << "Case " << t+1 << ": " << max << endl;
    }
    return 0;
}
