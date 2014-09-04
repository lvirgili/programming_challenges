#include <iostream>
using namespace std;

int main() {
    unsigned long v[13];
    v[0] = 1;
    for (int i = 1; i < 13; ++i) {
        v[i] = i * v[i-1];
    }
    int n; cin >> n;
    cout << v[n] << endl;
    return 0;
}
