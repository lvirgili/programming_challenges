#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (auto &c : s) {
        switch(c) {
        case 'a': case 'A': case 'e': case 'E':
        case 'y': case 'Y': case 'o': case 'O':
        case 'u': case 'U': case 'i': case 'I':
            continue;
            break;
        default:
            cout << "." << (char)tolower(c);
        }
    }
    cout << endl;
    return 0;
}
