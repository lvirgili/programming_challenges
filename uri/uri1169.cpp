#include <iostream>
using namespace std;

typedef unsigned long long natural;

natural pow(natural base, natural expoent) {
    if (expoent == 0)
        return 1;
    if (expoent == 1)
        return base;
    else
        if (expoent % 2 == 0)
            return pow(base * base, expoent / 2);
        else
            return base * pow(base * base, expoent / 2);
}

int main() {
    int N; cin >> N;
    for (int n = 0; n < N; ++n) {
        natural squares; cin >> squares;
        natural total = pow(2, squares) - 1;
        total = (total / 12) / 1000;
        cout << total << " kg\n";
    }
    return 0;
}
