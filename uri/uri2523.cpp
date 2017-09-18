#include <bits/stdc++.h>
using namespace std;

int main() {
    string code;
    while (cin >> code) {
        int n; cin >> n;
        while (n--) {
            int x; cin >> x;
            cout << code[x - 1];
        }
        cout << endl;
        cin.ignore(256, '\n');
    }
    return 0;
}