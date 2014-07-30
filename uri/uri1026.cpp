#include <iostream>
using namespace std;

int main() {
    unsigned x, y;
    while (cin >> x >> y)
        cout << (x xor y) << endl;
    return 0;
}
