#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, l, p;
    cin >> a >> l >> p;
    if (n <= a && n <= l && n <= p) cout << "S\n";
    else cout << "N\n";
    return 0;
}
