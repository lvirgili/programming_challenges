#include <iostream>
using namespace std;

int main() {
    long A, L;
    long c = 1;
    while (cin >> A >> L, (A > 0 && L >0)) {
        long x = A;
        long terms = 1;
        while (x != 1) {
            if (x % 2 == 0)
                x /= 2;
            else {
                x = 3 * x + 1;
                if (x > L)
                    break;
            }
            ++terms;
        }
        cout << "Case " << c++ << ": A = " << A << ", limit = " << L
             << ", number of terms = " << terms << endl;
    }
    return 0;
}
