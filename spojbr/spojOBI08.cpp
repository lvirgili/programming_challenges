#include <iostream>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    int total = 0;
    for (int n = 0; n < N; ++n) {
        int p1, p2;
        cin >> p1 >> p2;
        if (p1 + p2 >= P)
            ++total;
    }
    cout << total << endl;
    return 0;
}
