#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        for (auto &c : s) {
            if (islower(c)) {
                cout << (char)(((c - 'a') + 13) % 26 + 'a');
            } else if (isupper(c)) {
                cout << (char)(((c - 'A') + 13) % 26 + 'A');
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}
