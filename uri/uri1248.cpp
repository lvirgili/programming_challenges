#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string all, morning, lunch;
        getline(cin, all);
        getline(cin, morning);
        getline(cin, lunch);
        set<char> s;
        bool cheat = false;
        for (auto &c: all) s.insert(c);
        for (auto &c: morning) {
            auto i = s.erase(c);
            if (i == 0) cheat = true;
        }
        for (auto &c: lunch) {
            auto i = s.erase(c);
            if (i == 0) cheat = true;
        }
        if (cheat) cout << "CHEATER\n";
        else {
            for (auto &c: s) cout << c;
            cout << endl;
        }
    }
    return 0;
}
