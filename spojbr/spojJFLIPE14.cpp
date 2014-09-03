#include <iostream>
using namespace std;

int main() {
    int p, r;
    cin >> p >> r;
    if (p == 0) {
        cout << "C\n";
    } else if (r == 0) {
        cout << "B\n";
    } else {
        cout << "A\n";
    }
    return 0;
}
