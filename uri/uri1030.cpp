#include <iostream>
using namespace std;

long josephus(int n, int k) {
    if (n == 1) return 0;
    else return (josephus(n - 1, k) + k) % n;
}


int main() {
    int t;
    cin >> t;
    int c = 1;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << "Case " << c++ << ": " << josephus(n, k) + 1 << endl;
    }
    return 0;
}
