#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        int N, X, Y; cin >> N >> X >> Y;
        int fc; cin >> fc;
        for (int n = 1; n < N-1; ++n) {
            int c; cin >> c;
        }
        int lc; cin >> lc;
        if (fc == X && lc == Y) {
            cout << "BOTH\n";
        } else if (fc == X && lc != Y) {
            cout << "EASY\n";
        } else if (fc != X && lc == Y) {
            cout << "HARD\n";
        } else {
            cout << "OKAY\n";
        }
    }
    return 0;
}
