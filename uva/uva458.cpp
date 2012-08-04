#include <iostream>
using namespace std;

int main() {
    char ch;
    while (cin >> noskipws >> ch) {
        if (ch == '\n') {
            cout << endl;
        } else {
            cout << (char)(ch - 7);
        }
    }
    return 0;
}
