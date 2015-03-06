#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long a1, b1, a2, b2, a, b;
    cin >> a1 >> b1 >> a2 >> b2 >> a >> b;
    if (a1 >= a && b1 >= b) cout << "S\n";
    else if (a2 >= a && b2 >= b) cout << "S\n";
    else if (max(a1, a2) >= a && b1 + b2 >= b) cout << "S\n";
    else if (a1 + a2 >= a && max(b1, b2) >= b) cout << "S\n";
    else cout << "N\n";
    return 0;
}
