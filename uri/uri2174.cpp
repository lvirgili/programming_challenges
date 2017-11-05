#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    set<string> pkms;
    cin.ignore(256, '\n');
    while (x--) {
        string pkmn; getline(cin, pkmn);
        pkms.insert(pkmn);
    }
    cout << "Falta(m) " << 151 - pkms.size() << " pomekon(s).\n";
    return 0;
}