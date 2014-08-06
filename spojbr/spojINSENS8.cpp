#include <iostream>
using namespace std;

#define SQ(X) (X) * (X)

int main() {
    int N; cin >> N;
    unsigned long D = 0;
    for (int n = 0; n < N; ++n) {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        D += SQ(X1 - X2) + SQ(Y1 - Y2);
    }
    cout << D << endl;
    return 0;
}
