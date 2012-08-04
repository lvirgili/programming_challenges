//These easy ones, for the moments you need to be happy with yourself.

#include <iostream>
using namespace std;

int main() {
    bool first = true;
    char ch;
    while (cin >> noskipws >> ch) {
        if (ch == '"') {
            if (first == true) {
                cout << "``";
                first = false;
            } else {
                cout << "''";
                first = true;
            }
        } else {
            cout << ch;
        }
    }
    return 0;
}
