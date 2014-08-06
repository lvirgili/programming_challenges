#include <iostream>
using namespace std;

int main() {
    int x, max = 0;
    while (cin >> x, x != 0) {
        if (x > max)
            max = x;
    }
    cout << max << endl;
    return 0;
}
