#include <string>
#include <iostream>
#include <list>
using namespace std;

int main() {
    string s; cin >> s;
    list<char> l;
    for (unsigned i = 0; i < s.size(); ++i) {
        l.push_back(s[i]);
    }
    list<char>::iterator it1, it2;
    it1 = it2 = l.begin();
    ++it2;

    while (it2 != l.end()) {
        if (*it1 == *it2) {
            l.erase(it1);
            it2 = l.erase(it2);
            it1 = it2;
            if (it1 != l.begin()) {
                --it1;
            } else {
                ++it2;
            }
        } else {
            ++it1; ++it2;
        }
    }

    for (list<char>::iterator it = l.begin(); it != l.end(); ++it) {
        cout << *it;
    }
    cout << endl;
    return 0;
}
