#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        int N; cin >> N;
        int P; cin >> P;
        int h[P];
        for (int p = 0; p < P; ++p) {
            cin >> h[p];
        }
        long cont = 0;
        for (int n = 1; n <= N; ++n) {
            if (n % 7 == 6 || n % 7 == 0)
                continue;
            for (int p = 0; p < P; ++p) {
                if (n % h[p] == 0) {
                    ++cont;
                    break;
                }
            }
        }
        cout << cont << endl;
    }
    return 0;
}
