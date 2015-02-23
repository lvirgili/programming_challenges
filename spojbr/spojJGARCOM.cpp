#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int q = 0;
    while (n--) {
        int l, c;
        cin >> l >> c;
        if (l > c) q += c;
    }
    cout << q << endl;
    return 0;
}
