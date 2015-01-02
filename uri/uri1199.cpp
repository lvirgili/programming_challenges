#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;
    while (cin >> s, s[0] != '-') {
        stringstream ss(s);
        if (s[0] == '0' && s[1] == 'x') {
            unsigned x;
            ss >> hex >> x;
            cout << dec << x << endl;
        } else {
            unsigned x;
            ss >> x;
            cout << "0x" << hex << uppercase << x << endl;
        }
    }
    return 0;
}
