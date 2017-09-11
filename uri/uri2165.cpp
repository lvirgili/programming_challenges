#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    if (s.size() <= 140) {
        cout << "TWEET\n";
    } else {
        cout << "MUTE\n";
    }
    return 0;
}
