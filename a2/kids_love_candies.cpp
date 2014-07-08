#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        int N, K; cin >> N >> K;
        int children = 0;
        for (int n = 0; n < N; ++n) {
            int x; cin >> x;
            children += x / K;
        }
        cout << children << endl;
    }
    return 0;
}
