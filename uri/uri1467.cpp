#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 1 && b == 0 && c == 0) cout << "A\n";
        else if (a == 0 && b == 1 && c == 1) cout << "A\n";
        else if (a == 0 && b == 1 && c == 0) cout << "B\n";
        else if (a == 1 && b == 0 && c == 1) cout << "B\n";
        else if (a == 0 && b == 0 && c == 1) cout << "C\n";
        else if (a == 1 && b == 1 && c == 0) cout << "C\n";
        else cout << "*\n";
    }
    return 0;
}
