#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        cin.ignore(256, '\n');
        string s;
        getline(cin, s);
        int x; cin >> x;
        for (auto c : s) {
            char n = c - x;
            if (n < 'A') n = 'Z' - ('A' - n - 1);
            cout << n;
        }
        cout << endl;
    }
    return 0;
}
