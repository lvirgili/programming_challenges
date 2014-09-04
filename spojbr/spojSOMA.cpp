#include <iostream>
using namespace std;

int main() {
    long long soma = 0;
    int N; cin >> N;
    for (int n = 0; n < N; ++n) {
        long long x; cin >> x;
        soma += x;
    }
    cout << soma << endl;
    return 0;
}
