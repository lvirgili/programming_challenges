#include <iostream>
#include <cmath>
using namespace std;

unsigned long quad(int l) {
    if (l == 1)
        return 1;
    else
        return 4 * quad(l / 2);
}

int main() {
    int l; cin >> l;
    cout << quad(l) << endl;
    return 0;
}
