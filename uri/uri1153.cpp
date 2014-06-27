#include <iostream>
using namespace std;

long fat(long n) {
    if (n == 0)
        return 1;
    return n * fat(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << fat(n) << endl;
    return 0;
}
