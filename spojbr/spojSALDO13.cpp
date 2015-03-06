#include <iostream>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int m = s;
    while (n--) {
        int x;
        cin >> x;
        s += x;
        if (s < m) m = s;
    }
    cout << m << endl;
    return 0;
}
