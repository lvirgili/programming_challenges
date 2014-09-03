#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int m = 100;
    if (a / 2 < m) m = a / 2;
    if (b / 3 < m) m = b / 3;
    if (c / 5 < m) m = c / 5;
    cout << m << endl;
    return 0;
}
