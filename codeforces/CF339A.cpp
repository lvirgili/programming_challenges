#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    multiset<char> ss;
    for (auto &c : s) {
        if (c != '+') ss.insert(c);
    }
    bool p = false;
    for (auto &e : ss) {
        if (p) cout << '+';
        p = true;
        cout << e;
    }
    cout << endl;
    return 0;
}
